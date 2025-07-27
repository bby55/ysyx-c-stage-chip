// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024unit.h"

extern "C" void ebreak(int a0_val);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit(IData/*31:0*/ a0_val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit\n"); );
    // Body
    int a0_val__Vcvt;
    for (size_t a0_val__Vidx = 0; a0_val__Vidx < 1; ++a0_val__Vidx) a0_val__Vcvt = a0_val;
    ebreak(a0_val__Vcvt);
}

extern "C" int rom_read(int addr);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_rom_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &rom_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_rom_read_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int rom_read__Vfuncrtn__Vcvt;
    rom_read__Vfuncrtn__Vcvt = rom_read(addr__Vcvt);
    rom_read__Vfuncrtn = rom_read__Vfuncrtn__Vcvt;
}
