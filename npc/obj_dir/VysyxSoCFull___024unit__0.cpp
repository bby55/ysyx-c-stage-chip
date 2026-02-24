// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "VysyxSoCFull__pch.h"

extern "C" void perfomance(int ifu_count, int lsu_count, int compute_count, int csr_count, int jump_count, int mem_count, int exu_count, int ifu_cycles, int lsu_cycles, int no_icache_count);

void VysyxSoCFull___024unit____Vdpiimwrap_perfomance_TOP____024unit(IData/*31:0*/ ifu_count, IData/*31:0*/ lsu_count, IData/*31:0*/ compute_count, IData/*31:0*/ csr_count, IData/*31:0*/ jump_count, IData/*31:0*/ mem_count, IData/*31:0*/ exu_count, IData/*31:0*/ ifu_cycles, IData/*31:0*/ lsu_cycles, IData/*31:0*/ no_icache_count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_perfomance_TOP____024unit\n"); );
    // Body
    int ifu_count__Vcvt;
    ifu_count__Vcvt = ifu_count;
    int lsu_count__Vcvt;
    lsu_count__Vcvt = lsu_count;
    int compute_count__Vcvt;
    compute_count__Vcvt = compute_count;
    int csr_count__Vcvt;
    csr_count__Vcvt = csr_count;
    int jump_count__Vcvt;
    jump_count__Vcvt = jump_count;
    int mem_count__Vcvt;
    mem_count__Vcvt = mem_count;
    int exu_count__Vcvt;
    exu_count__Vcvt = exu_count;
    int ifu_cycles__Vcvt;
    ifu_cycles__Vcvt = ifu_cycles;
    int lsu_cycles__Vcvt;
    lsu_cycles__Vcvt = lsu_cycles;
    int no_icache_count__Vcvt;
    no_icache_count__Vcvt = no_icache_count;
    perfomance(ifu_count__Vcvt, lsu_count__Vcvt, compute_count__Vcvt, csr_count__Vcvt, jump_count__Vcvt, mem_count__Vcvt, exu_count__Vcvt, ifu_cycles__Vcvt, lsu_cycles__Vcvt, no_icache_count__Vcvt);
}

extern "C" void psram_read(int addr, int* data);

void VysyxSoCFull___024unit____Vdpiimwrap_psram_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_psram_read_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    int data__Vcvt;
    psram_read(addr__Vcvt, &data__Vcvt);
    data = (data__Vcvt);
}

extern "C" void psram_write(int addr, char data);

void VysyxSoCFull___024unit____Vdpiimwrap_psram_write_TOP____024unit(IData/*31:0*/ addr, CData/*7:0*/ data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_psram_write_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    char data__Vcvt;
    data__Vcvt = data;
    psram_write(addr__Vcvt, data__Vcvt);
}

extern "C" void flash_read(int addr, int* data);

void VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    int data__Vcvt;
    flash_read(addr__Vcvt, &data__Vcvt);
    data = (data__Vcvt);
}
