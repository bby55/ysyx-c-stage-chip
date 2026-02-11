#include "npc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <readline/readline.h>
#include <readline/history.h>

// ==============================================
// 本模块定义的全局变量（npc.h中extern声明）
// ==============================================
Breakpoint breakpoints[MAX_BREAKPOINTS] = {0};
int breakpoint_count = 0;
bool is_mtrace = false;
int is_nemu = 0;
int is_print = 0;
bool g_print_step = false;



// ==============================================
// 命令处理函数原型（本模块内部使用）
// ==============================================
static int cmd_help(char *args);
static int cmd_q(char *args);
static int cmd_c(char *args);
static int cmd_si(char *args);
static int cmd_info(char *args);
static int cmd_x(char *args);
static int cmd_itrace(char *args);
static int cmd_mtrace(char *args);
static int cmd_b(char *args);
static int cmd_del_breakpoint(char *args);
static int cmd_enable_breakpoint(char *args);
static int cmd_disable_breakpoint(char *args);

// ==============================================
// 命令表：命令名称、描述、处理函数映射
// ==============================================
static struct {
    const char *name;
    const char *description;
    int (*handler) (char *);
} cmd_table[] = {
    { "help", "显示所有支持的命令", cmd_help },
    { "c", "继续执行程序（从当前位置/断点处开始）", cmd_c },
    { "q", "退出NPC模拟器", cmd_q },
    { "si", "单步执行（可指定步数，如si 5）", cmd_si },
    { "info", "查看寄存器状态(info r)或断点(info b)", cmd_info },
    { "x", "查看内存数据（用法: x N 地址，如x 10 0x80000000）", cmd_x },
    { "itrace", "显示指令执行历史", cmd_itrace },
    { "mtrace", "开启/关闭内存访问跟踪（mtrace on/off）", cmd_mtrace},
    { "b", "设置断点（用法: b 地址 [type]，type可选permanent/oneshot，默认permanent）", cmd_b },
    { "del", "删除断点（用法: del 编号 或 del all）", cmd_del_breakpoint },
    { "enable", "启用断点（用法: enable 编号）", cmd_enable_breakpoint },
    { "disable", "禁用断点（用法: disable 编号）", cmd_disable_breakpoint }
};

#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))
#define NR_CMD ARRLEN(cmd_table)

// ==============================================
// 读行函数：封装readline，支持历史命令
// ==============================================
char* rl_gets() {
    static char *line_read = NULL;
    if (line_read) {
        free(line_read);
        line_read = NULL;
    }
    line_read = readline("(soc) ");
    if (line_read && *line_read) {
        add_history(line_read);
    }
    return line_read;
}

// ==============================================
// 断点检测：检查当前PC是否命中已启用的断点
// ==============================================
bool check_breakpoint(uint32_t current_pc) {
    for (int i = 0; i < breakpoint_count; i++) {
        if (breakpoints[i].enabled && breakpoints[i].pc == current_pc) {
            printf("\n\033[1;31m====== 命中断点 ======\033[0m\n");
            printf("地址: 0x%08x | 类型: %s | 编号: %d\n",
                   breakpoints[i].pc,
                   breakpoints[i].type == BP_PERMANENT ? "永久" : "单次",
                   i+1);
            
            if (is_counting_for_break) {
                uint64_t steps_used = total_steps - start_step;
                printf("执行步数: %" PRIu64 " 步 (从上次'c'命令开始)\n", steps_used);
                is_counting_for_break = false;
            }

#ifndef BATCH_MODE
            printf("提示: 输入 'c' 继续执行 | 'si [步数]' 单步执行\n");
#endif

            printf("\033[1;31m======================\033[0m\n\n");

            // 单次断点命中后自动禁用
            if (breakpoints[i].type == BP_ONESHOT) {
                breakpoints[i].enabled = false;
                printf("单次断点已自动禁用\n");
            }
            return true;
        }
    }
    return false;
}

// ==============================================
// 添加断点：校验地址并添加到断点数组
// ==============================================
int add_breakpoint(uint32_t pc_addr, BreakpointType type) {
    if (pc_addr % 4 != 0) {
        printf("警告: PC地址 0x%08x 未按4字节对齐，可能无法命中断点\n", pc_addr);
    }
    // 检查是否已存在启用的同地址断点
    for (int i = 0; i < breakpoint_count; i++) {
        if (breakpoints[i].pc == pc_addr && breakpoints[i].enabled) {
            printf("已存在启用的断点: 0x%08x（编号: %d）\n", pc_addr, i+1);
            return -1;
        }
    }
    // 检查是否超出最大断点数量
    if (breakpoint_count >= MAX_BREAKPOINTS) {
        printf("已达到最大断点数量 (%d)\n", MAX_BREAKPOINTS);
        return -1;
    }
    // 添加新断点
    breakpoints[breakpoint_count].pc = pc_addr;
    breakpoints[breakpoint_count].type = type;
    breakpoints[breakpoint_count].enabled = true;
    breakpoint_count++;
    printf("已设置断点 | 编号: %d | 地址: 0x%08x | 类型: %s\n",
           breakpoint_count,
           pc_addr,
           type == BP_PERMANENT ? "永久" : "单次");
    return 0;
}

