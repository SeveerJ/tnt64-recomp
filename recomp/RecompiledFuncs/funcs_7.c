#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80064F54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80064F54: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80064F58: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80064F5C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80064F60: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80064F64: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80064F68: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80064F6C:
    // 0x80064F6C: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x80064F70: addu        $t7, $t7, $s0
    ctx->r15 = ADD32(ctx->r15, ctx->r16);
    // 0x80064F74: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80064F78: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80064F7C: subu        $t7, $t7, $s0
    ctx->r15 = SUB32(ctx->r15, ctx->r16);
    // 0x80064F80: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80064F84: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x80064F88: jal         0x80070528
    // 0x80064F8C: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    func_80070528(rdram, ctx);
        goto after_0;
    // 0x80064F8C: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    after_0:
    // 0x80064F90: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80064F94: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x80064F98: bne         $at, $zero, L_80064F6C
    if (ctx->r1 != 0) {
        // 0x80064F9C: nop
    
            goto L_80064F6C;
    }
    // 0x80064F9C: nop

    // 0x80064FA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80064FA4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80064FA8: jr          $ra
    // 0x80064FAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80064FAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80064FB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80064FB0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80064FB4: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x80064FB8: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x80064FBC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80064FC0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80064FC4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80064FC8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80064FCC: lbu         $a0, 0x0($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X0);
    // 0x80064FD0: jal         0x80070D30
    // 0x80064FD4: nop

    func_80070D30(rdram, ctx);
        goto after_0;
    // 0x80064FD4: nop

    after_0:
    // 0x80064FD8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80064FDC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80064FE0: addiu       $a1, $a1, -0x2BD8
    ctx->r5 = ADD32(ctx->r5, -0X2BD8);
    // 0x80064FE4: jal         0x8006CF08
    // 0x80064FE8: addiu       $a0, $a0, -0x2BE0
    ctx->r4 = ADD32(ctx->r4, -0X2BE0);
    alSynFreeFX(rdram, ctx);
        goto after_1;
    // 0x80064FE8: addiu       $a0, $a0, -0x2BE0
    ctx->r4 = ADD32(ctx->r4, -0X2BE0);
    after_1:
    // 0x80064FEC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80064FF0: lw          $a0, -0x3F0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3F0);
    // 0x80064FF4: jal         0x80070EC8
    // 0x80064FF8: nop

    func_80070EC8(rdram, ctx);
        goto after_2;
    // 0x80064FF8: nop

    after_2:
    // 0x80064FFC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80065000: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80065004: addiu       $a1, $a1, -0x2BC0
    ctx->r5 = ADD32(ctx->r5, -0X2BC0);
    // 0x80065008: jal         0x8006CF08
    // 0x8006500C: addiu       $a0, $a0, -0x2BC8
    ctx->r4 = ADD32(ctx->r4, -0X2BC8);
    alSynFreeFX(rdram, ctx);
        goto after_3;
    // 0x8006500C: addiu       $a0, $a0, -0x2BC8
    ctx->r4 = ADD32(ctx->r4, -0X2BC8);
    after_3:
    // 0x80065010: jal         0x8007116C
    // 0x80065014: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8007116C(rdram, ctx);
        goto after_4;
    // 0x80065014: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x80065018: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8006501C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80065020: addiu       $a1, $a1, -0x2BA4
    ctx->r5 = ADD32(ctx->r5, -0X2BA4);
    // 0x80065024: jal         0x8006CF08
    // 0x80065028: addiu       $a0, $a0, -0x2BAC
    ctx->r4 = ADD32(ctx->r4, -0X2BAC);
    alSynFreeFX(rdram, ctx);
        goto after_5;
    // 0x80065028: addiu       $a0, $a0, -0x2BAC
    ctx->r4 = ADD32(ctx->r4, -0X2BAC);
    after_5:
    // 0x8006502C: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x80065030: addiu       $at, $zero, -0x4000
    ctx->r1 = ADD32(0, -0X4000);
    // 0x80065034: lh          $t8, 0xE($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XE);
    // 0x80065038: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8006503C: sh          $t8, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r24;
    // 0x80065040: lh          $t9, 0x10($t7)
    ctx->r25 = MEM_H(ctx->r15, 0X10);
    // 0x80065044: sh          $zero, 0x46($sp)
    MEM_H(0X46, ctx->r29) = 0;
    // 0x80065048: sh          $zero, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = 0;
    // 0x8006504C: sh          $zero, 0x48($sp)
    MEM_H(0X48, ctx->r29) = 0;
    // 0x80065050: sh          $t9, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r25;
    // 0x80065054: lhu         $t0, 0x8($t7)
    ctx->r8 = MEM_HU(ctx->r15, 0X8);
    // 0x80065058: nop

    // 0x8006505C: andi        $t1, $t0, 0x3FFF
    ctx->r9 = ctx->r8 & 0X3FFF;
    // 0x80065060: sh          $t1, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r9;
    // 0x80065064: lhu         $t2, 0x8($t7)
    ctx->r10 = MEM_HU(ctx->r15, 0X8);
    // 0x80065068: lhu         $s0, 0x8($t7)
    ctx->r16 = MEM_HU(ctx->r15, 0X8);
    // 0x8006506C: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x80065070: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x80065074: beq         $at, $zero, L_80065110
    if (ctx->r1 == 0) {
        // 0x80065078: sh          $t3, 0x8($t7)
        MEM_H(0X8, ctx->r15) = ctx->r11;
            goto L_80065110;
    }
    // 0x80065078: sh          $t3, 0x8($t7)
    MEM_H(0X8, ctx->r15) = ctx->r11;
L_8006507C:
    // 0x8006507C: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80065080: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80065084: jal         0x80064CE0
    // 0x80065088: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    func_80064CE0(rdram, ctx);
        goto after_6;
    // 0x80065088: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_6:
    // 0x8006508C: sll         $t8, $s1, 2
    ctx->r24 = S32(ctx->r17 << 2);
    // 0x80065090: addu        $t8, $t8, $s1
    ctx->r24 = ADD32(ctx->r24, ctx->r17);
    // 0x80065094: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80065098: lh          $t4, 0x38($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X38);
    // 0x8006509C: lh          $t5, 0x3A($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X3A);
    // 0x800650A0: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x800650A4: subu        $t8, $t8, $s1
    ctx->r24 = SUB32(ctx->r24, ctx->r17);
    // 0x800650A8: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x800650AC: sh          $zero, 0x40($sp)
    MEM_H(0X40, ctx->r29) = 0;
    // 0x800650B0: sh          $t4, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r12;
    // 0x800650B4: sh          $t5, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r13;
    // 0x800650B8: addu        $s2, $t6, $t8
    ctx->r18 = ADD32(ctx->r14, ctx->r24);
    // 0x800650BC: lbu         $t9, 0x19($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X19);
    // 0x800650C0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800650C4: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800650C8: ori         $t0, $t9, 0x1
    ctx->r8 = ctx->r25 | 0X1;
    // 0x800650CC: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
    // 0x800650D0: sb          $t0, 0x1($s2)
    MEM_B(0X1, ctx->r18) = ctx->r8;
    // 0x800650D4: addiu       $a1, $a1, -0x2B84
    ctx->r5 = ADD32(ctx->r5, -0X2B84);
    // 0x800650D8: jal         0x8006CF08
    // 0x800650DC: addiu       $a0, $a0, -0x2B8C
    ctx->r4 = ADD32(ctx->r4, -0X2B8C);
    alSynFreeFX(rdram, ctx);
        goto after_7;
    // 0x800650DC: addiu       $a0, $a0, -0x2B8C
    ctx->r4 = ADD32(ctx->r4, -0X2B8C);
    after_7:
    // 0x800650E0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800650E4: jal         0x8006FE38
    // 0x800650E8: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_8006FE38(rdram, ctx);
        goto after_8;
    // 0x800650E8: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_8:
    // 0x800650EC: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x800650F0: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800650F4: addiu       $a1, $a1, -0x2B68
    ctx->r5 = ADD32(ctx->r5, -0X2B68);
    // 0x800650F8: jal         0x8006CF08
    // 0x800650FC: addiu       $a0, $a0, -0x2B70
    ctx->r4 = ADD32(ctx->r4, -0X2B70);
    alSynFreeFX(rdram, ctx);
        goto after_9;
    // 0x800650FC: addiu       $a0, $a0, -0x2B70
    ctx->r4 = ADD32(ctx->r4, -0X2B70);
    after_9:
    // 0x80065100: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80065104: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x80065108: bne         $at, $zero, L_8006507C
    if (ctx->r1 != 0) {
        // 0x8006510C: nop
    
            goto L_8006507C;
    }
    // 0x8006510C: nop

L_80065110:
    // 0x80065110: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x80065114: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80065118: sh          $s0, 0x8($t1)
    MEM_H(0X8, ctx->r9) = ctx->r16;
    // 0x8006511C: lw          $a0, -0x3F0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3F0);
    // 0x80065120: jal         0x80070F70
    // 0x80065124: nop

    func_80070F70(rdram, ctx);
        goto after_10;
    // 0x80065124: nop

    after_10:
    // 0x80065128: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8006512C: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80065130: addiu       $a1, $a1, -0x2B54
    ctx->r5 = ADD32(ctx->r5, -0X2B54);
    // 0x80065134: jal         0x8006CF08
    // 0x80065138: addiu       $a0, $a0, -0x2B5C
    ctx->r4 = ADD32(ctx->r4, -0X2B5C);
    alSynFreeFX(rdram, ctx);
        goto after_11;
    // 0x80065138: addiu       $a0, $a0, -0x2B5C
    ctx->r4 = ADD32(ctx->r4, -0X2B5C);
    after_11:
    // 0x8006513C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80065140: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80065144: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80065148: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8006514C: jr          $ra
    // 0x80065150: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80065150: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80065154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80065154: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80065158: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006515C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80065160: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x80065164: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80065168: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8006516C: beq         $at, $zero, L_800651B4
    if (ctx->r1 == 0) {
        // 0x80065170: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_800651B4;
    }
    // 0x80065170: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
L_80065174:
    // 0x80065174: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80065178: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8006517C: jal         0x80064E10
    // 0x80065180: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_80064E10(rdram, ctx);
        goto after_0;
    // 0x80065180: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x80065184: lh          $t6, 0x22($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X22);
    // 0x80065188: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8006518C: nop

    // 0x80065190: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80065194: beq         $at, $zero, L_800651A4
    if (ctx->r1 == 0) {
        // 0x80065198: nop
    
            goto L_800651A4;
    }
    // 0x80065198: nop

    // 0x8006519C: b           L_800651B8
    // 0x800651A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800651B8;
    // 0x800651A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800651A4:
    // 0x800651A4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800651A8: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x800651AC: bne         $at, $zero, L_80065174
    if (ctx->r1 != 0) {
        // 0x800651B0: nop
    
            goto L_80065174;
    }
    // 0x800651B0: nop

L_800651B4:
    // 0x800651B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800651B8:
    // 0x800651B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800651BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800651C0: jr          $ra
    // 0x800651C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800651C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800651C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800651C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800651CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800651D0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800651D4: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x800651D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800651DC: beq         $at, $zero, L_80065224
    if (ctx->r1 == 0) {
        // 0x800651E0: sw          $a0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r4;
            goto L_80065224;
    }
    // 0x800651E0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
L_800651E4:
    // 0x800651E4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800651E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800651EC: jal         0x80064E10
    // 0x800651F0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_80064E10(rdram, ctx);
        goto after_0;
    // 0x800651F0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x800651F4: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x800651F8: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    // 0x800651FC: jal         0x8006E4E8
    // 0x80065200: nop

    func_8006E4E8(rdram, ctx);
        goto after_1;
    // 0x80065200: nop

    after_1:
    // 0x80065204: bne         $v0, $zero, L_80065214
    if (ctx->r2 != 0) {
        // 0x80065208: nop
    
            goto L_80065214;
    }
    // 0x80065208: nop

    // 0x8006520C: b           L_80065228
    // 0x80065210: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80065228;
    // 0x80065210: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80065214:
    // 0x80065214: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80065218: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x8006521C: bne         $at, $zero, L_800651E4
    if (ctx->r1 != 0) {
        // 0x80065220: nop
    
            goto L_800651E4;
    }
    // 0x80065220: nop

L_80065224:
    // 0x80065224: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80065228:
    // 0x80065228: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006522C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80065230: jr          $ra
    // 0x80065234: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80065234: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80065238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80065238: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006523C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80065240: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80065244: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80065248: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8006524C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80065250: jal         0x800652E4
    // 0x80065254: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_800652E4(rdram, ctx);
        goto after_0;
    // 0x80065254: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80065258: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8006525C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80065260: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x80065264: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80065268: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x8006526C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80065270: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80065274: lbu         $t0, 0x0($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X0);
    // 0x80065278: nop

    // 0x8006527C: sb          $t0, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r8;
L_80065280:
    // 0x80065280: sll         $t3, $s0, 2
    ctx->r11 = S32(ctx->r16 << 2);
    // 0x80065284: sll         $t5, $s0, 2
    ctx->r13 = S32(ctx->r16 << 2);
    // 0x80065288: addu        $t5, $t5, $s0
    ctx->r13 = ADD32(ctx->r13, ctx->r16);
    // 0x8006528C: addu        $t3, $t3, $s0
    ctx->r11 = ADD32(ctx->r11, ctx->r16);
    // 0x80065290: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x80065294: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x80065298: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8006529C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800652A0: subu        $t5, $t5, $s0
    ctx->r13 = SUB32(ctx->r13, ctx->r16);
    // 0x800652A4: subu        $t3, $t3, $s0
    ctx->r11 = SUB32(ctx->r11, ctx->r16);
    // 0x800652A8: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x800652AC: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x800652B0: addu        $a0, $t2, $t3
    ctx->r4 = ADD32(ctx->r10, ctx->r11);
    // 0x800652B4: addu        $a1, $t4, $t5
    ctx->r5 = ADD32(ctx->r12, ctx->r13);
    // 0x800652B8: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    // 0x800652BC: jal         0x80070398
    // 0x800652C0: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    func_80070398(rdram, ctx);
        goto after_1;
    // 0x800652C0: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    after_1:
    // 0x800652C4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800652C8: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x800652CC: bne         $at, $zero, L_80065280
    if (ctx->r1 != 0) {
        // 0x800652D0: nop
    
            goto L_80065280;
    }
    // 0x800652D0: nop

    // 0x800652D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800652D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800652DC: jr          $ra
    // 0x800652E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800652E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800652E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800652E4: lhu         $t6, 0x8($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X8);
    // 0x800652E8: nop

    // 0x800652EC: sh          $t6, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r14;
    // 0x800652F0: lwl         $at, 0xA($a1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r5, 0XA);
    // 0x800652F4: lwr         $at, 0xD($a1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r5, 0XD);
    // 0x800652F8: nop

    // 0x800652FC: swl         $at, 0xA($a0)
    do_swl(rdram, 0XA, ctx->r4, ctx->r1);
    // 0x80065300: swr         $at, 0xD($a0)
    do_swr(rdram, 0XD, ctx->r4, ctx->r1);
    // 0x80065304: lwl         $at, 0xE($a1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r5, 0XE);
    // 0x80065308: lwr         $at, 0x11($a1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r5, 0X11);
    // 0x8006530C: nop

    // 0x80065310: swl         $at, 0xE($a0)
    do_swl(rdram, 0XE, ctx->r4, ctx->r1);
    // 0x80065314: jr          $ra
    // 0x80065318: swr         $at, 0x11($a0)
    do_swr(rdram, 0X11, ctx->r4, ctx->r1);
    return;
    // 0x80065318: swr         $at, 0x11($a0)
    do_swr(rdram, 0X11, ctx->r4, ctx->r1);
