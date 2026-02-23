// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024unit.h"

extern "C" void perfomance(int ifu_count, int lsu_count, int compute_count, int csr_count, int jump_count, int mem_count, int exu_count, int ifu_cycles, int lsu_cycles);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_perfomance_TOP____024unit(IData/*31:0*/ ifu_count, IData/*31:0*/ lsu_count, IData/*31:0*/ compute_count, IData/*31:0*/ csr_count, IData/*31:0*/ jump_count, IData/*31:0*/ mem_count, IData/*31:0*/ exu_count, IData/*31:0*/ ifu_cycles, IData/*31:0*/ lsu_cycles) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_perfomance_TOP____024unit\n"); );
    // Body
    int ifu_count__Vcvt;
    for (size_t ifu_count__Vidx = 0; ifu_count__Vidx < 1; ++ifu_count__Vidx) ifu_count__Vcvt = ifu_count;
    int lsu_count__Vcvt;
    for (size_t lsu_count__Vidx = 0; lsu_count__Vidx < 1; ++lsu_count__Vidx) lsu_count__Vcvt = lsu_count;
    int compute_count__Vcvt;
    for (size_t compute_count__Vidx = 0; compute_count__Vidx < 1; ++compute_count__Vidx) compute_count__Vcvt = compute_count;
    int csr_count__Vcvt;
    for (size_t csr_count__Vidx = 0; csr_count__Vidx < 1; ++csr_count__Vidx) csr_count__Vcvt = csr_count;
    int jump_count__Vcvt;
    for (size_t jump_count__Vidx = 0; jump_count__Vidx < 1; ++jump_count__Vidx) jump_count__Vcvt = jump_count;
    int mem_count__Vcvt;
    for (size_t mem_count__Vidx = 0; mem_count__Vidx < 1; ++mem_count__Vidx) mem_count__Vcvt = mem_count;
    int exu_count__Vcvt;
    for (size_t exu_count__Vidx = 0; exu_count__Vidx < 1; ++exu_count__Vidx) exu_count__Vcvt = exu_count;
    int ifu_cycles__Vcvt;
    for (size_t ifu_cycles__Vidx = 0; ifu_cycles__Vidx < 1; ++ifu_cycles__Vidx) ifu_cycles__Vcvt = ifu_cycles;
    int lsu_cycles__Vcvt;
    for (size_t lsu_cycles__Vidx = 0; lsu_cycles__Vidx < 1; ++lsu_cycles__Vidx) lsu_cycles__Vcvt = lsu_cycles;
    perfomance(ifu_count__Vcvt, lsu_count__Vcvt, compute_count__Vcvt, csr_count__Vcvt, jump_count__Vcvt, mem_count__Vcvt, exu_count__Vcvt, ifu_cycles__Vcvt, lsu_cycles__Vcvt);
}

extern "C" void psram_read(int addr, int* data);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_psram_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_psram_read_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int data__Vcvt;
    psram_read(addr__Vcvt, &data__Vcvt);
    data = data__Vcvt;
}

extern "C" void psram_write(int addr, char data);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_psram_write_TOP____024unit(IData/*31:0*/ addr, CData/*7:0*/ data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_psram_write_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    char data__Vcvt;
    for (size_t data__Vidx = 0; data__Vidx < 1; ++data__Vidx) data__Vcvt = data;
    psram_write(addr__Vcvt, data__Vcvt);
}

extern "C" void flash_read(int addr, int* data);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int data__Vcvt;
    flash_read(addr__Vcvt, &data__Vcvt);
    data = data__Vcvt;
}