// ==============================================
// 打印断点列表：格式化输出所有断点状态
// ==============================================
void print_breakpoints() {
    if (breakpoint_count == 0) {
        printf("没有设置任何断点\n");
        return;
    }
    printf("\033[1;34m====== 当前断点列表 ======\033[0m\n");
    printf("%-4s %-12s %-8s %-6s\n", "编号", "地址(PC)", "类型", "状态");
    printf("----------------------------------------\n");
    for (int i = 0; i < breakpoint_count; i++) {
        printf("%-4d 0x%08x     %-8s %-6s\n",
               i+1,
               breakpoints[i].pc,
               breakpoints[i].type == BP_PERMANENT ? "永久" : "单次",
               breakpoints[i].enabled ? "启用" : "禁用");
    }
    printf("========================================\n");
}

// ==============================================
// 命令处理：help - 显示命令帮助
// ==============================================
int cmd_help(char *args) {
    char *arg = strtok(NULL, " ");
    int i;
    if (arg == NULL) {
        for (i = 0; i < NR_CMD; i++) {
            printf("%-8s - %s\n", cmd_table[i].name, cmd_table[i].description);
        }
    } else {
        for (i = 0; i < NR_CMD; i++) {
            if (strcmp(arg, cmd_table[i].name) == 0) {
                printf("%-8s - %s\n", cmd_table[i].name, cmd_table[i].description);
                return 0;
            }
        }
        printf("未知命令 '%s'\n", arg);
    }
    return 0;
}

// ==============================================
// 命令处理：q - 退出模拟器
// ==============================================
int cmd_q(char *args) {
    npc_state.state = NPC_QUIT;
    return -1;
}

// ==============================================
// 命令处理：c - 继续执行程序，直到断点或结束
// ==============================================
int cmd_c(char *args) {
    start_step = total_steps;
    is_counting_for_break = true;
    npc_state.state = NPC_RUNNING;
    cpu_exec(UINT64_MAX);
    return 0;
}

// ==============================================
// 命令处理：si - 单步执行n条指令，默认1条
// ==============================================
int cmd_si(char *args) {
    int i;
    if(is_print != 0){
        if (args == NULL) {
            cpu_exec(1);
            is_print = 1;
        } else {
            i = atoi(args);
            if (i <= 0) {
                printf("无效步数: %s，请提供正整数。\n", args);
                return 0;
            }
            cpu_exec(i);
            is_print = 1;
        }
    return 0;
    }
    else{
        cpu_exec(1);
        is_print = 1;
        return 0;
    }
}

// ==============================================
// 命令处理：info - 查看寄存器(info r)或断点(info b)
// ==============================================
int cmd_info(char *args) {
    if (args == NULL) {
        printf("用法: info r（查看寄存器） | info b（查看断点）\n");
        return 0;
    }
    if (strcmp(args, "r") == 0) {
        printf_ref();
    } else if (strcmp(args, "b") == 0) {
        print_breakpoints();
    } else {
        printf("未知参数: %s，支持的参数: r, b\n", args);
    }
    return 0;
}

// ==============================================
// 命令处理：x - 查看内存数据，从指定地址开始的N个4字节
// ==============================================
int cmd_x(char *args) {
    char *arg1 = strtok(NULL, " ");
    if (arg1 == NULL) {
        printf("用法: x N EXPR（查看从EXPR开始的N个4字节数据）\n");
        return 0;
    }
    char *arg2 = strtok(NULL, " ");
    if (arg2 == NULL) {
        printf("用法: x N EXPR（例如: x 10 0x80000000）\n");
        return 0;
    }
    char *endptr1;
    u_int32_t n = strtol(arg1, &endptr1, 0);
    u_int32_t expr = strtol(arg2, NULL, 16);

    if (*endptr1 != '\0') {
        printf("\033[1;31m无效数量格式: %s\033[0m\n", arg1);
        return 0;
    }
    if (expr < 0x80000000 || expr >= 0x90000000) {
        printf("\033[1;31m地址 0x%08x 超出RAM范围(0x80000000 ~ 0x8FFFFFFF)!\033[0m\n", expr);
        return 0;
    }

    printf("\033[1;34m======= 内存数据 (从 0x%08x 开始) =======\033[0m\n", expr);
    printf("地址          数据\n");
    printf("------------------------\n");

    for (int i = 0; i < n; i++) {
        uint32_t address = expr + i * 4 ;
        uint32_t data = pmem_read(address-0x80000000, 0);
        printf("0x%08x  0x%08x\n", address, data);
    }

    printf("----------------------------------------\n");
    return 0;
}