;}
RECOMP_FUNC void func_8006531C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006531C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80065320: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80065324: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80065328: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8006532C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80065330: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80065334:
    // 0x80065334: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x80065338: addu        $t7, $t7, $s0
    ctx->r15 = ADD32(ctx->r15, ctx->r16);
    // 0x8006533C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80065340: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80065344: subu        $t7, $t7, $s0
    ctx->r15 = SUB32(ctx->r15, ctx->r16);
    // 0x80065348: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8006534C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80065350: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x80065354: jal         0x80070820
    // 0x80065358: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    func_80070820(rdram, ctx);
        goto after_0;
    // 0x80065358: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    after_0:
    // 0x8006535C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80065360: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x80065364: bne         $at, $zero, L_80065334
    if (ctx->r1 != 0) {
        // 0x80065368: nop
    
            goto L_80065334;
    }
    // 0x80065368: nop

    // 0x8006536C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80065370: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80065374: jr          $ra
    // 0x80065378: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80065378: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006537C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006537C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80065380: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80065384: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80065388: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8006538C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80065390: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80065394: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80065398:
    // 0x80065398: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x8006539C: addu        $t7, $t7, $s0
    ctx->r15 = ADD32(ctx->r15, ctx->r16);
    // 0x800653A0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800653A4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800653A8: subu        $t7, $t7, $s0
    ctx->r15 = SUB32(ctx->r15, ctx->r16);
    // 0x800653AC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800653B0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800653B4: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x800653B8: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x800653BC: jal         0x80070860
    // 0x800653C0: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    func_80070860(rdram, ctx);
        goto after_0;
    // 0x800653C0: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    after_0:
    // 0x800653C4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800653C8: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x800653CC: bne         $at, $zero, L_80065398
    if (ctx->r1 != 0) {
        // 0x800653D0: nop
    
            goto L_80065398;
    }
    // 0x800653D0: nop

    // 0x800653D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800653D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800653DC: jr          $ra
    // 0x800653E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800653E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800653E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800653E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800653E8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800653EC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800653F0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800653F4: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800653F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800653FC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80065400: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80065404: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80065408: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8006540C: addiu       $t9, $sp, 0x30
    ctx->r25 = ADD32(ctx->r29, 0X30);
    // 0x80065410: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x80065414: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80065418: addiu       $t3, $sp, 0x34
    ctx->r11 = ADD32(ctx->r29, 0X34);
    // 0x8006541C: swl         $at, 0xE($t8)
    do_swl(rdram, 0XE, ctx->r24, ctx->r1);
    // 0x80065420: swr         $at, 0x11($t8)
    do_swr(rdram, 0X11, ctx->r24, ctx->r1);
    // 0x80065424: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80065428: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x8006542C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80065430: swl         $at, 0xA($t2)
    do_swl(rdram, 0XA, ctx->r10, ctx->r1);
    // 0x80065434: swr         $at, 0xD($t2)
    do_swr(rdram, 0XD, ctx->r10, ctx->r1);
    // 0x80065438: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8006543C: lhu         $t6, 0x3A($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X3A);
    // 0x80065440: nop

    // 0x80065444: sh          $t6, 0x8($t7)
    MEM_H(0X8, ctx->r15) = ctx->r14;
    // 0x80065448: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8006544C: lbu         $t0, 0x3F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X3F);
    // 0x80065450: nop

    // 0x80065454: sb          $t0, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r8;
L_80065458:
    // 0x80065458: sll         $t1, $s0, 2
    ctx->r9 = S32(ctx->r16 << 2);
    // 0x8006545C: addu        $t1, $t1, $s0
    ctx->r9 = ADD32(ctx->r9, ctx->r16);
    // 0x80065460: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x80065464: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80065468: subu        $t1, $t1, $s0
    ctx->r9 = SUB32(ctx->r9, ctx->r16);
    // 0x8006546C: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x80065470: addu        $a0, $t9, $t1
    ctx->r4 = ADD32(ctx->r25, ctx->r9);
    // 0x80065474: jal         0x800702E4
    // 0x80065478: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    func_800702E4(rdram, ctx);
        goto after_0;
    // 0x80065478: addiu       $a0, $a0, 0x18
    ctx->r4 = ADD32(ctx->r4, 0X18);
    after_0:
    // 0x8006547C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80065480: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x80065484: bne         $at, $zero, L_80065458
    if (ctx->r1 != 0) {
        // 0x80065488: nop
    
            goto L_80065458;
    }
    // 0x80065488: nop

    // 0x8006548C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80065490: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80065494: lw          $a1, 0x18($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X18);
    // 0x80065498: jal         0x8006531C
    // 0x8006549C: nop

    func_8006531C(rdram, ctx);
        goto after_1;
    // 0x8006549C: nop

    after_1:
    // 0x800654A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800654A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800654A8: jr          $ra
    // 0x800654AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800654AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800654B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800654B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800654B4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800654B8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800654BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800654C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800654C4: lbu         $s0, 0x1($t6)
    ctx->r16 = MEM_BU(ctx->r14, 0X1);
    // 0x800654C8: nop

    // 0x800654CC: beq         $s0, $zero, L_800654E4
    if (ctx->r16 == 0) {
        // 0x800654D0: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_800654E4;
    }
    // 0x800654D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800654D4: beq         $s0, $at, L_8006550C
    if (ctx->r16 == ctx->r1) {
        // 0x800654D8: nop
    
            goto L_8006550C;
    }
    // 0x800654D8: nop

    // 0x800654DC: b           L_8006552C
    // 0x800654E0: nop

        goto L_8006552C;
    // 0x800654E0: nop

L_800654E4:
    // 0x800654E4: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800654E8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800654EC: sb          $t7, 0x1($t8)
    MEM_B(0X1, ctx->r24) = ctx->r15;
    // 0x800654F0: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x800654F4: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x800654F8: lw          $a0, 0x1C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X1C);
    // 0x800654FC: jal         0x8006537C
    // 0x80065500: addiu       $a1, $t9, 0x2
    ctx->r5 = ADD32(ctx->r25, 0X2);
    func_8006537C(rdram, ctx);
        goto after_0;
    // 0x80065500: addiu       $a1, $t9, 0x2
    ctx->r5 = ADD32(ctx->r25, 0X2);
    after_0:
    // 0x80065504: b           L_8006552C
    // 0x80065508: nop

        goto L_8006552C;
    // 0x80065508: nop

L_8006550C:
    // 0x8006550C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80065510: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x80065514: sb          $zero, 0x1($t0)
    MEM_B(0X1, ctx->r8) = 0;
    // 0x80065518: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8006551C: nop

    // 0x80065520: lw          $a0, 0x1C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X1C);
    // 0x80065524: jal         0x8006537C
    // 0x80065528: addiu       $a1, $t1, 0xE
    ctx->r5 = ADD32(ctx->r9, 0XE);
    func_8006537C(rdram, ctx);
        goto after_1;
    // 0x80065528: addiu       $a1, $t1, 0xE
    ctx->r5 = ADD32(ctx->r9, 0XE);
    after_1:
L_8006552C:
    // 0x8006552C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80065530: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80065534: jr          $ra
    // 0x80065538: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80065538: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006553C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006553C: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x80065540: sw          $a1, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r5;
    // 0x80065544: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x80065548: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x8006554C: lw          $t7, 0x18($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X18);
    // 0x80065550: addiu       $t0, $t0, -0x4
    ctx->r8 = ADD32(ctx->r8, -0X4);
    // 0x80065554: lwl         $at, 0x0($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, 0X0);
    // 0x80065558: lwr         $at, 0x3($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, 0X3);
    // 0x8006555C: nop

    // 0x80065560: swl         $at, 0xE($a0)
    do_swl(rdram, 0XE, ctx->r4, ctx->r1);
    // 0x80065564: swr         $at, 0x11($a0)
    do_swr(rdram, 0X11, ctx->r4, ctx->r1);
    // 0x80065568: lwl         $t9, 0x4($t7)
    ctx->r25 = do_lwl(rdram, ctx->r25, ctx->r15, 0X4);
    // 0x8006556C: lwr         $t9, 0x7($t7)
    ctx->r25 = do_lwr(rdram, ctx->r25, ctx->r15, 0X7);
    // 0x80065570: nop

    // 0x80065574: swl         $t9, 0x12($a0)
    do_swl(rdram, 0X12, ctx->r4, ctx->r25);
    // 0x80065578: swr         $t9, 0x15($a0)
    do_swr(rdram, 0X15, ctx->r4, ctx->r25);
    // 0x8006557C: lwl         $at, 0x8($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, 0X8);
    // 0x80065580: lwr         $at, 0xB($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, 0XB);
    // 0x80065584: nop

    // 0x80065588: swl         $at, 0x16($a0)
    do_swl(rdram, 0X16, ctx->r4, ctx->r1);
    // 0x8006558C: swr         $at, 0x19($a0)
    do_swr(rdram, 0X19, ctx->r4, ctx->r1);
    // 0x80065590: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x80065594: nop

    // 0x80065598: swl         $at, 0x2($a0)
    do_swl(rdram, 0X2, ctx->r4, ctx->r1);
    // 0x8006559C: swr         $at, 0x5($a0)
    do_swr(rdram, 0X5, ctx->r4, ctx->r1);
    // 0x800655A0: lw          $t2, 0x4($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X4);
    // 0x800655A4: nop

    // 0x800655A8: swl         $t2, 0x6($a0)
    do_swl(rdram, 0X6, ctx->r4, ctx->r10);
    // 0x800655AC: swr         $t2, 0x9($a0)
    do_swr(rdram, 0X9, ctx->r4, ctx->r10);
    // 0x800655B0: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x800655B4: nop

    // 0x800655B8: swl         $at, 0xA($a0)
    do_swl(rdram, 0XA, ctx->r4, ctx->r1);
    // 0x800655BC: jr          $ra
    // 0x800655C0: swr         $at, 0xD($a0)
    do_swr(rdram, 0XD, ctx->r4, ctx->r1);
    return;
    // 0x800655C0: swr         $at, 0xD($a0)
    do_swr(rdram, 0XD, ctx->r4, ctx->r1);
;}
RECOMP_FUNC void func_800655C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800655C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800655C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800655CC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800655D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800655D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800655D8: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x800655DC: nop

    // 0x800655E0: beq         $t7, $zero, L_80065610
    if (ctx->r15 == 0) {
        // 0x800655E4: nop
    
            goto L_80065610;
    }
    // 0x800655E4: nop

    // 0x800655E8: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x800655EC: nop

    // 0x800655F0: lw          $t9, 0x1C($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X1C);
    // 0x800655F4: nop

    // 0x800655F8: lbu         $t0, 0x1A($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X1A);
    // 0x800655FC: nop

    // 0x80065600: bne         $t0, $zero, L_80065610
    if (ctx->r8 != 0) {
        // 0x80065604: nop
    
            goto L_80065610;
    }
    // 0x80065604: nop

    // 0x80065608: jal         0x800654B0
    // 0x8006560C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_800654B0(rdram, ctx);
        goto after_0;
    // 0x8006560C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_0:
L_80065610:
    // 0x80065610: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80065614: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80065618: jr          $ra
    // 0x8006561C: nop

    return;
    // 0x8006561C: nop

;}
RECOMP_FUNC void func_80065620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80065620: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80065624: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80065628: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8006562C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80065630: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x80065634: nop

    // 0x80065638: bne         $t7, $zero, L_8006566C
    if (ctx->r15 != 0) {
        // 0x8006563C: nop
    
            goto L_8006566C;
    }
    // 0x8006563C: nop

    // 0x80065640: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80065644: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80065648: sb          $t8, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r24;
    // 0x8006564C: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x80065650: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80065654: sb          $t0, 0x1($t1)
    MEM_B(0X1, ctx->r9) = ctx->r8;
    // 0x80065658: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8006565C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x80065660: lw          $a0, 0x1C($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X1C);
    // 0x80065664: jal         0x8006537C
    // 0x80065668: addiu       $a1, $t2, 0x2
    ctx->r5 = ADD32(ctx->r10, 0X2);
    func_8006537C(rdram, ctx);
        goto after_0;
    // 0x80065668: addiu       $a1, $t2, 0x2
    ctx->r5 = ADD32(ctx->r10, 0X2);
    after_0:
L_8006566C:
    // 0x8006566C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80065670: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80065674: jr          $ra
    // 0x80065678: nop

    return;
    // 0x80065678: nop

;}
RECOMP_FUNC void func_8006567C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006567C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80065680: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80065684: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80065688: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006568C: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x80065690: nop

    // 0x80065694: beq         $t7, $zero, L_800656BC
    if (ctx->r15 == 0) {
        // 0x80065698: nop
    
            goto L_800656BC;
    }
    // 0x80065698: nop

    // 0x8006569C: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x800656A0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x800656A4: sb          $zero, 0x0($t8)
    MEM_B(0X0, ctx->r24) = 0;
    // 0x800656A8: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x800656AC: nop

    // 0x800656B0: lw          $a0, 0x1C($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X1C);
    // 0x800656B4: jal         0x8006537C
    // 0x800656B8: addiu       $a1, $t9, 0xE
    ctx->r5 = ADD32(ctx->r25, 0XE);
    func_8006537C(rdram, ctx);
        goto after_0;
    // 0x800656B8: addiu       $a1, $t9, 0xE
    ctx->r5 = ADD32(ctx->r25, 0XE);
    after_0:
L_800656BC:
    // 0x800656BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800656C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800656C4: jr          $ra
    // 0x800656C8: nop

    return;
    // 0x800656C8: nop

;}
RECOMP_FUNC void func_800656CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800656CC: lwl         $at, 0x0($a1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r5, 0X0);
    // 0x800656D0: lwr         $at, 0x3($a1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r5, 0X3);
    // 0x800656D4: nop

    // 0x800656D8: swl         $at, 0x2($a0)
    do_swl(rdram, 0X2, ctx->r4, ctx->r1);
    // 0x800656DC: swr         $at, 0x5($a0)
    do_swr(rdram, 0X5, ctx->r4, ctx->r1);
    // 0x800656E0: lwl         $t8, 0x4($a1)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r5, 0X4);
    // 0x800656E4: lwr         $t8, 0x7($a1)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r5, 0X7);
    // 0x800656E8: nop

    // 0x800656EC: swl         $t8, 0x6($a0)
    do_swl(rdram, 0X6, ctx->r4, ctx->r24);
    // 0x800656F0: swr         $t8, 0x9($a0)
    do_swr(rdram, 0X9, ctx->r4, ctx->r24);
    // 0x800656F4: lwl         $at, 0x8($a1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r5, 0X8);
    // 0x800656F8: lwr         $at, 0xB($a1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r5, 0XB);
    // 0x800656FC: nop

    // 0x80065700: swl         $at, 0xA($a0)
    do_swl(rdram, 0XA, ctx->r4, ctx->r1);
    // 0x80065704: jr          $ra
    // 0x80065708: swr         $at, 0xD($a0)
    do_swr(rdram, 0XD, ctx->r4, ctx->r1);
    return;
    // 0x80065708: swr         $at, 0xD($a0)
    do_swr(rdram, 0XD, ctx->r4, ctx->r1);
    // 0x8006570C: nop

;}
RECOMP_FUNC void func_80065710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80065710: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80065714: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x80065718: jr          $ra
    // 0x8006571C: sb          $t6, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r14;
    return;
    // 0x8006571C: sb          $t6, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_80065720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80065720: sh          $zero, 0x6($a0)
    MEM_H(0X6, ctx->r4) = 0;
    // 0x80065724: lh          $t6, 0x6($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X6);
    // 0x80065728: lh          $t7, 0x2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X2);
    // 0x8006572C: nop

    // 0x80065730: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x80065734: div         $zero, $t8, $a1
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r5)));
    // 0x80065738: bne         $a1, $zero, L_80065744
    if (ctx->r5 != 0) {
        // 0x8006573C: nop
    
            goto L_80065744;
    }
    // 0x8006573C: nop

    // 0x80065740: break       7
    do_break(2147899200);
