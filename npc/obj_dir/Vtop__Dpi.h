// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTOP__DPI_H_
#define VERILATED_VTOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at vsrc/top.v:3:30
    extern void display(int instr, int pc, int npc);
    // DPI import at vsrc/top.v:4:30
    extern void display_ref(int rf0, int rf1, int rf2, int rf3, int rf4, int rf5, int rf6, int rf7, int rf8, int rf9, int rf10, int rf11, int rf12, int rf13, int rf14, int rf15, int rf16, int rf17, int rf18, int rf19, int rf20, int rf21, int rf22, int rf23, int rf24, int rf25, int rf26, int rf27, int rf28, int rf29, int rf30, int rf31);
    // DPI import at vsrc/top.v:1:30
    extern void ebreak(int a0_val, int exit_pc);
    // DPI import at vsrc/top.v:129:31
    extern int pmem_read(int raddr, int valid);
    // DPI import at vsrc/top.v:130:32
    extern void pmem_write(int waddr, int wdata, char wmask, int pc);
    // DPI import at vsrc/top.v:2:29
    extern int rom_read(int addr);

#ifdef __cplusplus
}
#endif

#endif  // guard
