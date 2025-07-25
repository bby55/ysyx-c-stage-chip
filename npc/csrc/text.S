# text.S - 简单的 RISC-V 汇编程序，用于生成 .bin 验证 ROM 加载

    .text
    .global _start

_start:
    # 示例 1：设置寄存器 x10 = 42（a0），x11 = 100（a1）
    li x10, 42
    li x11, 100

    # 示例 2：简单计算 x12 = x10 + x11
    add x12, x10, x11

    # 示例 3：使用 ecall 退出（模拟系统调用）
    # 在 Spike 或 QEMU 中，ecall 可用于退出
    # x17 = 93 表示 exit 系统调用
    li x17, 93         # SYS_exit
    li x10, 0          # exit(0)
    ecall

    # 防止无限执行
hang:
    jal hang           # 死循环