L_80065744:
    // 0x80065744: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80065748: bne         $a1, $at, L_8006575C
    if (ctx->r5 != ctx->r1) {
        // 0x8006574C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8006575C;
    }
    // 0x8006574C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80065750: bne         $t8, $at, L_8006575C
    if (ctx->r24 != ctx->r1) {
        // 0x80065754: nop
    
            goto L_8006575C;
    }
    // 0x80065754: nop

    // 0x80065758: break       6
    do_break(2147899224);
L_8006575C:
    // 0x8006575C: mflo        $t9
    ctx->r25 = lo;
    // 0x80065760: sh          $t9, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r25;
    // 0x80065764: jr          $ra
    // 0x80065768: nop

    return;
    // 0x80065768: nop

;}
RECOMP_FUNC void func_8006576C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006576C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80065770: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80065774: lh          $t6, 0x28($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X28);
    // 0x80065778: lh          $t8, 0x2A($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2A);
    // 0x8006577C: addiu       $t7, $t6, 0x80
    ctx->r15 = ADD32(ctx->r14, 0X80);
    // 0x80065780: addiu       $t9, $t8, 0x80
    ctx->r25 = ADD32(ctx->r24, 0X80);
    // 0x80065784: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80065788: sh          $t7, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r15;
    // 0x8006578C: sh          $t9, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r25;
    // 0x80065790: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80065794: lwl         $t2, 0x28($sp)
    ctx->r10 = do_lwl(rdram, ctx->r10, ctx->r29, 0X28);
    // 0x80065798: lwl         $t3, 0x2C($sp)
    ctx->r11 = do_lwl(rdram, ctx->r11, ctx->r29, 0X2C);
    // 0x8006579C: lbu         $t0, 0x27($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X27);
    // 0x800657A0: lwr         $t2, 0x2B($sp)
    ctx->r10 = do_lwr(rdram, ctx->r10, ctx->r29, 0X2B);
    // 0x800657A4: lwr         $t3, 0x2F($sp)
    ctx->r11 = do_lwr(rdram, ctx->r11, ctx->r29, 0X2F);
    // 0x800657A8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800657AC: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800657B0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800657B4: swl         $t2, 0x8($sp)
    do_swl(rdram, 0X8, ctx->r29, ctx->r10);
    // 0x800657B8: swl         $t3, 0xC($sp)
    do_swl(rdram, 0XC, ctx->r29, ctx->r11);
    // 0x800657BC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800657C0: lhu         $t4, 0x32($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X32);
    // 0x800657C4: addu        $a1, $a1, $t1
    ctx->r5 = ADD32(ctx->r5, ctx->r9);
    // 0x800657C8: swr         $t2, 0xB($sp)
    do_swr(rdram, 0XB, ctx->r29, ctx->r10);
    // 0x800657CC: swr         $t3, 0xF($sp)
    do_swr(rdram, 0XF, ctx->r29, ctx->r11);
    // 0x800657D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800657D4: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x800657D8: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x800657DC: lw          $a1, 0x110($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X110);
    // 0x800657E0: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x800657E4: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x800657E8: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x800657EC: jal         0x800653E4
    // 0x800657F0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_800653E4(rdram, ctx);
        goto after_0;
    // 0x800657F0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_0:
    // 0x800657F4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800657F8: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800657FC: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x80065800: jal         0x8006531C
    // 0x80065804: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    func_8006531C(rdram, ctx);
        goto after_1;
    // 0x80065804: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_1:
    // 0x80065808: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8006580C: addiu       $t7, $zero, 0xAA0
    ctx->r15 = ADD32(0, 0XAA0);
    // 0x80065810: sh          $zero, 0x2($t6)
    MEM_H(0X2, ctx->r14) = 0;
    // 0x80065814: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80065818: nop

    // 0x8006581C: sh          $t7, 0x6($t8)
    MEM_H(0X6, ctx->r24) = ctx->r15;
    // 0x80065820: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80065824: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80065828: lh          $t0, 0x6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X6);
    // 0x8006582C: lh          $t1, 0x2($t9)
    ctx->r9 = MEM_H(ctx->r25, 0X2);
    // 0x80065830: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80065834: subu        $t2, $t0, $t1
    ctx->r10 = SUB32(ctx->r8, ctx->r9);
    // 0x80065838: div         $zero, $t2, $t3
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r11))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r11)));
    // 0x8006583C: bne         $t3, $zero, L_80065848
    if (ctx->r11 != 0) {
        // 0x80065840: nop
    
            goto L_80065848;
    }
    // 0x80065840: nop

    // 0x80065844: break       7
    do_break(2147899460);
L_80065848:
    // 0x80065848: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8006584C: bne         $t3, $at, L_80065860
    if (ctx->r11 != ctx->r1) {
        // 0x80065850: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80065860;
    }
    // 0x80065850: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80065854: bne         $t2, $at, L_80065860
    if (ctx->r10 != ctx->r1) {
        // 0x80065858: nop
    
            goto L_80065860;
    }
    // 0x80065858: nop

    // 0x8006585C: break       6
    do_break(2147899484);
L_80065860:
    // 0x80065860: mflo        $t4
    ctx->r12 = lo;
    // 0x80065864: sh          $t4, 0x4($t9)
    MEM_H(0X4, ctx->r25) = ctx->r12;
    // 0x80065868: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8006586C: lh          $t5, 0x36($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X36);
    // 0x80065870: nop

    // 0x80065874: sh          $t5, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r13;
    // 0x80065878: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8006587C: nop

    // 0x80065880: sb          $t7, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r15;
    // 0x80065884: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80065888: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8006588C: jr          $ra
    // 0x80065890: nop

    return;
    // 0x80065890: nop

;}
RECOMP_FUNC void func_80065894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80065894: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80065898: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8006589C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800658A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800658A4: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x800658A8: nop

    // 0x800658AC: beq         $t7, $zero, L_8006592C
    if (ctx->r15 == 0) {
        // 0x800658B0: nop
    
            goto L_8006592C;
    }
    // 0x800658B0: nop

    // 0x800658B4: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x800658B8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x800658BC: addiu       $t9, $t8, 0x10
    ctx->r25 = ADD32(ctx->r24, 0X10);
    // 0x800658C0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800658C4: lbu         $t0, 0x1($t8)
    ctx->r8 = MEM_BU(ctx->r24, 0X1);
    // 0x800658C8: nop

    // 0x800658CC: bne         $t0, $at, L_800658E8
    if (ctx->r8 != ctx->r1) {
        // 0x800658D0: nop
    
            goto L_800658E8;
    }
    // 0x800658D0: nop

    // 0x800658D4: lh          $t1, 0x2($t8)
    ctx->r9 = MEM_H(ctx->r24, 0X2);
    // 0x800658D8: nop

    // 0x800658DC: sra         $t2, $t1, 4
    ctx->r10 = S32(SIGNED(ctx->r9) >> 4);
    // 0x800658E0: b           L_8006590C
    // 0x800658E4: sb          $t2, 0x10($t8)
    MEM_B(0X10, ctx->r24) = ctx->r10;
        goto L_8006590C;
    // 0x800658E4: sb          $t2, 0x10($t8)
    MEM_B(0X10, ctx->r24) = ctx->r10;
L_800658E8:
    // 0x800658E8: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x800658EC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800658F0: lh          $t4, 0x2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X2);
    // 0x800658F4: lbu         $t5, 0x1($t3)
    ctx->r13 = MEM_BU(ctx->r11, 0X1);
    // 0x800658F8: nop

    // 0x800658FC: multu       $t4, $t5
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80065900: mflo        $t6
    ctx->r14 = lo;
    // 0x80065904: sra         $t7, $t6, 12
    ctx->r15 = S32(SIGNED(ctx->r14) >> 12);
    // 0x80065908: sb          $t7, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r15;
L_8006590C:
    // 0x8006590C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80065910: nop

    // 0x80065914: lhu         $a0, 0x8($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X8);
    // 0x80065918: jal         0x80070D00
    // 0x8006591C: nop

    func_80070D00(rdram, ctx);
        goto after_0;
    // 0x8006591C: nop

    after_0:
    // 0x80065920: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80065924: jal         0x80064FB0
    // 0x80065928: nop

    func_80064FB0(rdram, ctx);
        goto after_1;
    // 0x80065928: nop

    after_1:
L_8006592C:
    // 0x8006592C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80065930: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80065934: jr          $ra
    // 0x80065938: nop

    return;
    // 0x80065938: nop

;}
RECOMP_FUNC void func_8006593C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006593C: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x80065940: nop

    // 0x80065944: beq         $t6, $zero, L_800659B8
    if (ctx->r14 == 0) {
        // 0x80065948: nop
    
            goto L_800659B8;
    }
    // 0x80065948: nop

    // 0x8006594C: lh          $t8, 0x4($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X4);
    // 0x80065950: lh          $t7, 0x2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X2);
    // 0x80065954: multu       $t8, $a1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80065958: lh          $t1, 0x4($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X4);
    // 0x8006595C: mflo        $t9
    ctx->r25 = lo;
    // 0x80065960: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80065964: blez        $t1, L_80065994
    if (SIGNED(ctx->r9) <= 0) {
        // 0x80065968: sh          $t0, 0x2($a0)
        MEM_H(0X2, ctx->r4) = ctx->r8;
            goto L_80065994;
    }
    // 0x80065968: sh          $t0, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r8;
    // 0x8006596C: lh          $t2, 0x2($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X2);
    // 0x80065970: lh          $t3, 0x6($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X6);
    // 0x80065974: nop

    // 0x80065978: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8006597C: bne         $at, $zero, L_800659B8
    if (ctx->r1 != 0) {
        // 0x80065980: nop
    
            goto L_800659B8;
    }
    // 0x80065980: nop

    // 0x80065984: lh          $t4, 0x6($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X6);
    // 0x80065988: sh          $zero, 0x4($a0)
    MEM_H(0X4, ctx->r4) = 0;
    // 0x8006598C: jr          $ra
    // 0x80065990: sh          $t4, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r12;
    return;
    // 0x80065990: sh          $t4, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r12;
L_80065994:
    // 0x80065994: lh          $t5, 0x2($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X2);
    // 0x80065998: lh          $t6, 0x6($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X6);
    // 0x8006599C: nop

    // 0x800659A0: slt         $at, $t6, $t5
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x800659A4: bne         $at, $zero, L_800659B8
    if (ctx->r1 != 0) {
        // 0x800659A8: nop
    
            goto L_800659B8;
    }
    // 0x800659A8: nop

    // 0x800659AC: lh          $t8, 0x6($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X6);
    // 0x800659B0: sh          $zero, 0x4($a0)
    MEM_H(0X4, ctx->r4) = 0;
    // 0x800659B4: sh          $t8, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r24;
L_800659B8:
    // 0x800659B8: jr          $ra
    // 0x800659BC: nop

    return;
    // 0x800659BC: nop

;}
RECOMP_FUNC void func_800659C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800659C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800659C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800659C8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800659CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800659D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800659D4: lbu         $t7, 0x1A($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X1A);
    // 0x800659D8: nop

    // 0x800659DC: bne         $t7, $zero, L_800659FC
    if (ctx->r15 != 0) {
        // 0x800659E0: nop
    
            goto L_800659FC;
    }
    // 0x800659E0: nop

    // 0x800659E4: lbu         $a0, 0x1($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X1);
    // 0x800659E8: jal         0x80067DD8
    // 0x800659EC: nop

    func_80067DD8(rdram, ctx);
        goto after_0;
    // 0x800659EC: nop

    after_0:
    // 0x800659F0: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x800659F4: nop

    // 0x800659F8: sb          $zero, 0x0($t8)
    MEM_B(0X0, ctx->r24) = 0;
L_800659FC:
    // 0x800659FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80065A00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80065A04: jr          $ra
    // 0x80065A08: nop

    return;
    // 0x80065A08: nop

;}
RECOMP_FUNC void func_80065A0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80065A0C: lbu         $t6, 0x1A($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X1A);
    // 0x80065A10: nop

    // 0x80065A14: beq         $t6, $zero, L_80065AD4
    if (ctx->r14 == 0) {
        // 0x80065A18: nop
    
            goto L_80065AD4;
    }
    // 0x80065A18: nop

    // 0x80065A1C: lbu         $t7, 0x1A($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1A);
    // 0x80065A20: nop

    // 0x80065A24: sltu        $at, $t7, $a1
    ctx->r1 = ctx->r15 < ctx->r5 ? 1 : 0;
    // 0x80065A28: beq         $at, $zero, L_80065A38
    if (ctx->r1 == 0) {
        // 0x80065A2C: nop
    
            goto L_80065A38;
    }
    // 0x80065A2C: nop

    // 0x80065A30: lbu         $a1, 0x1A($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X1A);
    // 0x80065A34: nop

L_80065A38:
    // 0x80065A38: lh          $t9, 0x16($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X16);
    // 0x80065A3C: lh          $t3, 0x18($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X18);
    // 0x80065A40: multu       $t9, $a1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80065A44: lh          $t7, 0xE($a0)
    ctx->r15 = MEM_H(ctx->r4, 0XE);
    // 0x80065A48: lh          $t8, 0x12($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X12);
    // 0x80065A4C: lh          $t2, 0x14($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X14);
    // 0x80065A50: lh          $t6, 0xA($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XA);
    // 0x80065A54: mflo        $t0
    ctx->r8 = lo;
    // 0x80065A58: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x80065A5C: sh          $t1, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r9;
    // 0x80065A60: multu       $t3, $a1
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80065A64: lh          $t1, 0x10($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X10);
    // 0x80065A68: lh          $t0, 0xC($a0)
    ctx->r8 = MEM_H(ctx->r4, 0XC);
    // 0x80065A6C: mflo        $t4
    ctx->r12 = lo;
    // 0x80065A70: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x80065A74: sh          $t5, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r13;
    // 0x80065A78: multu       $t7, $a1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80065A7C: lh          $t5, 0x8($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X8);
    // 0x80065A80: lh          $t4, 0x6($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X6);
    // 0x80065A84: mflo        $t9
    ctx->r25 = lo;
    // 0x80065A88: addu        $t8, $t6, $t9
    ctx->r24 = ADD32(ctx->r14, ctx->r25);
    // 0x80065A8C: sh          $t8, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r24;
    // 0x80065A90: multu       $t1, $a1
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80065A94: lh          $t8, 0x4($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X4);
    // 0x80065A98: lhu         $t9, 0x2($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X2);
    // 0x80065A9C: mflo        $t3
    ctx->r11 = lo;
    // 0x80065AA0: addu        $t2, $t0, $t3
    ctx->r10 = ADD32(ctx->r8, ctx->r11);
    // 0x80065AA4: lbu         $t3, 0x1A($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X1A);
    // 0x80065AA8: multu       $t5, $a1
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80065AAC: sh          $t2, 0xC($a0)
    MEM_H(0XC, ctx->r4) = ctx->r10;
    // 0x80065AB0: subu        $t2, $t3, $a1
    ctx->r10 = SUB32(ctx->r11, ctx->r5);
    // 0x80065AB4: sb          $t2, 0x1A($a0)
    MEM_B(0X1A, ctx->r4) = ctx->r10;
    // 0x80065AB8: mflo        $t7
    ctx->r15 = lo;
    // 0x80065ABC: addu        $t6, $t4, $t7
    ctx->r14 = ADD32(ctx->r12, ctx->r15);
    // 0x80065AC0: sh          $t6, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r14;
    // 0x80065AC4: multu       $t8, $a1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80065AC8: mflo        $t1
    ctx->r9 = lo;
    // 0x80065ACC: addu        $t0, $t9, $t1
    ctx->r8 = ADD32(ctx->r25, ctx->r9);
    // 0x80065AD0: sh          $t0, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r8;
L_80065AD4:
    // 0x80065AD4: jr          $ra
    // 0x80065AD8: nop

    return;
    // 0x80065AD8: nop

