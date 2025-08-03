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
    extern void display(int instr, int pc);
    // DPI import at vsrc/top.v:4:30
    extern void display_ref(const svOpenArrayHandle rf);
    // DPI import at vsrc/top.v:1:30
    extern void ebreak(int a0_val, int exit_pc);
    // DPI import at vsrc/top.v:106:31
    extern int pmem_read(int raddr, int valid);
    // DPI import at vsrc/top.v:107:32
    extern void pmem_write(int waddr, int wdata, char wmask, int pc);
    // DPI import at vsrc/top.v:2:29
    extern int rom_read(int addr);

#ifdef __cplusplus
}
#endif

#endif  // guard