// ==============================================
// 命令处理：itrace - 显示指令执行历史
// ==============================================
int cmd_itrace(char *args) {
    print_iringbuf();
    return 0;
}

// ==============================================
// 命令处理：mtrace - 开启/关闭内存访问跟踪
// ==============================================
int cmd_mtrace(char *args){
    if(args == NULL){
        printf("用法: mtrace on（开启） | mtrace off（关闭）\n");
        return 0;
    }
    if(strcmp(args, "on") == 0){
        is_mtrace = true;
        printf("内存跟踪已开启\n");
    }
    else if(strcmp(args, "off") == 0){
        is_mtrace = false;
        printf("内存跟踪已关闭\n");
    }
    else {
        printf("无效参数: %s，支持的参数: on, off\n", args);
    }
    return 0;
}

// ==============================================
// 命令处理：b - 设置断点，支持永久/单次
// ==============================================
int cmd_b(char *args) {
    if (args == NULL) {
        printf("用法: b <pc地址> [类型]（类型: permanent/oneshot，默认permanent）\n");
        printf("示例: b 0x80000000（永久断点）\n");
        printf("      b 0x80000040 oneshot（单次断点）\n");
        return 0;
    }

    char *addr_str = strtok(args, " ");
    if (addr_str == NULL) {
        printf("请提供断点地址，用法: b <pc地址> [类型]\n");
        return 0;
    }

    char *endptr;
    uint32_t pc_addr = strtol(addr_str, &endptr, 16);
    if (*endptr != '\0' || addr_str == endptr) {
        printf("无效的地址格式: %s，请使用十六进制（如0x80000000）\n", addr_str);
        return 0;
    }

    char *type_arg = strtok(NULL, " ");
    BreakpointType type = BP_PERMANENT;
    if (type_arg != NULL) {
        if (strcmp(type_arg, "oneshot") == 0) {
            type = BP_ONESHOT;
        } else if (strcmp(type_arg, "permanent") != 0) {
            printf("无效的断点类型: %s，支持: permanent/oneshot\n", type_arg);
            return 0;
        }
    }

    add_breakpoint(pc_addr, type);
    return 0;
}

// ==============================================
// 命令处理：del - 删除断点，支持指定编号或全部
// ==============================================
int cmd_del_breakpoint(char *args) {
    if (args == NULL) {
        printf("用法: del <编号>（删除指定断点） | del all（删除所有断点）\n");
        return 0;
    }

    if (strcmp(args, "all") == 0) {
        breakpoint_count = 0;
        printf("已删除所有断点\n");
        return 0;
    }

    int idx = atoi(args) - 1;
    if (idx < 0 || idx >= breakpoint_count) {
        printf("无效的断点编号: %s，当前共有 %d 个断点\n", args, breakpoint_count);
        return 0;
    }

    // 前移覆盖要删除的断点
    for (int i = idx; i < breakpoint_count - 1; i++) {
        breakpoints[i] = breakpoints[i + 1];
    }
    breakpoint_count--;
    printf("已删除断点编号: %d\n", idx + 1);
    return 0;
}

// ==============================================
// 命令处理：enable - 启用指定编号的断点
// ==============================================
int cmd_enable_breakpoint(char *args) {
    if (args == NULL) {
        printf("用法: enable <断点编号>\n");
        return 0;
    }

    int idx = atoi(args) - 1;
    if (idx < 0 || idx >= breakpoint_count) {
        printf("无效的断点编号: %s，当前共有 %d 个断点\n", args, breakpoint_count);
        return 0;
    }

    if (breakpoints[idx].enabled) {
        printf("断点 %d 已处于启用状态\n", idx + 1);
    } else {
        breakpoints[idx].enabled = true;
        printf("已启用断点 %d（地址: 0x%08x）\n", idx + 1, breakpoints[idx].pc);
    }
    return 0;
}