;}
RECOMP_FUNC void func_80065ADC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80065ADC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80065AE0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80065AE4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80065AE8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80065AEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80065AF0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80065AF4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80065AF8: jal         0x8006593C
    // 0x80065AFC: addiu       $a0, $a0, 0x538
    ctx->r4 = ADD32(ctx->r4, 0X538);
    func_8006593C(rdram, ctx);
        goto after_0;
    // 0x80065AFC: addiu       $a0, $a0, 0x538
    ctx->r4 = ADD32(ctx->r4, 0X538);
    after_0:
    // 0x80065B00: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80065B04: nop

    // 0x80065B08: lbu         $s0, 0x0($t6)
    ctx->r16 = MEM_BU(ctx->r14, 0X0);
    // 0x80065B0C: nop

    // 0x80065B10: beq         $s0, $zero, L_80065BC4
    if (ctx->r16 == 0) {
        // 0x80065B14: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80065BC4;
    }
    // 0x80065B14: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80065B18: beq         $s0, $at, L_80065B30
    if (ctx->r16 == ctx->r1) {
        // 0x80065B1C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80065B30;
    }
    // 0x80065B1C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80065B20: beq         $s0, $at, L_80065B68
    if (ctx->r16 == ctx->r1) {
        // 0x80065B24: nop
    
            goto L_80065B68;
    }
    // 0x80065B24: nop

    // 0x80065B28: b           L_80065BB0
    // 0x80065B2C: nop

        goto L_80065BB0;
    // 0x80065B2C: nop

L_80065B30:
    // 0x80065B30: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80065B34: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80065B38: jal         0x800655C4
    // 0x80065B3C: addiu       $a0, $a0, 0x518
    ctx->r4 = ADD32(ctx->r4, 0X518);
    func_800655C4(rdram, ctx);
        goto after_1;
    // 0x80065B3C: addiu       $a0, $a0, 0x518
    ctx->r4 = ADD32(ctx->r4, 0X518);
    after_1:
    // 0x80065B40: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80065B44: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80065B48: jal         0x80064F54
    // 0x80065B4C: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    func_80064F54(rdram, ctx);
        goto after_2;
    // 0x80065B4C: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    after_2:
    // 0x80065B50: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80065B54: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80065B58: jal         0x80065A0C
    // 0x80065B5C: nop

    func_80065A0C(rdram, ctx);
        goto after_3;
    // 0x80065B5C: nop

    after_3:
    // 0x80065B60: b           L_80065BC4
    // 0x80065B64: nop

        goto L_80065BC4;
    // 0x80065B64: nop

L_80065B68:
    // 0x80065B68: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80065B6C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80065B70: jal         0x800655C4
    // 0x80065B74: addiu       $a0, $a0, 0x518
    ctx->r4 = ADD32(ctx->r4, 0X518);
    func_800655C4(rdram, ctx);
        goto after_4;
    // 0x80065B74: addiu       $a0, $a0, 0x518
    ctx->r4 = ADD32(ctx->r4, 0X518);
    after_4:
    // 0x80065B78: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80065B7C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80065B80: jal         0x80064F54
    // 0x80065B84: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    func_80064F54(rdram, ctx);
        goto after_5;
    // 0x80065B84: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    after_5:
    // 0x80065B88: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80065B8C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80065B90: jal         0x80065A0C
    // 0x80065B94: nop

    func_80065A0C(rdram, ctx);
        goto after_6;
    // 0x80065B94: nop

    after_6:
    // 0x80065B98: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80065B9C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80065BA0: jal         0x800659C0
    // 0x80065BA4: nop

    func_800659C0(rdram, ctx);
        goto after_7;
    // 0x80065BA4: nop

    after_7:
    // 0x80065BA8: b           L_80065BC4
    // 0x80065BAC: nop

        goto L_80065BC4;
    // 0x80065BAC: nop

L_80065BB0:
    // 0x80065BB0: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x80065BB4: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80065BB8: addiu       $a1, $a1, -0x2B28
    ctx->r5 = ADD32(ctx->r5, -0X2B28);
    // 0x80065BBC: jal         0x80083560
    // 0x80065BC0: addiu       $a0, $a0, -0x2B40
    ctx->r4 = ADD32(ctx->r4, -0X2B40);
    Fault_Assert(rdram, ctx);
        goto after_8;
    // 0x80065BC0: addiu       $a0, $a0, -0x2B40
    ctx->r4 = ADD32(ctx->r4, -0X2B40);
    after_8:
L_80065BC4:
    // 0x80065BC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80065BC8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80065BCC: jr          $ra
    // 0x80065BD0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80065BD0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80065BD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80065BD4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80065BD8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80065BDC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80065BE0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80065BE4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80065BE8: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x80065BEC: nop

    // 0x80065BF0: beq         $t7, $zero, L_80065C64
    if (ctx->r15 == 0) {
        // 0x80065BF4: nop
    
            goto L_80065C64;
    }
    // 0x80065BF4: nop

    // 0x80065BF8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80065BFC: jal         0x80065894
    // 0x80065C00: addiu       $a0, $a0, 0x538
    ctx->r4 = ADD32(ctx->r4, 0X538);
    func_80065894(rdram, ctx);
        goto after_0;
    // 0x80065C00: addiu       $a0, $a0, 0x538
    ctx->r4 = ADD32(ctx->r4, 0X538);
    after_0:
    // 0x80065C04: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80065C08: nop

    // 0x80065C0C: lh          $a0, 0x6($t8)
    ctx->r4 = MEM_H(ctx->r24, 0X6);
    // 0x80065C10: jal         0x80070D00
    // 0x80065C14: nop

    func_80070D00(rdram, ctx);
        goto after_1;
    // 0x80065C14: nop

    after_1:
    // 0x80065C18: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80065C1C: nop

    // 0x80065C20: lwl         $at, 0xA($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0XA);
    // 0x80065C24: lwr         $at, 0xD($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0XD);
    // 0x80065C28: addiu       $s0, $t9, 0x20
    ctx->r16 = ADD32(ctx->r25, 0X20);
    // 0x80065C2C: swl         $at, 0xA($s0)
    do_swl(rdram, 0XA, ctx->r16, ctx->r1);
    // 0x80065C30: swr         $at, 0xD($s0)
    do_swr(rdram, 0XD, ctx->r16, ctx->r1);
    // 0x80065C34: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80065C38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80065C3C: lwl         $at, 0x12($t2)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r10, 0X12);
    // 0x80065C40: lwr         $at, 0x15($t2)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r10, 0X15);
    // 0x80065C44: nop

    // 0x80065C48: swl         $at, 0xE($s0)
    do_swl(rdram, 0XE, ctx->r16, ctx->r1);
    // 0x80065C4C: swr         $at, 0x11($s0)
    do_swr(rdram, 0X11, ctx->r16, ctx->r1);
    // 0x80065C50: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80065C54: nop

    // 0x80065C58: lhu         $t6, 0x2($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X2);
    // 0x80065C5C: jal         0x80064FB0
    // 0x80065C60: sh          $t6, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r14;
    func_80064FB0(rdram, ctx);
        goto after_2;
    // 0x80065C60: sh          $t6, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r14;
    after_2:
L_80065C64:
    // 0x80065C64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80065C68: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80065C6C: jr          $ra
    // 0x80065C70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80065C70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80065C74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80065C74: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80065C78: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80065C7C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80065C80: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80065C84: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80065C88: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x80065C8C: addiu       $t7, $sp, 0x38
    ctx->r15 = ADD32(ctx->r29, 0X38);
    // 0x80065C90: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80065C94: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80065C98: addiu       $t3, $sp, 0x3C
    ctx->r11 = ADD32(ctx->r29, 0X3C);
    // 0x80065C9C: swl         $at, 0x12($t6)
    do_swl(rdram, 0X12, ctx->r14, ctx->r1);
    // 0x80065CA0: swr         $at, 0x15($t6)
    do_swr(rdram, 0X15, ctx->r14, ctx->r1);
    // 0x80065CA4: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80065CA8: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80065CAC: sh          $zero, 0x16($t0)
    MEM_H(0X16, ctx->r8) = 0;
    // 0x80065CB0: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80065CB4: nop

    // 0x80065CB8: sh          $zero, 0x18($t1)
    MEM_H(0X18, ctx->r9) = 0;
    // 0x80065CBC: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80065CC0: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x80065CC4: nop

    // 0x80065CC8: swl         $at, 0xA($t2)
    do_swl(rdram, 0XA, ctx->r10, ctx->r1);
    // 0x80065CCC: swr         $at, 0xD($t2)
    do_swr(rdram, 0XD, ctx->r10, ctx->r1);
    // 0x80065CD0: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80065CD4: nop

    // 0x80065CD8: sh          $zero, 0xE($t8)
    MEM_H(0XE, ctx->r24) = 0;
    // 0x80065CDC: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80065CE0: nop

    // 0x80065CE4: sh          $zero, 0x10($t6)
    MEM_H(0X10, ctx->r14) = 0;
    // 0x80065CE8: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80065CEC: lh          $t7, 0x46($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X46);
    // 0x80065CF0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80065CF4: sh          $t7, 0x6($t9)
    MEM_H(0X6, ctx->r25) = ctx->r15;
    // 0x80065CF8: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80065CFC: nop

    // 0x80065D00: sh          $zero, 0x8($t0)
    MEM_H(0X8, ctx->r8) = 0;
    // 0x80065D04: lhu         $t1, 0x42($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X42);
    // 0x80065D08: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80065D0C: nop

    // 0x80065D10: sh          $t1, 0x2($t4)
    MEM_H(0X2, ctx->r12) = ctx->r9;
    // 0x80065D14: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80065D18: nop

    // 0x80065D1C: sh          $zero, 0x4($t2)
    MEM_H(0X4, ctx->r10) = 0;
    // 0x80065D20: lbu         $t3, 0x37($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X37);
    // 0x80065D24: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80065D28: nop

    // 0x80065D2C: sb          $t3, 0x1($t5)
    MEM_B(0X1, ctx->r13) = ctx->r11;
    // 0x80065D30: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80065D34: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80065D38: sb          $zero, 0x1A($t8)
    MEM_B(0X1A, ctx->r24) = 0;
    // 0x80065D3C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80065D40: nop

    // 0x80065D44: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x80065D48: lwl         $t1, 0x38($sp)
    ctx->r9 = do_lwl(rdram, ctx->r9, ctx->r29, 0X38);
    // 0x80065D4C: lwl         $t4, 0x3C($sp)
    ctx->r12 = do_lwl(rdram, ctx->r12, ctx->r29, 0X3C);
    // 0x80065D50: lbu         $t9, 0x37($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X37);
    // 0x80065D54: lwr         $t1, 0x3B($sp)
    ctx->r9 = do_lwr(rdram, ctx->r9, ctx->r29, 0X3B);
    // 0x80065D58: lwr         $t4, 0x3F($sp)
    ctx->r12 = do_lwr(rdram, ctx->r12, ctx->r29, 0X3F);
    // 0x80065D5C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80065D60: swl         $t1, 0x8($sp)
    do_swl(rdram, 0X8, ctx->r29, ctx->r9);
    // 0x80065D64: swl         $t4, 0xC($sp)
    do_swl(rdram, 0XC, ctx->r29, ctx->r12);
    // 0x80065D68: lhu         $t2, 0x42($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X42);
    // 0x80065D6C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80065D70: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x80065D74: swr         $t1, 0xB($sp)
    do_swr(rdram, 0XB, ctx->r29, ctx->r9);
    // 0x80065D78: swr         $t4, 0xF($sp)
    do_swr(rdram, 0XF, ctx->r29, ctx->r12);
    // 0x80065D7C: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x80065D80: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x80065D84: lw          $a1, 0x110($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X110);
    // 0x80065D88: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80065D8C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80065D90: jal         0x800653E4
    // 0x80065D94: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    func_800653E4(rdram, ctx);
        goto after_0;
    // 0x80065D94: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    after_0:
    // 0x80065D98: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80065D9C: nop

    // 0x80065DA0: addiu       $a0, $t5, 0x518
    ctx->r4 = ADD32(ctx->r13, 0X518);
    // 0x80065DA4: jal         0x8006553C
    // 0x80065DA8: addiu       $a1, $t5, 0x20
    ctx->r5 = ADD32(ctx->r13, 0X20);
    func_8006553C(rdram, ctx);
        goto after_1;
    // 0x80065DA8: addiu       $a1, $t5, 0x20
    ctx->r5 = ADD32(ctx->r13, 0X20);
    after_1:
    // 0x80065DAC: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80065DB0: addiu       $t8, $sp, 0x24
    ctx->r24 = ADD32(ctx->r29, 0X24);
    // 0x80065DB4: lw          $t7, 0x24($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X24);
    // 0x80065DB8: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80065DBC: lw          $t9, 0x18($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X18);
    // 0x80065DC0: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x80065DC4: lwl         $at, 0x0($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0X0);
    // 0x80065DC8: lwr         $at, 0x3($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0X3);
    // 0x80065DCC: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x80065DD0: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x80065DD4: lwl         $t4, 0x4($t9)
    ctx->r12 = do_lwl(rdram, ctx->r12, ctx->r25, 0X4);
    // 0x80065DD8: lwr         $t4, 0x7($t9)
    ctx->r12 = do_lwr(rdram, ctx->r12, ctx->r25, 0X7);
    // 0x80065DDC: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x80065DE0: sw          $t4, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r12;
    // 0x80065DE4: lwl         $at, 0x8($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0X8);
    // 0x80065DE8: lwr         $at, 0xB($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0XB);
    // 0x80065DEC: jal         0x80054DA0
    // 0x80065DF0: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    func_80054DA0(rdram, ctx);
        goto after_2;
    // 0x80065DF0: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    after_2:
    // 0x80065DF4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80065DF8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x80065DFC: jal         0x800656CC
    // 0x80065E00: addiu       $a0, $a0, 0x518
    ctx->r4 = ADD32(ctx->r4, 0X518);
    func_800656CC(rdram, ctx);
        goto after_3;
    // 0x80065E00: addiu       $a0, $a0, 0x518
    ctx->r4 = ADD32(ctx->r4, 0X518);
    after_3:
    // 0x80065E04: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80065E08: jal         0x80065710
    // 0x80065E0C: addiu       $a0, $a0, 0x538
    ctx->r4 = ADD32(ctx->r4, 0X538);
    func_80065710(rdram, ctx);
        goto after_4;
    // 0x80065E0C: addiu       $a0, $a0, 0x538
    ctx->r4 = ADD32(ctx->r4, 0X538);
    after_4:
    // 0x80065E10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80065E14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80065E18: jr          $ra
    // 0x80065E1C: nop

    return;
    // 0x80065E1C: nop

;}
RECOMP_FUNC void func_80065E20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80065E20: lhu         $t6, 0x16($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X16);
    // 0x80065E24: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80065E28: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80065E2C: sb          $t6, 0x1A($a0)
    MEM_B(0X1A, ctx->r4) = ctx->r14;
    // 0x80065E30: lh          $t7, 0x4($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X4);
    // 0x80065E34: lh          $t8, 0x12($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X12);
    // 0x80065E38: lhu         $t0, 0x16($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X16);
    // 0x80065E3C: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x80065E40: div         $zero, $t9, $t0
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r8)));
    // 0x80065E44: lh          $t3, 0x14($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X14);
    // 0x80065E48: lh          $t8, 0xA($a0)
    ctx->r24 = MEM_H(ctx->r4, 0XA);
    // 0x80065E4C: andi        $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 & 0XFFFF;
    // 0x80065E50: bne         $t0, $zero, L_80065E5C
    if (ctx->r8 != 0) {
        // 0x80065E54: nop
    
            goto L_80065E5C;
    }
    // 0x80065E54: nop

    // 0x80065E58: break       7
    do_break(2147901016);
L_80065E5C:
    // 0x80065E5C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80065E60: bne         $t0, $at, L_80065E74
    if (ctx->r8 != ctx->r1) {
        // 0x80065E64: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80065E74;
    }
    // 0x80065E64: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80065E68: bne         $t9, $at, L_80065E74
    if (ctx->r25 != ctx->r1) {
        // 0x80065E6C: nop
    
            goto L_80065E74;
    }
    // 0x80065E6C: nop

    // 0x80065E70: break       6
    do_break(2147901040);
