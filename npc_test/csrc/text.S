.section .text
.global _start

_start:
    lui sp, 0x80051           # sp = 0x80051000
    addi sp, sp, -16          # sp = 0x80050ff0
    lui a0, 0                 # a0 = 0
    addi a0, a0, 5            # a0 = 5
    lui a1, 0                 # a1 = 0
    addi a1, a1, 10           # a1 = 10
    add a2, a0, a1            # a2 = 15
    sw a2, 0(sp)              # [sp] = 15
    sb a0, 4(sp)              # [sp + 4] = 5
    lw a3, 0(sp)              # a3 = 15
    lbu a4, 4(sp)             # a4 = 5
    add a0, a3, a4            # a0 = 20
    lui a5, 0                 # a5 = 0
    addi a5, a5, 20           # a5 = 20
    sub a6, a0, a5            # a6 = a0 - a5 (代替 beq)
    addi a6, a6, 0            # 检查 a6 是否为 0
    lui t0, 0x80000           # t0 = 0x80000000
    addi t0, t0, 0x34         # t0 = 0x80000034 (fail)
    jalr x0, t0, 0            # 跳转到 fail (a6 != 0)

pass:
    lui a0, 0                 # a0 = 0 (success)
    lui t0, 0x80000           # t0 = 0x80000000
    addi t0, t0, 0x41c        # t0 = 0x8000041c (halt)
    jalr x0, t0, 0            # 跳转到 halt

fail:
    lui a0, 0                 # a0 = 0
    addi a0, a0, 1            # a0 = 1 (fail)
    lui t0, 0x80000           # t0 = 0x80000000
    addi t0, t0, 0x41c        # t0 = 0x8000041c (halt)
    jalr x0, t0, 0            # 跳转到 halt