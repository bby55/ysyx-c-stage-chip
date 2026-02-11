#ifndef __SDB_H__
#define __SDB_H__

#include <readline/readline.h>
#include <readline/history.h>
#include <stdlib.h>
#include <string.h>

const char *npc_logo =
"\n"
"██████╗ ██╗   ██╗██████╗ ██████╗ ███████╗    ███╗   ██╗██████╗  ██████╗\n"
"██╔══██╗██║   ██║╚════██╗╚════██╗██╔════╝    ████╗  ██║██╔══██╗██╔════╝\n"
"██████╔╝██║   ██║ █████╔╝ █████╔╝█████╗█████╗██╔██╗ ██║██████╔╝██║     \n"
"██╔══██╗╚██╗ ██╔╝ ╚═══██╗██╔═══╝ ██╔══╝╚════╝██║╚██╗██║██╔═══╝ ██║     \n"
"██║  ██║ ╚████╔╝ ██████╔╝███████╗███████╗    ██║ ╚████║██║     ╚██████╗\n"
"╚═╝  ╚═╝  ╚═══╝  ╚═════╝ ╚══════╝╚══════╝    ╚═╝  ╚═══╝╚═╝      ╚═════╝";

enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT, NPC_QUIT };

typedef struct {
    int state;
} NPCState;

extern NPCState npc_state;

typedef struct {
    uint32_t pc;
    uint32_t inst;
    char disasm[64];
} InstTrace;

void sdb_mainloop();
void cpu_exec(uint64_t n);
static void welcome() {
    printf("\033[5;33m %s \033[0m\n",npc_logo);
    printf("Welcome to \033[33;41mRV32e\033[0m-NPC!\n");
    printf("For help, type \"help\"\n");
}
void print_iringbuf();
#endif