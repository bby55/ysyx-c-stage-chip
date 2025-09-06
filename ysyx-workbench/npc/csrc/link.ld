.section .text
.globl _start
_start:
    # 初始化栈指针（与你的环境一致）
    lui sp, 0x80051       # sp = 0x80051000
    addi sp, sp, 0        # 栈指针调整

    # 初始化循环计数器（例如：循环5次后退出）
    li t1, 5              # t1 = 5（循环次数上限）
    li t2, 0              # t2 = 0（当前循环计数）

loop:
    # 原循环逻辑（示例：累加操作）
    li a5, 0              # 重置a5
    addi a5, a5, 20       # a5 = 20（对应原01478793）
    sub a6, a0, a5        # a6 = a0 - a5（对应原40f50833）
    addi a7, a7, 0        # a7保持不变（对应原00080813）

    # 循环计数+1，判断是否退出
    addi t2, t2, 1        # t2 += 1
    bge t2, t1, exit_loop # 若t2 >= t1，跳转到exit_loop

    # 继续循环（跳回loop，而非原0x80000034）
    j loop

exit_loop:
    # 跳转到halt（0x8000041c）
    lui ra, 0x80000       # ra高位 = 0x80000000
    addi ra, ra, 0x41c    # ra = 0x8000041c（halt地址）
    jalr ra               # 跳转到halt

# 终止函数
.globl halt
halt:
    ebreak                # 终止程序
    j halt                # 保险循环
