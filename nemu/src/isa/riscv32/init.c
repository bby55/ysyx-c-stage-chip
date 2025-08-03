/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <memory/paddr.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define ROM_SIZE 4194304  // 1MB, 匹配 NPC 的 ROM 大小

extern uint8_t pmem[];  // 声明 pmem，定义在 paddr.c 中

static uint32_t img[ROM_SIZE];
static size_t img_size = 0;

static const uint32_t default_img[] = {
    0x00000297,  // auipc t0,0
    0x00028823,  // sb zero,16(t0)
    0x0102c503,  // lbu a0,16(t0)
    0x00100073,  // ebreak
    0xdeadbeef   // some data
};

void load_img() {
    FILE* fp = fopen("/home/ysyxbby/ysyx-workbench/npc/rom/text.bin", "rb");
    if (fp) {
        printf("Loading NPC ROM: /home/ysyxbby/ysyx-workbench/npc/rom/text.bin\n");
        size_t count = 0;
        uint32_t word;
        while (count < ROM_SIZE && fread(&word, 4, 1, fp) == 1) {
            img[count++] = word;
        }
        img_size = count;
        fclose(fp);
        printf("Loaded %zu instructions from NPC ROM\n", count);
    } else {
        printf("No NPC ROM found at /home/ysyxbby/ysyx-workbench/npc/rom/text.bin: %s\n", strerror(errno));
        memcpy(img, default_img, sizeof(default_img));
        img_size = sizeof(default_img) / sizeof(default_img[0]);
    }

    if (img_size * 4 > CONFIG_MSIZE) {
        printf("Error: Image size (%zu bytes) exceeds memory size (%u bytes)\n", 
               img_size * 4, CONFIG_MSIZE);
        exit(1);
    }

    memcpy(pmem + (RESET_VECTOR - CONFIG_MBASE), img, img_size * 4);
    Log("Loaded image with %zu instructions to " FMT_PADDR, img_size, RESET_VECTOR);
}

void init_isa() {
    cpu.pc = RESET_VECTOR;
    cpu.gpr[0] = 0;
    for (int i = 1; i < 32; i++) {
        cpu.gpr[i] = 0;
    }
}