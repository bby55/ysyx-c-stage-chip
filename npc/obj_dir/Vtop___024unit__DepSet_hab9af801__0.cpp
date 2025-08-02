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

extern "C" void display(int instr, int pc);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_display_TOP____024unit(IData/*31:0*/ instr, IData/*31:0*/ pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_display_TOP____024unit\n"); );
    // Body
    int instr__Vcvt;
    for (size_t instr__Vidx = 0; instr__Vidx < 1; ++instr__Vidx) instr__Vcvt = instr;
    int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    display(instr__Vcvt, pc__Vcvt);
}

extern "C" void display_ref(const svOpenArrayHandle rf);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_display_ref__Vdpioc2_TOP____024unit(const VlUnpacked<IData/*31:0*/, 32> &rf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_display_ref__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const int rf__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps rf__Vopenprops(VLVT_UINT32, VLVD_IN, VerilatedVarProps::Packed(), 31, 0, VerilatedVarProps::Unpacked(), 1, rf__Vopenprops__ulims);
    VerilatedDpiOpenVar rf__Vopenarray (&rf__Vopenprops, &rf);
    display_ref(&rf__Vopenarray);
}