L_80065E74:
    // 0x80065E74: mflo        $t1
    ctx->r9 = lo;
    // 0x80065E78: sh          $t1, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r9;
    // 0x80065E7C: lh          $t2, 0x6($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X6);
    // 0x80065E80: lhu         $t5, 0x16($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X16);
    // 0x80065E84: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x80065E88: div         $zero, $t4, $t5
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r13))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r13)));
    // 0x80065E8C: lh          $t3, 0xC($a0)
    ctx->r11 = MEM_H(ctx->r4, 0XC);
    // 0x80065E90: bne         $t5, $zero, L_80065E9C
    if (ctx->r13 != 0) {
        // 0x80065E94: nop
    
            goto L_80065E9C;
    }
    // 0x80065E94: nop

    // 0x80065E98: break       7
    do_break(2147901080);
L_80065E9C:
    // 0x80065E9C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80065EA0: bne         $t5, $at, L_80065EB4
    if (ctx->r13 != ctx->r1) {
        // 0x80065EA4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80065EB4;
    }
    // 0x80065EA4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80065EA8: bne         $t4, $at, L_80065EB4
    if (ctx->r12 != ctx->r1) {
        // 0x80065EAC: nop
    
            goto L_80065EB4;
    }
    // 0x80065EAC: nop

    // 0x80065EB0: break       6
    do_break(2147901104);
L_80065EB4:
    // 0x80065EB4: mflo        $t6
    ctx->r14 = lo;
    // 0x80065EB8: sh          $t6, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r14;
    // 0x80065EBC: lh          $t7, 0x8($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X8);
    // 0x80065EC0: lhu         $t0, 0x16($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X16);
    // 0x80065EC4: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x80065EC8: div         $zero, $t9, $t0
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r8)));
    // 0x80065ECC: bne         $t0, $zero, L_80065ED8
    if (ctx->r8 != 0) {
        // 0x80065ED0: nop
    
            goto L_80065ED8;
    }
    // 0x80065ED0: nop

    // 0x80065ED4: break       7
    do_break(2147901140);
L_80065ED8:
    // 0x80065ED8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80065EDC: bne         $t0, $at, L_80065EF0
    if (ctx->r8 != ctx->r1) {
        // 0x80065EE0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80065EF0;
    }
    // 0x80065EE0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80065EE4: bne         $t9, $at, L_80065EF0
    if (ctx->r25 != ctx->r1) {
        // 0x80065EE8: nop
    
            goto L_80065EF0;
    }
    // 0x80065EE8: nop

    // 0x80065EEC: break       6
    do_break(2147901164);
L_80065EF0:
    // 0x80065EF0: lh          $t8, 0x6($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X6);
    // 0x80065EF4: mflo        $t1
    ctx->r9 = lo;
    // 0x80065EF8: sh          $t1, 0xE($a0)
    MEM_H(0XE, ctx->r4) = ctx->r9;
    // 0x80065EFC: lh          $t2, 0xA($sp)
    ctx->r10 = MEM_H(ctx->r29, 0XA);
    // 0x80065F00: lhu         $t5, 0x16($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X16);
    // 0x80065F04: subu        $t4, $t2, $t3
    ctx->r12 = SUB32(ctx->r10, ctx->r11);
    // 0x80065F08: div         $zero, $t4, $t5
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r13))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r13)));
    // 0x80065F0C: lhu         $t2, 0x2($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X2);
    // 0x80065F10: bne         $t5, $zero, L_80065F1C
    if (ctx->r13 != 0) {
        // 0x80065F14: nop
    
            goto L_80065F1C;
    }
    // 0x80065F14: nop

    // 0x80065F18: break       7
    do_break(2147901208);
L_80065F1C:
    // 0x80065F1C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80065F20: bne         $t5, $at, L_80065F34
    if (ctx->r13 != ctx->r1) {
        // 0x80065F24: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80065F34;
    }
    // 0x80065F24: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80065F28: bne         $t4, $at, L_80065F34
    if (ctx->r12 != ctx->r1) {
        // 0x80065F2C: nop
    
            goto L_80065F34;
    }
    // 0x80065F2C: nop

    // 0x80065F30: break       6
    do_break(2147901232);
L_80065F34:
    // 0x80065F34: subu        $t3, $a3, $t2
    ctx->r11 = SUB32(ctx->r7, ctx->r10);
    // 0x80065F38: mflo        $t6
    ctx->r14 = lo;
    // 0x80065F3C: sh          $t6, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r14;
    // 0x80065F40: lh          $t7, 0x12($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X12);
    // 0x80065F44: lhu         $t0, 0x16($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X16);
    // 0x80065F48: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x80065F4C: div         $zero, $t9, $t0
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r8)));
    // 0x80065F50: bne         $t0, $zero, L_80065F5C
    if (ctx->r8 != 0) {
        // 0x80065F54: nop
    
            goto L_80065F5C;
    }
    // 0x80065F54: nop

    // 0x80065F58: break       7
    do_break(2147901272);
L_80065F5C:
    // 0x80065F5C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80065F60: bne         $t0, $at, L_80065F74
    if (ctx->r8 != ctx->r1) {
        // 0x80065F64: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80065F74;
    }
    // 0x80065F64: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80065F68: bne         $t9, $at, L_80065F74
    if (ctx->r25 != ctx->r1) {
        // 0x80065F6C: nop
    
            goto L_80065F74;
    }
    // 0x80065F6C: nop

    // 0x80065F70: break       6
    do_break(2147901296);
L_80065F74:
    // 0x80065F74: mflo        $t1
    ctx->r9 = lo;
    // 0x80065F78: sh          $t1, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r9;
    // 0x80065F7C: lhu         $t4, 0x16($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X16);
    // 0x80065F80: nop

    // 0x80065F84: div         $zero, $t3, $t4
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r12))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r12)));
    // 0x80065F88: bne         $t4, $zero, L_80065F94
    if (ctx->r12 != 0) {
        // 0x80065F8C: nop
    
            goto L_80065F94;
    }
    // 0x80065F8C: nop

    // 0x80065F90: break       7
    do_break(2147901328);
L_80065F94:
    // 0x80065F94: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80065F98: bne         $t4, $at, L_80065FAC
    if (ctx->r12 != ctx->r1) {
        // 0x80065F9C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80065FAC;
    }
    // 0x80065F9C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80065FA0: bne         $t3, $at, L_80065FAC
    if (ctx->r11 != ctx->r1) {
        // 0x80065FA4: nop
    
            goto L_80065FAC;
    }
    // 0x80065FA4: nop

    // 0x80065FA8: break       6
    do_break(2147901352);
L_80065FAC:
    // 0x80065FAC: mflo        $t5
    ctx->r13 = lo;
    // 0x80065FB0: sh          $t5, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r13;
    // 0x80065FB4: jr          $ra
    // 0x80065FB8: nop

    return;
    // 0x80065FB8: nop

;}
RECOMP_FUNC void func_80065FBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80065FBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80065FC0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80065FC4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80065FC8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80065FCC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80065FD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80065FD4: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    // 0x80065FD8: jal         0x80065238
    // 0x80065FDC: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    func_80065238(rdram, ctx);
        goto after_0;
    // 0x80065FDC: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    after_0:
    // 0x80065FE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80065FE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80065FE8: jr          $ra
    // 0x80065FEC: nop

    return;
    // 0x80065FEC: nop

;}
RECOMP_FUNC void func_80065FF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80065FF0: jr          $ra
    // 0x80065FF4: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    return;
    // 0x80065FF4: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
;}
RECOMP_FUNC void func_80065FF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80065FF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80065FFC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80066000: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80066004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80066008: jal         0x80065620
    // 0x8006600C: addiu       $a0, $a0, 0x518
    ctx->r4 = ADD32(ctx->r4, 0X518);
    func_80065620(rdram, ctx);
        goto after_0;
    // 0x8006600C: addiu       $a0, $a0, 0x518
    ctx->r4 = ADD32(ctx->r4, 0X518);
    after_0:
    // 0x80066010: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80066014: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80066018: jr          $ra
    // 0x8006601C: nop

    return;
    // 0x8006601C: nop

;}
RECOMP_FUNC void func_80066020(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80066020: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80066024: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80066028: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8006602C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80066030: jal         0x8006567C
    // 0x80066034: addiu       $a0, $a0, 0x518
    ctx->r4 = ADD32(ctx->r4, 0X518);
    func_8006567C(rdram, ctx);
        goto after_0;
    // 0x80066034: addiu       $a0, $a0, 0x518
    ctx->r4 = ADD32(ctx->r4, 0X518);
    after_0:
    // 0x80066038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006603C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80066040: jr          $ra
    // 0x80066044: nop

    return;
    // 0x80066044: nop

;}
RECOMP_FUNC void func_80066048(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80066048: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006604C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80066050: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80066054: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80066058: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006605C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80066060: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80066064: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80066068: beq         $s0, $at, L_80066094
    if (ctx->r16 == ctx->r1) {
        // 0x8006606C: sw          $a3, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r7;
            goto L_80066094;
    }
    // 0x8006606C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80066070: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80066074: beq         $s0, $at, L_800660E0
    if (ctx->r16 == ctx->r1) {
        // 0x80066078: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_800660E0;
    }
    // 0x80066078: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8006607C: beq         $s0, $at, L_80066138
    if (ctx->r16 == ctx->r1) {
        // 0x80066080: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80066138;
    }
    // 0x80066080: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80066084: beq         $s0, $at, L_80066138
    if (ctx->r16 == ctx->r1) {
        // 0x80066088: nop
    
            goto L_80066138;
    }
    // 0x80066088: nop

    // 0x8006608C: b           L_80066150
    // 0x80066090: nop

        goto L_80066150;
    // 0x80066090: nop

L_80066094:
    // 0x80066094: lbu         $t7, 0x37($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X37);
    // 0x80066098: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8006609C: addiu       $t9, $t9, 0x4C0
    ctx->r25 = ADD32(ctx->r25, 0X4C0);
    // 0x800660A0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800660A4: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x800660A8: lwl         $at, 0x0($t0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r8, 0X0);
    // 0x800660AC: lwr         $at, 0x3($t0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r8, 0X3);
    // 0x800660B0: addiu       $t6, $sp, 0x24
    ctx->r14 = ADD32(ctx->r29, 0X24);
    // 0x800660B4: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x800660B8: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x800660BC: lh          $a1, 0x24($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X24);
    // 0x800660C0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800660C4: sll         $t4, $a2, 2
    ctx->r12 = S32(ctx->r6 << 2);
    // 0x800660C8: sll         $t3, $a1, 2
    ctx->r11 = S32(ctx->r5 << 2);
    // 0x800660CC: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x800660D0: jal         0x8007104C
    // 0x800660D4: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    func_8007104C(rdram, ctx);
        goto after_0;
    // 0x800660D4: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    after_0:
    // 0x800660D8: b           L_80066150
    // 0x800660DC: nop

        goto L_80066150;
    // 0x800660DC: nop

L_800660E0:
    // 0x800660E0: lbu         $t7, 0x37($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X37);
    // 0x800660E4: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x800660E8: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x800660EC: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x800660F0: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x800660F4: addu        $t6, $t8, $t1
    ctx->r14 = ADD32(ctx->r24, ctx->r9);
    // 0x800660F8: addiu       $t0, $t0, 0x4E0
    ctx->r8 = ADD32(ctx->r8, 0X4E0);
    // 0x800660FC: addu        $t2, $t6, $t0
    ctx->r10 = ADD32(ctx->r14, ctx->r8);
    // 0x80066100: lwl         $at, 0x0($t2)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r10, 0X0);
    // 0x80066104: lwr         $at, 0x3($t2)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r10, 0X3);
    // 0x80066108: addiu       $t5, $sp, 0x24
    ctx->r13 = ADD32(ctx->r29, 0X24);
    // 0x8006610C: sw          $at, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r1;
    // 0x80066110: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x80066114: lh          $a1, 0x24($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X24);
    // 0x80066118: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8006611C: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x80066120: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x80066124: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80066128: jal         0x8007104C
    // 0x8006612C: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    func_8007104C(rdram, ctx);
        goto after_1;
    // 0x8006612C: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    after_1:
    // 0x80066130: b           L_80066150
    // 0x80066134: nop

        goto L_80066150;
    // 0x80066134: nop

L_80066138:
    // 0x80066138: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8006613C: addiu       $t8, $zero, 0x800
    ctx->r24 = ADD32(0, 0X800);
    // 0x80066140: sh          $t8, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r24;
    // 0x80066144: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80066148: addiu       $t6, $zero, -0x240
    ctx->r14 = ADD32(0, -0X240);
    // 0x8006614C: sh          $t6, 0x2($t0)
    MEM_H(0X2, ctx->r8) = ctx->r14;
L_80066150:
    // 0x80066150: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80066154: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80066158: jr          $ra
    // 0x8006615C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006615C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80066160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80066160: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80066164: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80066168: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8006616C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80066170: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80066174: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80066178: jal         0x80065ADC
    // 0x8006617C: nop

    func_80065ADC(rdram, ctx);
        goto after_0;
    // 0x8006617C: nop

    after_0:
    // 0x80066180: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80066184: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80066188: jal         0x80065ADC
    // 0x8006618C: addiu       $a0, $a0, 0xA48
    ctx->r4 = ADD32(ctx->r4, 0XA48);
    func_80065ADC(rdram, ctx);
        goto after_1;
    // 0x8006618C: addiu       $a0, $a0, 0xA48
    ctx->r4 = ADD32(ctx->r4, 0XA48);
    after_1:
    // 0x80066190: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80066194: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80066198: jr          $ra
    // 0x8006619C: nop

    return;
    // 0x8006619C: nop

;}
RECOMP_FUNC void func_800661A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800661A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800661A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800661A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800661AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800661B0: jal         0x80065BD4
    // 0x800661B4: nop

    func_80065BD4(rdram, ctx);
        goto after_0;
    // 0x800661B4: nop

    after_0:
    // 0x800661B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800661BC: jal         0x80065BD4
    // 0x800661C0: addiu       $a0, $a0, 0xA48
    ctx->r4 = ADD32(ctx->r4, 0XA48);
    func_80065BD4(rdram, ctx);
        goto after_1;
    // 0x800661C0: addiu       $a0, $a0, 0xA48
    ctx->r4 = ADD32(ctx->r4, 0XA48);
    after_1:
    // 0x800661C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800661C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800661CC: jr          $ra
    // 0x800661D0: nop

    return;
    // 0x800661D0: nop