// ==============================================
// 命令处理：disable - 禁用指定编号的断点
// ==============================================
int cmd_disable_breakpoint(char *args) {
    if (args == NULL) {
        printf("用法: disable <断点编号>\n");
        return 0;
    }

    int idx = atoi(args) - 1;
    if (idx < 0 || idx >= breakpoint_count) {
        printf("无效的断点编号: %s，当前共有 %d 个断点\n", args, breakpoint_count);
        return 0;
    }

    if (!breakpoints[idx].enabled) {
        printf("断点 %d 已处于禁用状态\n", idx + 1);
    } else {
        breakpoints[idx].enabled = false;
        printf("已禁用断点 %d（地址: 0x%08x）\n", idx + 1, breakpoints[idx].pc);
    }
    return 0;
}

// ==============================================
// 命令行主循环：读取用户输入，解析并执行命令
// ==============================================
void sdb_mainloop() {
    #if AUTO_RUN_ON_START
    printf("\033[1;32m[AUTO_RUN]\033[0m\n");
    cmd_c(NULL);  // 调用继续命令处理函数，args传NULL（无参数）
    #endif

    for (char *str; (str = rl_gets()) != NULL; ) {
        char *str_end = str + strlen(str);
        char *cmd = strtok(str, " ");
        if (cmd == NULL) { continue; }
        char *args = cmd + strlen(cmd) + 1;
        if (args >= str_end) { args = NULL; }

        // 查找并执行命令
        int i;
        for (i = 0; i < NR_CMD; i++) {
            if (strcmp(cmd, cmd_table[i].name) == 0) {
                cmd_table[i].handler(args);
                break;
            }
        }
        if (i == NR_CMD) {
            printf("未知命令: %s，输入 help 查看支持的命令\n", cmd);
        }

        // 继续执行：处理断点和运行状态
        if (npc_state.state == NPC_RUNNING) {
            int cycles = 0;
            bool breakpoint_hit = false;

            while (!ctx->gotFinish() && npc_state.state != NPC_END) {
                uint32_t current_pc_before_exec = cpu_state.pc;

#ifdef ENABLE_DIFFTEST
                prepare_npc_before_state(npc_before, ::is_nemu, ::n_pc, cpu_state.pc, cpu_state.gpr);
#endif // ENABLE_DIFFTEST

                // 复位控制（与cpu_exec保持一致）
                if (!reset_finished) {
                    top->reset = (reset_cycle_cnt < RESET_TOTAL_CYCLES) ? 1 : 0;
                    if (reset_cycle_cnt < RESET_TOTAL_CYCLES) {
                        reset_cycle_cnt++;
                    } else {
                        reset_finished = true;
                    }
                } else {
                    top->reset = 0;
                }

                // 时钟翻转
                top->clock = 0;
                ctx->timeInc(1);
                top->eval();
                if (tfp != NULL) tfp->dump(ctx->time());
                
                top->clock = 1;
                ctx->timeInc(1);
                top->eval();
                if (tfp != NULL) tfp->dump(ctx->time());
                
                // 时间和统计更新
                cycles++;
                update_virtual_time();
                update_rtc();
                ::is_nemu++;
                total_steps++;

                // 同步PC
                cpu_state.pc = ::n_pc;

#ifdef ENABLE_DIFFTEST
                // 差分测试
                memcpy(npc.gpr, cpu_state.gpr, sizeof(npc.gpr));
                npc.pc = cpu_state.pc;
                npc.csr = cpu_state.csr;

                sync_npc_to_nemu(npc_before);
                execute_nemu_step();
                get_nemu_result(ref_nemu);
                
                if (check_diff_result(npc, ref_nemu, ::is_nemu, current_pc_before_exec)) {
                    break;
                }
#endif // ENABLE_DIFFTEST

                // 断点检测
                if (check_breakpoint(cpu_state.pc)) {
                    breakpoint_hit = true;
                    npc_state.state = NPC_STOP;
                    break;
                }
            }

            // 处理未达断点的情况
            if (is_counting_for_break && !breakpoint_hit) {
                if (npc_state.state == NPC_END) {
                    printf("\n\033[1;33m程序已结束，未到达指定断点\033[0m\n");
                } else if (npc_state.state == NPC_ABORT) {
                    printf("\n\033[1;31m程序异常终止，未到达指定断点\033[0m\n");
                }
                is_counting_for_break = false;
            }

            // 恢复停止状态
            if(npc_state.state != NPC_ABORT) printf("已暂停，等待命令...\n");
            if (npc_state.state != NPC_END) {
                npc_state.state = NPC_STOP;
            }
        }

        // 退出循环
        if (npc_state.state == NPC_QUIT) {
            break;
        }
    }
}