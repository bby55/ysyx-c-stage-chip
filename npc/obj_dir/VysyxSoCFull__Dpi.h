// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYXSOCFULL__DPI_H_
#define VERILATED_VYSYXSOCFULL__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/ysyxbby/ysyx-workbench/npc/vsrc/IFU/ysyx_ifu.v:138:30
    extern void display(int instr, int pc, int npc, int update_en);
    // DPI import at /home/ysyxbby/ysyx-workbench/npc/vsrc/WBU/REG.v:32:30
    extern void display_ref(int rf0, int rf1, int rf2, int rf3, int rf4, int rf5, int rf6, int rf7, int rf8, int rf9, int rf10, int rf11, int rf12, int rf13, int rf14, int rf15);
    // DPI import at /home/ysyxbby/ysyx-workbench/npc/vsrc/ysyx.v:84:30
    extern void ebreak(int a0_val, int exit_pc);
    // DPI import at /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/flash/flash.v:84:30
    extern void flash_read(int addr, int* data);
    // DPI import at /home/ysyxbby/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v:5402:30
    extern void mrom_read(int raddr, int* rdata);
    // DPI import at /home/ysyxbby/ysyx-workbench/npc/vsrc/Perfomance/perfomance.v:3:30
    extern void perfomance(int ifu_count, int lsu_count, int compute_count, int csr_count, int jump_count, int mem_count, int exu_count, int ifu_cycles, int lsu_cycles);
    // DPI import at /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/psram/psram.v:147:30
    extern void psram_read(int addr, int* data);
    // DPI import at /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/psram/psram.v:148:30
    extern void psram_write(int addr, char data);
    // DPI import at /home/ysyxbby/ysyx-workbench/npc/vsrc/WBU/CSR.v:94:30
    extern void set_csr_values(int mcause, int mepc, int mstatus, int mtvec);

#ifdef __cplusplus
}
#endif

#endif  // guard