;}
RECOMP_FUNC void func_800661D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800661D4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800661D8: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x800661DC: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x800661E0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800661E4: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x800661E8: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x800661EC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x800661F0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800661F4: lbu         $t7, 0x1495($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X1495);
    // 0x800661F8: nop

    // 0x800661FC: beq         $t7, $zero, L_8006644C
    if (ctx->r15 == 0) {
        // 0x80066200: nop
    
            goto L_8006644C;
    }
    // 0x80066200: nop

    // 0x80066204: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x80066208: lui         $s1, 0x800D
    ctx->r17 = S32(0X800D << 16);
    // 0x8006620C: lbu         $t9, 0x1494($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X1494);
    // 0x80066210: addiu       $a0, $t8, 0x1498
    ctx->r4 = ADD32(ctx->r24, 0X1498);
    // 0x80066214: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80066218: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8006621C: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x80066220: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80066224: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x80066228: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8006622C: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x80066230: addu        $s0, $t8, $t0
    ctx->r16 = ADD32(ctx->r24, ctx->r8);
    // 0x80066234: lbu         $t1, 0x1($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X1);
    // 0x80066238: lbu         $a1, 0x1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1);
    // 0x8006623C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80066240: addu        $s1, $s1, $t2
    ctx->r17 = ADD32(ctx->r17, ctx->r10);
    // 0x80066244: lw          $s1, 0x110($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X110);
    // 0x80066248: jal         0x8006D090
    // 0x8006624C: nop

    func_8006D090(rdram, ctx);
        goto after_0;
    // 0x8006624C: nop

    after_0:
    // 0x80066250: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x80066254: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x80066258: jal         0x8006D0AC
    // 0x8006625C: addiu       $a1, $a1, 0x1498
    ctx->r5 = ADD32(ctx->r5, 0X1498);
    func_8006D0AC(rdram, ctx);
        goto after_1;
    // 0x8006625C: addiu       $a1, $a1, 0x1498
    ctx->r5 = ADD32(ctx->r5, 0X1498);
    after_1:
    // 0x80066260: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x80066264: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x80066268: jal         0x8006D11C
    // 0x8006626C: addiu       $a1, $a1, 0x1498
    ctx->r5 = ADD32(ctx->r5, 0X1498);
    func_8006D11C(rdram, ctx);
        goto after_2;
    // 0x8006626C: addiu       $a1, $a1, 0x1498
    ctx->r5 = ADD32(ctx->r5, 0X1498);
    after_2:
    // 0x80066270: lwl         $t3, 0x38($sp)
    ctx->r11 = do_lwl(rdram, ctx->r11, ctx->r29, 0X38);
    // 0x80066274: lwl         $t4, 0x3C($sp)
    ctx->r12 = do_lwl(rdram, ctx->r12, ctx->r29, 0X3C);
    // 0x80066278: lwr         $t3, 0x3B($sp)
    ctx->r11 = do_lwr(rdram, ctx->r11, ctx->r29, 0X3B);
    // 0x8006627C: lwr         $t4, 0x3F($sp)
    ctx->r12 = do_lwr(rdram, ctx->r12, ctx->r29, 0X3F);
    // 0x80066280: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x80066284: swl         $t3, 0x4($sp)
    do_swl(rdram, 0X4, ctx->r29, ctx->r11);
    // 0x80066288: swl         $t4, 0x8($sp)
    do_swl(rdram, 0X8, ctx->r29, ctx->r12);
    // 0x8006628C: swr         $t3, 0x7($sp)
    do_swr(rdram, 0X7, ctx->r29, ctx->r11);
    // 0x80066290: swr         $t4, 0xB($sp)
    do_swr(rdram, 0XB, ctx->r29, ctx->r12);
    // 0x80066294: lw          $t6, 0x1498($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X1498);
    // 0x80066298: addiu       $t9, $zero, 0x100
    ctx->r25 = ADD32(0, 0X100);
    // 0x8006629C: lbu         $a3, 0x1E($t6)
    ctx->r7 = MEM_BU(ctx->r14, 0X1E);
    // 0x800662A0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800662A4: lbu         $t0, 0x1496($t5)
    ctx->r8 = MEM_BU(ctx->r13, 0X1496);
    // 0x800662A8: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x800662AC: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x800662B0: sll         $t7, $a3, 14
    ctx->r15 = S32(ctx->r7 << 14);
    // 0x800662B4: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x800662B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800662BC: jal         0x80065E20
    // 0x800662C0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    func_80065E20(rdram, ctx);
        goto after_3;
    // 0x800662C0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    after_3:
    // 0x800662C4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800662C8: sb          $t1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r9;
    // 0x800662CC: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x800662D0: addiu       $a0, $s0, 0x538
    ctx->r4 = ADD32(ctx->r16, 0X538);
    // 0x800662D4: lbu         $a1, 0x1496($t2)
    ctx->r5 = MEM_BU(ctx->r10, 0X1496);
    // 0x800662D8: jal         0x80065720
    // 0x800662DC: nop

    func_80065720(rdram, ctx);
        goto after_4;
    // 0x800662DC: nop

    after_4:
    // 0x800662E0: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x800662E4: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x800662E8: lbu         $t3, 0x1494($t8)
    ctx->r11 = MEM_BU(ctx->r24, 0X1494);
    // 0x800662EC: addiu       $s2, $t7, 0x20
    ctx->r18 = ADD32(ctx->r15, 0X20);
    // 0x800662F0: lwl         $at, 0xE($s2)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r18, 0XE);
    // 0x800662F4: lwr         $at, 0x11($s2)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r18, 0X11);
    // 0x800662F8: negu        $t4, $t3
    ctx->r12 = SUB32(0, ctx->r11);
    // 0x800662FC: lbu         $t9, 0x13($t7)
    ctx->r25 = MEM_BU(ctx->r15, 0X13);
    // 0x80066300: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x80066304: lbu         $a1, 0x13($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X13);
    // 0x80066308: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x8006630C: swl         $at, 0x8($sp)
    do_swl(rdram, 0X8, ctx->r29, ctx->r1);
    // 0x80066310: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80066314: swr         $at, 0xB($sp)
    do_swr(rdram, 0XB, ctx->r29, ctx->r1);
    // 0x80066318: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x8006631C: lwl         $at, 0xA($s2)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r18, 0XA);
    // 0x80066320: lwr         $at, 0xD($s2)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r18, 0XD);
    // 0x80066324: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80066328: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x8006632C: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80066330: swl         $at, 0xC($sp)
    do_swl(rdram, 0XC, ctx->r29, ctx->r1);
    // 0x80066334: lui         $s1, 0x800D
    ctx->r17 = S32(0X800D << 16);
    // 0x80066338: addu        $s0, $t8, $t6
    ctx->r16 = ADD32(ctx->r24, ctx->r14);
    // 0x8006633C: sll         $t5, $t9, 2
    ctx->r13 = S32(ctx->r25 << 2);
    // 0x80066340: swr         $at, 0xF($sp)
    do_swr(rdram, 0XF, ctx->r29, ctx->r1);
    // 0x80066344: lhu         $t4, 0x8($s2)
    ctx->r12 = MEM_HU(ctx->r18, 0X8);
    // 0x80066348: addu        $s1, $s1, $t5
    ctx->r17 = ADD32(ctx->r17, ctx->r13);
    // 0x8006634C: addiu       $s0, $s0, 0xA48
    ctx->r16 = ADD32(ctx->r16, 0XA48);
    // 0x80066350: lw          $s1, 0x110($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X110);
    // 0x80066354: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x80066358: addiu       $t8, $zero, 0x100
    ctx->r24 = ADD32(0, 0X100);
    // 0x8006635C: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x80066360: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80066364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80066368: jal         0x80065C74
    // 0x8006636C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_80065C74(rdram, ctx);
        goto after_5;
    // 0x8006636C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_5:
    // 0x80066370: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x80066374: addiu       $t2, $zero, 0xC0
    ctx->r10 = ADD32(0, 0XC0);
    // 0x80066378: lwl         $at, 0x1490($t6)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r14, 0X1490);
    // 0x8006637C: lwr         $at, 0x1493($t6)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r14, 0X1493);
    // 0x80066380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80066384: swl         $at, 0x4($sp)
    do_swl(rdram, 0X4, ctx->r29, ctx->r1);
    // 0x80066388: swr         $at, 0x7($sp)
    do_swr(rdram, 0X7, ctx->r29, ctx->r1);
    // 0x8006638C: lwl         $at, 0xA($s1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r17, 0XA);
    // 0x80066390: lwr         $at, 0xD($s1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r17, 0XD);
    // 0x80066394: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x80066398: swl         $at, 0x8($sp)
    do_swl(rdram, 0X8, ctx->r29, ctx->r1);
    // 0x8006639C: swr         $at, 0xB($sp)
    do_swr(rdram, 0XB, ctx->r29, ctx->r1);
    // 0x800663A0: lbu         $a3, 0x1E($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0X1E);
    // 0x800663A4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800663A8: lbu         $t3, 0x1496($t6)
    ctx->r11 = MEM_BU(ctx->r14, 0X1496);
    // 0x800663AC: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x800663B0: sll         $t1, $a3, 14
    ctx->r9 = S32(ctx->r7 << 14);
    // 0x800663B4: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x800663B8: jal         0x80065E20
    // 0x800663BC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    func_80065E20(rdram, ctx);
        goto after_6;
    // 0x800663BC: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_6:
    // 0x800663C0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800663C4: sb          $t4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r12;
    // 0x800663C8: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x800663CC: addiu       $t4, $zero, 0xC0
    ctx->r12 = ADD32(0, 0XC0);
    // 0x800663D0: sb          $zero, 0x0($t8)
    MEM_B(0X0, ctx->r24) = 0;
    // 0x800663D4: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x800663D8: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x800663DC: lwl         $at, 0x1490($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X1490);
    // 0x800663E0: lwr         $at, 0x1493($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X1493);
    // 0x800663E4: lbu         $a1, 0x13($t9)
    ctx->r5 = MEM_BU(ctx->r25, 0X13);
    // 0x800663E8: swl         $at, 0x8($sp)
    do_swl(rdram, 0X8, ctx->r29, ctx->r1);
    // 0x800663EC: swr         $at, 0xB($sp)
    do_swr(rdram, 0XB, ctx->r29, ctx->r1);
    // 0x800663F0: lwl         $at, 0xA($s1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r17, 0XA);
    // 0x800663F4: lwr         $at, 0xD($s1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r17, 0XD);
    // 0x800663F8: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x800663FC: swl         $at, 0xC($sp)
    do_swl(rdram, 0XC, ctx->r29, ctx->r1);
    // 0x80066400: swr         $at, 0xF($sp)
    do_swr(rdram, 0XF, ctx->r29, ctx->r1);
    // 0x80066404: lbu         $t6, 0x1E($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X1E);
    // 0x80066408: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8006640C: sll         $t3, $t6, 14
    ctx->r11 = S32(ctx->r14 << 14);
    // 0x80066410: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80066414: lbu         $t8, 0x1496($t5)
    ctx->r24 = MEM_BU(ctx->r13, 0X1496);
    // 0x80066418: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x8006641C: addiu       $a0, $s0, 0x538
    ctx->r4 = ADD32(ctx->r16, 0X538);
    // 0x80066420: jal         0x8006576C
    // 0x80066424: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    func_8006576C(rdram, ctx);
        goto after_7;
    // 0x80066424: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_7:
    // 0x80066428: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x8006642C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80066430: lbu         $t7, 0x1494($t9)
    ctx->r15 = MEM_BU(ctx->r25, 0X1494);
    // 0x80066434: nop

    // 0x80066438: subu        $t1, $t0, $t7
    ctx->r9 = SUB32(ctx->r8, ctx->r15);
    // 0x8006643C: sb          $t1, 0x1494($t9)
    MEM_B(0X1494, ctx->r25) = ctx->r9;
    // 0x80066440: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80066444: jal         0x800664C0
    // 0x80066448: nop

    func_800664C0(rdram, ctx);
        goto after_8;
    // 0x80066448: nop

    after_8:
L_8006644C:
    // 0x8006644C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80066450: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80066454: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80066458: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8006645C: jr          $ra
    // 0x80066460: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80066460: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80066464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80066464: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80066468: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8006646C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80066470: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80066474: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80066478: sb          $t6, 0x1495($t7)
    MEM_B(0X1495, ctx->r15) = ctx->r14;
    // 0x8006647C: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80066480: nop

    // 0x80066484: lbu         $t9, 0x1494($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X1494);
    // 0x80066488: nop

    // 0x8006648C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80066490: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80066494: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x80066498: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8006649C: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x800664A0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800664A4: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x800664A8: jal         0x80066020
    // 0x800664AC: addu        $a0, $t8, $t0
    ctx->r4 = ADD32(ctx->r24, ctx->r8);
    func_80066020(rdram, ctx);
        goto after_0;
    // 0x800664AC: addu        $a0, $t8, $t0
    ctx->r4 = ADD32(ctx->r24, ctx->r8);
    after_0:
    // 0x800664B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800664B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800664B8: jr          $ra
    // 0x800664BC: nop

    return;
    // 0x800664BC: nop

;}
RECOMP_FUNC void func_800664C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800664C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800664C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800664C8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800664CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800664D0: sb          $zero, 0x1495($t6)
    MEM_B(0X1495, ctx->r14) = 0;
    // 0x800664D4: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x800664D8: nop

    // 0x800664DC: lbu         $t8, 0x1494($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X1494);
    // 0x800664E0: nop

    // 0x800664E4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800664E8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800664EC: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x800664F0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800664F4: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x800664F8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800664FC: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80066500: jal         0x80065FF8
    // 0x80066504: addu        $a0, $t7, $t9
    ctx->r4 = ADD32(ctx->r15, ctx->r25);
    func_80065FF8(rdram, ctx);
        goto after_0;
    // 0x80066504: addu        $a0, $t7, $t9
    ctx->r4 = ADD32(ctx->r15, ctx->r25);
    after_0:
    // 0x80066508: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006650C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80066510: jr          $ra
    // 0x80066514: nop

    return;
    // 0x80066514: nop

