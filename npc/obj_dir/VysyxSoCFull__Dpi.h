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
    // DPI import at vsrc/IFU/ysyx_ifu.v:137:30
    extern void display(int instr, int pc, int npc, int update_en);
    // DPI import at vsrc/WBU/REG.v:1:30
    extern void display_ref(int rf0, int rf1, int rf2, int rf3, int rf4, int rf5, int rf6, int rf7, int rf8, int rf9, int rf10, int rf11, int rf12, int rf13, int rf14, int rf15);
    // DPI import at vsrc/ysyx.v:1:30
    extern void ebreak(int a0_val, int exit_pc);
    // DPI import at /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/flash/flash.v:84:30
    extern void flash_read(int addr, int* data);
    // DPI import at /home/ysyxbby/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v:5402:30
    extern void mrom_read(int raddr, int* rdata);
    // DPI import at vsrc/LSU/ysyx_lsu.v:1:29
    extern int pmem_read(int raddr, int valid);
    // DPI import at vsrc/LSU/ysyx_lsu.v:2:30
    extern void pmem_write(int waddr, int wdata, char wmask, int pc);
    // DPI import at /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/psram/psram.v:147:30
    extern void psram_read(int addr, int* data);
    // DPI import at /home/ysyxbby/ysyx-workbench/ysyxSoC/perip/psram/psram.v:148:30
    extern void psram_write(int addr, char data);
    // DPI import at vsrc/WBU/CSR.v:93:30
    extern void set_csr_values(int mcause, int mepc, int mstatus, int mtvec);

#ifdef __cplusplus
}
#endif

#endif  // guard
