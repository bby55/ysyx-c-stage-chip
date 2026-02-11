#ifndef __SDB_H__
#define __SDB_H__

// 第一步：包含npc.h，导入所有公共类型/枚举/声明（核心，解决冲突）
#include "npc.h"

// 仅保留sdb.h专属的调试相关内容，无任何重复定义
#include <readline/readline.h>
#include <readline/history.h>
#include <stdlib.h>
#include <string.h>

// 调试界面logo（sdb专属）
const char *npc_logo =
"\n"
"██╗   ██╗███████╗██╗   ██╗██╗  ██╗     ███████╗ ██████╗  ██████╗\n"
"╚██╗ ██╔╝██╔════╝╚██╗ ██╔╝╚██╗██╔╝     ██╔════╝██╔═══██╗██╔════╝\n"
" ╚████╔╝ ███████╗ ╚████╔╝  ╚███╔╝█████╗███████╗██║   ██║██║     \n"
"  ╚██╔╝  ╚════██║  ╚██╔╝   ██╔██╗╚════╝╚════██║██║   ██║██║     \n"
"   ██║   ███████║   ██║   ██╔╝ ██╗     ███████║╚██████╔╝╚██████╗\n"
"   ╚═╝   ╚══════╝   ╚═╝   ╚═╝  ╚═╝     ╚══════╝ ╚═════╝  ╚═════╝";

// 仅保留sdb专属的函数声明（公共函数声明已在npc.h）
void sdb_mainloop();
void print_iringbuf();

static void welcome() {
    printf("\033[5;33m %s \033[0m\n",npc_logo);
    printf("Welcome to \033[33;41mysyx\033[0m-soc!\n");
    printf("For help, type \"help\"\n");
}

#endif // __SDB_H__