;}
RECOMP_FUNC void func_80066518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80066518: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8006651C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80066520: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80066524: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80066528: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8006652C: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x80066530: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80066534: lbu         $a2, 0x47($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X47);
    // 0x80066538: lbu         $a1, 0x43($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X43);
    // 0x8006653C: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80066540: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80066544: jal         0x8006D17C
    // 0x80066548: addiu       $a0, $a0, 0x1498
    ctx->r4 = ADD32(ctx->r4, 0X1498);
    func_8006D17C(rdram, ctx);
        goto after_0;
    // 0x80066548: addiu       $a0, $a0, 0x1498
    ctx->r4 = ADD32(ctx->r4, 0X1498);
    after_0:
    // 0x8006654C: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80066550: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x80066554: sb          $t6, 0x1496($t7)
    MEM_B(0X1496, ctx->r15) = ctx->r14;
    // 0x80066558: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8006655C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80066560: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x80066564: lbu         $a2, -0x10DF($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X10DF);
    // 0x80066568: lbu         $a1, -0x10E0($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X10E0);
    // 0x8006656C: lbu         $a3, 0x4B($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X4B);
    // 0x80066570: jal         0x80066048
    // 0x80066574: addiu       $a0, $a0, 0x1490
    ctx->r4 = ADD32(ctx->r4, 0X1490);
    func_80066048(rdram, ctx);
        goto after_1;
    // 0x80066574: addiu       $a0, $a0, 0x1490
    ctx->r4 = ADD32(ctx->r4, 0X1490);
    after_1:
    // 0x80066578: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8006657C: nop

    // 0x80066580: sb          $zero, 0x1494($t8)
    MEM_B(0X1494, ctx->r24) = 0;
    // 0x80066584: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80066588: jal         0x80065FF0
    // 0x8006658C: nop

    func_80065FF0(rdram, ctx);
        goto after_2;
    // 0x8006658C: nop

    after_2:
    // 0x80066590: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80066594: jal         0x80065FF0
    // 0x80066598: addiu       $a0, $a0, 0xA48
    ctx->r4 = ADD32(ctx->r4, 0XA48);
    func_80065FF0(rdram, ctx);
        goto after_3;
    // 0x80066598: addiu       $a0, $a0, 0xA48
    ctx->r4 = ADD32(ctx->r4, 0XA48);
    after_3:
    // 0x8006659C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800665A0: nop

    // 0x800665A4: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x800665A8: jal         0x8006089C
    // 0x800665AC: nop

    func_8006089C(rdram, ctx);
        goto after_4;
    // 0x800665AC: nop

    after_4:
    // 0x800665B0: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800665B4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x800665B8: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x800665BC: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x800665C0: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x800665C4: lw          $s0, 0x0($t1)
    ctx->r16 = MEM_W(ctx->r9, 0X0);
    // 0x800665C8: lui         $s1, 0x800D
    ctx->r17 = S32(0X800D << 16);
    // 0x800665CC: divu        $zero, $s0, $at
    lo = S32(U32(ctx->r16) / U32(ctx->r1)); hi = S32(U32(ctx->r16) % U32(ctx->r1));
    // 0x800665D0: lwl         $at, 0x1490($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X1490);
    // 0x800665D4: lwr         $at, 0x1493($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X1493);
    // 0x800665D8: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x800665DC: swl         $at, 0x8($sp)
    do_swl(rdram, 0X8, ctx->r29, ctx->r1);
    // 0x800665E0: swr         $at, 0xB($sp)
    do_swr(rdram, 0XB, ctx->r29, ctx->r1);
    // 0x800665E4: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x800665E8: mfhi        $t2
    ctx->r10 = hi;
    // 0x800665EC: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x800665F0: andi        $t3, $s0, 0xFF
    ctx->r11 = ctx->r16 & 0XFF;
    // 0x800665F4: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x800665F8: sll         $t4, $s0, 2
    ctx->r12 = S32(ctx->r16 << 2);
    // 0x800665FC: addu        $s1, $s1, $t4
    ctx->r17 = ADD32(ctx->r17, ctx->r12);
    // 0x80066600: lw          $s1, 0x110($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X110);
    // 0x80066604: addiu       $t2, $zero, 0xC0
    ctx->r10 = ADD32(0, 0XC0);
    // 0x80066608: lwl         $at, 0xA($s1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r17, 0XA);
    // 0x8006660C: lwr         $at, 0xD($s1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r17, 0XD);
    // 0x80066610: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80066614: swl         $at, 0xC($sp)
    do_swl(rdram, 0XC, ctx->r29, ctx->r1);
    // 0x80066618: swr         $at, 0xF($sp)
    do_swr(rdram, 0XF, ctx->r29, ctx->r1);
    // 0x8006661C: lbu         $t0, 0x1E($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X1E);
    // 0x80066620: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x80066624: sll         $t1, $t0, 14
    ctx->r9 = S32(ctx->r8 << 14);
    // 0x80066628: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8006662C: jal         0x80065C74
    // 0x80066630: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    func_80065C74(rdram, ctx);
        goto after_5;
    // 0x80066630: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    after_5:
    // 0x80066634: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80066638: addiu       $t0, $zero, 0xC0
    ctx->r8 = ADD32(0, 0XC0);
    // 0x8006663C: lwl         $at, 0x1490($t3)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r11, 0X1490);
    // 0x80066640: lwr         $at, 0x1493($t3)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r11, 0X1493);
    // 0x80066644: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80066648: swl         $at, 0x8($sp)
    do_swl(rdram, 0X8, ctx->r29, ctx->r1);
    // 0x8006664C: swr         $at, 0xB($sp)
    do_swr(rdram, 0XB, ctx->r29, ctx->r1);
    // 0x80066650: lwl         $at, 0xA($s1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r17, 0XA);
    // 0x80066654: lwr         $at, 0xD($s1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r17, 0XD);
    // 0x80066658: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x8006665C: swl         $at, 0xC($sp)
    do_swl(rdram, 0XC, ctx->r29, ctx->r1);
    // 0x80066660: swr         $at, 0xF($sp)
    do_swr(rdram, 0XF, ctx->r29, ctx->r1);
    // 0x80066664: lbu         $t8, 0x1E($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X1E);
    // 0x80066668: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8006666C: sll         $t9, $t8, 14
    ctx->r25 = S32(ctx->r24 << 14);
    // 0x80066670: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80066674: lbu         $t1, 0x1496($t3)
    ctx->r9 = MEM_BU(ctx->r11, 0X1496);
    // 0x80066678: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x8006667C: addiu       $a0, $t3, 0x538
    ctx->r4 = ADD32(ctx->r11, 0X538);
    // 0x80066680: jal         0x8006576C
    // 0x80066684: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    func_8006576C(rdram, ctx);
        goto after_6;
    // 0x80066684: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    after_6:
    // 0x80066688: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8006668C: jal         0x80066464
    // 0x80066690: nop

    func_80066464(rdram, ctx);
        goto after_7;
    // 0x80066690: nop

    after_7:
    // 0x80066694: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80066698: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x8006669C: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x800666A0: jr          $ra
    // 0x800666A4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800666A4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800666A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800666A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800666AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800666B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800666B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800666B8: jal         0x8006D194
    // 0x800666BC: addiu       $a0, $a0, 0x1498
    ctx->r4 = ADD32(ctx->r4, 0X1498);
    func_8006D194(rdram, ctx);
        goto after_0;
    // 0x800666BC: addiu       $a0, $a0, 0x1498
    ctx->r4 = ADD32(ctx->r4, 0X1498);
    after_0:
    // 0x800666C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800666C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800666C8: jr          $ra
    // 0x800666CC: nop

    return;
    // 0x800666CC: nop

;}
RECOMP_FUNC void func_800666D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800666D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800666D4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800666D8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800666DC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800666E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800666E4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800666E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800666EC: jal         0x800655C4
    // 0x800666F0: addiu       $a0, $a0, 0x500
    ctx->r4 = ADD32(ctx->r4, 0X500);
    func_800655C4(rdram, ctx);
        goto after_0;
    // 0x800666F0: addiu       $a0, $a0, 0x500
    ctx->r4 = ADD32(ctx->r4, 0X500);
    after_0:
    // 0x800666F4: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x800666F8: nop

    // 0x800666FC: blez        $s0, L_80066720
    if (SIGNED(ctx->r16) <= 0) {
        // 0x80066700: nop
    
            goto L_80066720;
    }
    // 0x80066700: nop

L_80066704:
    // 0x80066704: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80066708: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8006670C: jal         0x80064F54
    // 0x80066710: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_80064F54(rdram, ctx);
        goto after_1;
    // 0x80066710: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_1:
    // 0x80066714: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x80066718: bgtz        $s0, L_80066704
    if (SIGNED(ctx->r16) > 0) {
        // 0x8006671C: nop
    
            goto L_80066704;
    }
    // 0x8006671C: nop

L_80066720:
    // 0x80066720: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80066724: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80066728: jr          $ra
    // 0x8006672C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8006672C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80066730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80066730: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80066734: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80066738: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8006673C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80066740: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80066744: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x80066748: addiu       $s0, $t6, 0x8
    ctx->r16 = ADD32(ctx->r14, 0X8);
    // 0x8006674C: beq         $t7, $zero, L_8006676C
    if (ctx->r15 == 0) {
        // 0x80066750: nop
    
            goto L_8006676C;
    }
    // 0x80066750: nop

    // 0x80066754: jal         0x800651C8
    // 0x80066758: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800651C8(rdram, ctx);
        goto after_0;
    // 0x80066758: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8006675C: beq         $v0, $zero, L_8006676C
    if (ctx->r2 == 0) {
        // 0x80066760: nop
    
            goto L_8006676C;
    }
    // 0x80066760: nop

    // 0x80066764: jal         0x80064FB0
    // 0x80066768: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80064FB0(rdram, ctx);
        goto after_1;
    // 0x80066768: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_8006676C:
    // 0x8006676C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80066770: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80066774: jr          $ra
    // 0x80066778: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80066778: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006677C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006677C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80066780: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80066784: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
L_80066788:
    // 0x80066788: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8006678C: nop

    // 0x80066790: lh          $t7, 0x18($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X18);
    // 0x80066794: nop

    // 0x80066798: addiu       $t8, $t7, 0x100
    ctx->r24 = ADD32(ctx->r15, 0X100);
    // 0x8006679C: sh          $t8, 0x18($t6)
    MEM_H(0X18, ctx->r14) = ctx->r24;
    // 0x800667A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800667A4: jal         0x800651C8
    // 0x800667A8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    func_800651C8(rdram, ctx);
        goto after_0;
    // 0x800667A8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_0:
    // 0x800667AC: bne         $v0, $zero, L_80066788
    if (ctx->r2 != 0) {
        // 0x800667B0: nop
    
            goto L_80066788;
    }
    // 0x800667B0: nop

    // 0x800667B4: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x800667B8: nop

    // 0x800667BC: lh          $t0, 0x18($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X18);
    // 0x800667C0: nop

    // 0x800667C4: addiu       $t1, $t0, -0x100
    ctx->r9 = ADD32(ctx->r8, -0X100);
    // 0x800667C8: sh          $t1, 0x18($t9)
    MEM_H(0X18, ctx->r25) = ctx->r9;
    // 0x800667CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800667D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800667D4: jr          $ra
    // 0x800667D8: nop

    return;
    // 0x800667D8: nop

;}
RECOMP_FUNC void func_800667DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800667DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800667E0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800667E4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800667E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800667EC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800667F0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800667F4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x800667F8: sb          $zero, 0x52A($t6)
    MEM_B(0X52A, ctx->r14) = 0;
    // 0x800667FC: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80066800: lhu         $t9, 0x2E($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X2E);
    // 0x80066804: lhu         $t8, 0x528($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X528);
    // 0x80066808: nop

    // 0x8006680C: bne         $t8, $t9, L_8006683C
    if (ctx->r24 != ctx->r25) {
        // 0x80066810: nop
    
            goto L_8006683C;
    }
    // 0x80066810: nop

    // 0x80066814: lh          $t0, 0x524($t7)
    ctx->r8 = MEM_H(ctx->r15, 0X524);
    // 0x80066818: lh          $t1, 0x28($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X28);
    // 0x8006681C: nop

    // 0x80066820: bne         $t0, $t1, L_8006683C
    if (ctx->r8 != ctx->r9) {
        // 0x80066824: nop
    
            goto L_8006683C;
    }
    // 0x80066824: nop

    // 0x80066828: lh          $t2, 0x526($t7)
    ctx->r10 = MEM_H(ctx->r15, 0X526);
    // 0x8006682C: lh          $t3, 0x24($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X24);
    // 0x80066830: nop

    // 0x80066834: beq         $t2, $t3, L_800668DC
    if (ctx->r10 == ctx->r11) {
        // 0x80066838: nop
    
            goto L_800668DC;
    }
    // 0x80066838: nop

L_8006683C:
    // 0x8006683C: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80066840: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80066844: sb          $t4, 0x52A($t5)
    MEM_B(0X52A, ctx->r13) = ctx->r12;
    // 0x80066848: lhu         $t6, 0x2E($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X2E);
    // 0x8006684C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80066850: nop

    // 0x80066854: sh          $t6, 0x528($t8)
    MEM_H(0X528, ctx->r24) = ctx->r14;
    // 0x80066858: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8006685C: lh          $t9, 0x28($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X28);
    // 0x80066860: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80066864: sh          $t9, 0x524($t0)
    MEM_H(0X524, ctx->r8) = ctx->r25;
    // 0x80066868: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8006686C: lh          $t1, 0x24($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X24);
    // 0x80066870: nop

    // 0x80066874: sh          $t1, 0x526($t7)
    MEM_H(0X526, ctx->r15) = ctx->r9;
    // 0x80066878: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8006687C: lwl         $t4, 0x28($sp)
    ctx->r12 = do_lwl(rdram, ctx->r12, ctx->r29, 0X28);
    // 0x80066880: lwl         $t3, 0x24($sp)
    ctx->r11 = do_lwl(rdram, ctx->r11, ctx->r29, 0X24);
    // 0x80066884: lwr         $t4, 0x2B($sp)
    ctx->r12 = do_lwr(rdram, ctx->r12, ctx->r29, 0X2B);
    // 0x80066888: lwr         $t3, 0x27($sp)
    ctx->r11 = do_lwr(rdram, ctx->r11, ctx->r29, 0X27);
    // 0x8006688C: lw          $a1, 0x520($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X520);
    // 0x80066890: swl         $t4, 0xC($sp)
    do_swl(rdram, 0XC, ctx->r29, ctx->r12);
    // 0x80066894: swl         $t3, 0x8($sp)
    do_swl(rdram, 0X8, ctx->r29, ctx->r11);
    // 0x80066898: lhu         $t5, 0x2E($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X2E);
    // 0x8006689C: swr         $t4, 0xF($sp)
    do_swr(rdram, 0XF, ctx->r29, ctx->r12);
    // 0x800668A0: swr         $t3, 0xB($sp)
    do_swr(rdram, 0XB, ctx->r29, ctx->r11);
    // 0x800668A4: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x800668A8: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x800668AC: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x800668B0: addiu       $a0, $t2, 0x8
    ctx->r4 = ADD32(ctx->r10, 0X8);
    // 0x800668B4: jal         0x800653E4
    // 0x800668B8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_800653E4(rdram, ctx);
        goto after_0;
    // 0x800668B8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_0:
    // 0x800668BC: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x800668C0: nop

    // 0x800668C4: addiu       $a0, $t8, 0x500
    ctx->r4 = ADD32(ctx->r24, 0X500);
    // 0x800668C8: jal         0x8006553C
    // 0x800668CC: addiu       $a1, $t8, 0x8
    ctx->r5 = ADD32(ctx->r24, 0X8);
    func_8006553C(rdram, ctx);
        goto after_1;
    // 0x800668CC: addiu       $a1, $t8, 0x8
    ctx->r5 = ADD32(ctx->r24, 0X8);
    after_1:
    // 0x800668D0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800668D4: jal         0x8006677C
    // 0x800668D8: nop

    func_8006677C(rdram, ctx);
        goto after_2;
    // 0x800668D8: nop

    after_2:
L_800668DC:
    // 0x800668DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800668E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800668E4: jr          $ra
    // 0x800668E8: nop

    return;
    // 0x800668E8: nop

;}
RECOMP_FUNC void func_800668EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800668EC: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x800668F0: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x800668F4: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x800668F8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x800668FC: sw          $a1, 0x520($a0)
    MEM_W(0X520, ctx->r4) = ctx->r5;
    // 0x80066900: sh          $t6, 0x528($a0)
    MEM_H(0X528, ctx->r4) = ctx->r14;
    // 0x80066904: sh          $t7, 0x524($a0)
    MEM_H(0X524, ctx->r4) = ctx->r15;
    // 0x80066908: sh          $t8, 0x526($a0)
    MEM_H(0X526, ctx->r4) = ctx->r24;
    // 0x8006690C: sb          $a2, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r6;
    // 0x80066910: jr          $ra
    // 0x80066914: sb          $zero, 0x52A($a0)
    MEM_B(0X52A, ctx->r4) = 0;
    return;
    // 0x80066914: sb          $zero, 0x52A($a0)
    MEM_B(0X52A, ctx->r4) = 0;
    // 0x80066918: nop

    // 0x8006691C: nop

