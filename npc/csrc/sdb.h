#ifndef __SDB_H__
#define __SDB_H__

#include <readline/readline.h>
#include <readline/history.h>
#include <stdlib.h>
#include <string.h>

enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT, NPC_QUIT };

typedef struct {
    int state;
} NPCState;

extern NPCState npc_state;

void sdb_mainloop();
void cpu_exec(uint64_t n);

#endif