;}
RECOMP_FUNC void func_80066920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80066920: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80066924: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80066928: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8006692C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80066930: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80066934: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80066938: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8006693C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80066940: lh          $t7, 0x2E($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2E);
    // 0x80066944: addiu       $a0, $t6, 0x540
    ctx->r4 = ADD32(ctx->r14, 0X540);
    // 0x80066948: sh          $t7, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r15;
    // 0x8006694C: lb          $t8, 0x12($t6)
    ctx->r24 = MEM_B(ctx->r14, 0X12);
    // 0x80066950: nop

    // 0x80066954: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x80066958: sh          $t9, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r25;
    // 0x8006695C: lh          $t0, 0x2A($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X2A);
    // 0x80066960: lwl         $t4, 0x30($sp)
    ctx->r12 = do_lwl(rdram, ctx->r12, ctx->r29, 0X30);
    // 0x80066964: sh          $t0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r8;
    // 0x80066968: lb          $t1, 0x10($t6)
    ctx->r9 = MEM_B(ctx->r14, 0X10);
    // 0x8006696C: lwr         $t4, 0x33($sp)
    ctx->r12 = do_lwr(rdram, ctx->r12, ctx->r29, 0X33);
    // 0x80066970: sll         $t2, $t1, 8
    ctx->r10 = S32(ctx->r9 << 8);
    // 0x80066974: addiu       $t3, $t2, 0x80
    ctx->r11 = ADD32(ctx->r10, 0X80);
    // 0x80066978: sh          $t3, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r11;
    // 0x8006697C: lwl         $t5, 0x2C($sp)
    ctx->r13 = do_lwl(rdram, ctx->r13, ctx->r29, 0X2C);
    // 0x80066980: lwr         $t5, 0x2F($sp)
    ctx->r13 = do_lwr(rdram, ctx->r13, ctx->r29, 0X2F);
    // 0x80066984: swl         $t4, 0x4($sp)
    do_swl(rdram, 0X4, ctx->r29, ctx->r12);
    // 0x80066988: swl         $t5, 0x8($sp)
    do_swl(rdram, 0X8, ctx->r29, ctx->r13);
    // 0x8006698C: swr         $t4, 0x7($sp)
    do_swr(rdram, 0X7, ctx->r29, ctx->r12);
    // 0x80066990: swr         $t5, 0xB($sp)
    do_swr(rdram, 0XB, ctx->r29, ctx->r13);
    // 0x80066994: lbu         $a3, 0xA($t6)
    ctx->r7 = MEM_BU(ctx->r14, 0XA);
    // 0x80066998: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x8006699C: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x800669A0: sll         $t7, $a3, 14
    ctx->r15 = S32(ctx->r7 << 14);
    // 0x800669A4: jal         0x800667DC
    // 0x800669A8: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    func_800667DC(rdram, ctx);
        goto after_0;
    // 0x800669A8: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    after_0:
    // 0x800669AC: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x800669B0: nop

    // 0x800669B4: lh          $s0, 0x556($t8)
    ctx->r16 = MEM_H(ctx->r24, 0X556);
    // 0x800669B8: lh          $s1, 0x558($t8)
    ctx->r17 = MEM_H(ctx->r24, 0X558);
    // 0x800669BC: lhu         $s2, 0x550($t8)
    ctx->r18 = MEM_HU(ctx->r24, 0X550);
    // 0x800669C0: sra         $t9, $s0, 8
    ctx->r25 = S32(SIGNED(ctx->r16) >> 8);
    // 0x800669C4: sra         $t1, $s1, 8
    ctx->r9 = S32(SIGNED(ctx->r17) >> 8);
    // 0x800669C8: sra         $t3, $s2, 14
    ctx->r11 = S32(SIGNED(ctx->r18) >> 14);
    // 0x800669CC: lbu         $t5, 0xA6A($t8)
    ctx->r13 = MEM_BU(ctx->r24, 0XA6A);
    // 0x800669D0: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x800669D4: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
    // 0x800669D8: or          $s2, $t3, $zero
    ctx->r18 = ctx->r11 | 0;
    // 0x800669DC: andi        $t0, $s0, 0xFF
    ctx->r8 = ctx->r16 & 0XFF;
    // 0x800669E0: andi        $t2, $s1, 0xFF
    ctx->r10 = ctx->r17 & 0XFF;
    // 0x800669E4: andi        $t4, $s2, 0xFF
    ctx->r12 = ctx->r18 & 0XFF;
    // 0x800669E8: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x800669EC: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
    // 0x800669F0: beq         $t5, $zero, L_80066A48
    if (ctx->r13 == 0) {
        // 0x800669F4: or          $s2, $t4, $zero
        ctx->r18 = ctx->r12 | 0;
            goto L_80066A48;
    }
    // 0x800669F4: or          $s2, $t4, $zero
    ctx->r18 = ctx->r12 | 0;
    // 0x800669F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800669FC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80066A00: jal         0x8003DDA8
    // 0x80066A04: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_8003DDA8(rdram, ctx);
        goto after_1;
    // 0x80066A04: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_1:
    // 0x80066A08: bne         $v0, $zero, L_80066A28
    if (ctx->r2 != 0) {
        // 0x80066A0C: nop
    
            goto L_80066A28;
    }
    // 0x80066A0C: nop

    // 0x80066A10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80066A14: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80066A18: jal         0x8003DBC0
    // 0x80066A1C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_8003DBC0(rdram, ctx);
        goto after_2;
    // 0x80066A1C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_2:
    // 0x80066A20: beq         $v0, $zero, L_80066A3C
    if (ctx->r2 == 0) {
        // 0x80066A24: nop
    
            goto L_80066A3C;
    }
    // 0x80066A24: nop

L_80066A28:
    // 0x80066A28: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80066A2C: jal         0x80065620
    // 0x80066A30: addiu       $a0, $a0, 0xA40
    ctx->r4 = ADD32(ctx->r4, 0XA40);
    func_80065620(rdram, ctx);
        goto after_3;
    // 0x80066A30: addiu       $a0, $a0, 0xA40
    ctx->r4 = ADD32(ctx->r4, 0XA40);
    after_3:
    // 0x80066A34: b           L_80066A48
    // 0x80066A38: nop

        goto L_80066A48;
    // 0x80066A38: nop

L_80066A3C:
    // 0x80066A3C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80066A40: jal         0x8006567C
    // 0x80066A44: addiu       $a0, $a0, 0xA40
    ctx->r4 = ADD32(ctx->r4, 0XA40);
    func_8006567C(rdram, ctx);
        goto after_4;
    // 0x80066A44: addiu       $a0, $a0, 0xA40
    ctx->r4 = ADD32(ctx->r4, 0XA40);
    after_4:
L_80066A48:
    // 0x80066A48: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80066A4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80066A50: jal         0x80065154
    // 0x80066A54: addiu       $a0, $a0, 0x548
    ctx->r4 = ADD32(ctx->r4, 0X548);
    func_80065154(rdram, ctx);
        goto after_5;
    // 0x80066A54: addiu       $a0, $a0, 0x548
    ctx->r4 = ADD32(ctx->r4, 0X548);
    after_5:
    // 0x80066A58: beq         $v0, $zero, L_80066A74
    if (ctx->r2 == 0) {
        // 0x80066A5C: nop
    
            goto L_80066A74;
    }
    // 0x80066A5C: nop

    // 0x80066A60: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80066A64: jal         0x80065620
    // 0x80066A68: addiu       $a0, $a0, 0x518
    ctx->r4 = ADD32(ctx->r4, 0X518);
    func_80065620(rdram, ctx);
        goto after_6;
    // 0x80066A68: addiu       $a0, $a0, 0x518
    ctx->r4 = ADD32(ctx->r4, 0X518);
    after_6:
    // 0x80066A6C: b           L_80066A80
    // 0x80066A70: nop

        goto L_80066A80;
    // 0x80066A70: nop

L_80066A74:
    // 0x80066A74: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80066A78: jal         0x8006567C
    // 0x80066A7C: addiu       $a0, $a0, 0x518
    ctx->r4 = ADD32(ctx->r4, 0X518);
    func_8006567C(rdram, ctx);
        goto after_7;
    // 0x80066A7C: addiu       $a0, $a0, 0x518
    ctx->r4 = ADD32(ctx->r4, 0X518);
    after_7:
L_80066A80:
    // 0x80066A80: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80066A84: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80066A88: jal         0x800666D0
    // 0x80066A8C: addiu       $a0, $a0, 0x540
    ctx->r4 = ADD32(ctx->r4, 0X540);
    func_800666D0(rdram, ctx);
        goto after_8;
    // 0x80066A8C: addiu       $a0, $a0, 0x540
    ctx->r4 = ADD32(ctx->r4, 0X540);
    after_8:
    // 0x80066A90: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80066A94: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80066A98: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80066A9C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80066AA0: jr          $ra
    // 0x80066AA4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80066AA4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80066AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80066AA8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80066AAC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80066AB0: lbu         $t6, 0x37($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X37);
    // 0x80066AB4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80066AB8: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x80066ABC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80066AC0: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x80066AC4: lw          $s0, 0x110($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X110);
    // 0x80066AC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80066ACC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80066AD0: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x80066AD4: jal         0x80054ED0
    // 0x80066AD8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80054ED0(rdram, ctx);
        goto after_0;
    // 0x80066AD8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x80066ADC: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x80066AE0: lh          $t9, 0x520($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X520);
    // 0x80066AE4: lh          $t8, 0x24($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X24);
    // 0x80066AE8: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x80066AEC: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80066AF0: sh          $t0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r8;
    // 0x80066AF4: jal         0x80054ED0
    // 0x80066AF8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80054ED0(rdram, ctx);
        goto after_1;
    // 0x80066AF8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x80066AFC: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x80066B00: lh          $t2, 0x522($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X522);
    // 0x80066B04: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x80066B08: addiu       $t5, $sp, 0x28
    ctx->r13 = ADD32(ctx->r29, 0X28);
    // 0x80066B0C: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80066B10: sh          $t3, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r11;
    // 0x80066B14: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x80066B18: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80066B1C: nop

    // 0x80066B20: swl         $at, 0x0($t4)
    do_swl(rdram, 0X0, ctx->r12, ctx->r1);
    // 0x80066B24: swr         $at, 0x3($t4)
    do_swr(rdram, 0X3, ctx->r12, ctx->r1);
    // 0x80066B28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80066B2C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80066B30: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x80066B34: jr          $ra
    // 0x80066B38: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80066B38: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80066B3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80066B3C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80066B40: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80066B44: lbu         $t6, 0x2F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X2F);
    // 0x80066B48: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80066B4C: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x80066B50: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80066B54: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x80066B58: lw          $s0, 0x110($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X110);
    // 0x80066B5C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80066B60: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80066B64: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80066B68: jal         0x80054F08
    // 0x80066B6C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80054F08(rdram, ctx);
        goto after_0;
    // 0x80066B6C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x80066B70: lh          $t8, 0x20($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X20);
    // 0x80066B74: lh          $t0, 0x22($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X22);
    // 0x80066B78: addiu       $t9, $t8, 0x80
    ctx->r25 = ADD32(ctx->r24, 0X80);
    // 0x80066B7C: addiu       $t1, $t0, 0x80
    ctx->r9 = ADD32(ctx->r8, 0X80);
    // 0x80066B80: sh          $t9, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r25;
    // 0x80066B84: sh          $t1, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r9;
    // 0x80066B88: addiu       $t3, $sp, 0x20
    ctx->r11 = ADD32(ctx->r29, 0X20);
    // 0x80066B8C: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x80066B90: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80066B94: nop

    // 0x80066B98: swl         $at, 0x0($t2)
    do_swl(rdram, 0X0, ctx->r10, ctx->r1);
    // 0x80066B9C: swr         $at, 0x3($t2)
    do_swr(rdram, 0X3, ctx->r10, ctx->r1);
    // 0x80066BA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80066BA4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80066BA8: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x80066BAC: jr          $ra
    // 0x80066BB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80066BB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80066BB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80066BB4: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x80066BB8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80066BBC: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80066BC0: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x80066BC4: lw          $a1, 0x110($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X110);
    // 0x80066BC8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80066BCC: lbu         $v0, 0x1E($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X1E);
    // 0x80066BD0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x80066BD4: sll         $t7, $v0, 14
    ctx->r15 = S32(ctx->r2 << 14);
    // 0x80066BD8: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x80066BDC: andi        $t8, $v0, 0xFFFF
    ctx->r24 = ctx->r2 & 0XFFFF;
    // 0x80066BE0: jr          $ra
    // 0x80066BE4: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    return;
    // 0x80066BE4: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
;}
RECOMP_FUNC void func_80066BE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80066BE8: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x80066BEC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80066BF0: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x80066BF4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80066BF8: lw          $t7, 0x110($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X110);
    // 0x80066BFC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80066C00: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
    // 0x80066C04: lbu         $v0, 0x1E($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X1E);
    // 0x80066C08: jr          $ra
    // 0x80066C0C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80066C0C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80066C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80066C10: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x80066C14: lw          $a2, -0x490($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X490);
    // 0x80066C18: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x80066C1C: lbu         $t6, 0xA($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0XA);
    // 0x80066C20: addiu       $t8, $t8, 0x260
    ctx->r24 = ADD32(ctx->r24, 0X260);
    // 0x80066C24: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x80066C28: lbu         $t4, 0xA($a2)
    ctx->r12 = MEM_BU(ctx->r6, 0XA);
    // 0x80066C2C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80066C30: lw          $t1, 0x0($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X0);
    // 0x80066C34: lw          $t7, 0x24($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X24);
    // 0x80066C38: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x80066C3C: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x80066C40: sll         $t9, $a0, 1
    ctx->r25 = S32(ctx->r4 << 1);
    // 0x80066C44: addu        $t6, $t5, $t8
    ctx->r14 = ADD32(ctx->r13, ctx->r24);
    // 0x80066C48: addu        $t3, $t7, $t9
    ctx->r11 = ADD32(ctx->r15, ctx->r25);
    // 0x80066C4C: lb          $t4, 0x1($t3)
    ctx->r12 = MEM_B(ctx->r11, 0X1);
    // 0x80066C50: lb          $t5, 0xF($a2)
    ctx->r13 = MEM_B(ctx->r6, 0XF);
    // 0x80066C54: lw          $t2, 0x4($t6)
    ctx->r10 = MEM_W(ctx->r14, 0X4);
    // 0x80066C58: subu        $a3, $t4, $t5
    ctx->r7 = SUB32(ctx->r12, ctx->r13);
    // 0x80066C5C: multu       $a3, $t2
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80066C60: lb          $t8, 0x2($t3)
    ctx->r24 = MEM_B(ctx->r11, 0X2);
    // 0x80066C64: lb          $t6, 0x10($a2)
    ctx->r14 = MEM_B(ctx->r6, 0X10);
    // 0x80066C68: lb          $t5, 0x11($a2)
    ctx->r13 = MEM_B(ctx->r6, 0X11);
    // 0x80066C6C: subu        $t0, $t8, $t6
    ctx->r8 = SUB32(ctx->r24, ctx->r14);
    // 0x80066C70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80066C74: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x80066C78: mflo        $t7
    ctx->r15 = lo;
    // 0x80066C7C: nop

    // 0x80066C80: nop

    // 0x80066C84: multu       $t0, $t1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80066C88: mflo        $t9
    ctx->r25 = lo;
    // 0x80066C8C: subu        $t4, $t7, $t9
    ctx->r12 = SUB32(ctx->r15, ctx->r25);
    // 0x80066C90: addu        $t8, $t4, $t5
    ctx->r24 = ADD32(ctx->r12, ctx->r13);
    // 0x80066C94: multu       $a3, $t1
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80066C98: sb          $t8, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r24;
    // 0x80066C9C: lb          $t4, 0x12($a2)
    ctx->r12 = MEM_B(ctx->r6, 0X12);
    // 0x80066CA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80066CA4: mflo        $t6
    ctx->r14 = lo;
    // 0x80066CA8: nop

    // 0x80066CAC: nop

    // 0x80066CB0: multu       $t0, $t2
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80066CB4: mflo        $t7
    ctx->r15 = lo;
    // 0x80066CB8: addu        $t9, $t6, $t7
    ctx->r25 = ADD32(ctx->r14, ctx->r15);
    // 0x80066CBC: addu        $t5, $t9, $t4
    ctx->r13 = ADD32(ctx->r25, ctx->r12);
    // 0x80066CC0: jr          $ra
    // 0x80066CC4: sb          $t5, 0x1($a1)
    MEM_B(0X1, ctx->r5) = ctx->r13;
    return;
    // 0x80066CC4: sb          $t5, 0x1($a1)
    MEM_B(0X1, ctx->r5) = ctx->r13;
;}
RECOMP_FUNC void func_80066CC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80066CC8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80066CCC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80066CD0: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80066CD4: lw          $s0, -0x490($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X490);
    // 0x80066CD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80066CDC: lbu         $t6, 0x13($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X13);
    // 0x80066CE0: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80066CE4: addiu       $t8, $s0, 0x15
    ctx->r24 = ADD32(ctx->r16, 0X15);
    // 0x80066CE8: sb          $t7, 0x29($sp)
    MEM_B(0X29, ctx->r29) = ctx->r15;
    // 0x80066CEC: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80066CF0: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x80066CF4: jal         0x8006DF38
    // 0x80066CF8: sb          $t6, 0x28($sp)
    MEM_B(0X28, ctx->r29) = ctx->r14;
    func_8006DF38(rdram, ctx);
        goto after_0;
    // 0x80066CF8: sb          $t6, 0x28($sp)
    MEM_B(0X28, ctx->r29) = ctx->r14;
    after_0:
    // 0x80066CFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80066D00: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80066D04: jr          $ra
    // 0x80066D08: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80066D08: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
