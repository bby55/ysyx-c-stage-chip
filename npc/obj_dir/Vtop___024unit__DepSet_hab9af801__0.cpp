// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024unit.h"

extern "C" void ebreak(int a0_val, int exit_pc);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit(IData/*31:0*/ a0_val, IData/*31:0*/ exit_pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit\n"); );
    // Body
    int a0_val__Vcvt;
    for (size_t a0_val__Vidx = 0; a0_val__Vidx < 1; ++a0_val__Vidx) a0_val__Vcvt = a0_val;
    int exit_pc__Vcvt;
    for (size_t exit_pc__Vidx = 0; exit_pc__Vidx < 1; ++exit_pc__Vidx) exit_pc__Vcvt = exit_pc;
    ebreak(a0_val__Vcvt, exit_pc__Vcvt);
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

extern "C" void display_ref(int rf0, int rf1, int rf2, int rf3, int rf4, int rf5, int rf6, int rf7, int rf8, int rf9, int rf10, int rf11, int rf12, int rf13, int rf14, int rf15, int rf16, int rf17, int rf18, int rf19, int rf20, int rf21, int rf22, int rf23, int rf24, int rf25, int rf26, int rf27, int rf28, int rf29, int rf30, int rf31);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_display_ref_TOP____024unit(IData/*31:0*/ rf0, IData/*31:0*/ rf1, IData/*31:0*/ rf2, IData/*31:0*/ rf3, IData/*31:0*/ rf4, IData/*31:0*/ rf5, IData/*31:0*/ rf6, IData/*31:0*/ rf7, IData/*31:0*/ rf8, IData/*31:0*/ rf9, IData/*31:0*/ rf10, IData/*31:0*/ rf11, IData/*31:0*/ rf12, IData/*31:0*/ rf13, IData/*31:0*/ rf14, IData/*31:0*/ rf15, IData/*31:0*/ rf16, IData/*31:0*/ rf17, IData/*31:0*/ rf18, IData/*31:0*/ rf19, IData/*31:0*/ rf20, IData/*31:0*/ rf21, IData/*31:0*/ rf22, IData/*31:0*/ rf23, IData/*31:0*/ rf24, IData/*31:0*/ rf25, IData/*31:0*/ rf26, IData/*31:0*/ rf27, IData/*31:0*/ rf28, IData/*31:0*/ rf29, IData/*31:0*/ rf30, IData/*31:0*/ rf31) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_display_ref_TOP____024unit\n"); );
    // Body
    int rf0__Vcvt;
    for (size_t rf0__Vidx = 0; rf0__Vidx < 1; ++rf0__Vidx) rf0__Vcvt = rf0;
    int rf1__Vcvt;
    for (size_t rf1__Vidx = 0; rf1__Vidx < 1; ++rf1__Vidx) rf1__Vcvt = rf1;
    int rf2__Vcvt;
    for (size_t rf2__Vidx = 0; rf2__Vidx < 1; ++rf2__Vidx) rf2__Vcvt = rf2;
    int rf3__Vcvt;
    for (size_t rf3__Vidx = 0; rf3__Vidx < 1; ++rf3__Vidx) rf3__Vcvt = rf3;
    int rf4__Vcvt;
    for (size_t rf4__Vidx = 0; rf4__Vidx < 1; ++rf4__Vidx) rf4__Vcvt = rf4;
    int rf5__Vcvt;
    for (size_t rf5__Vidx = 0; rf5__Vidx < 1; ++rf5__Vidx) rf5__Vcvt = rf5;
    int rf6__Vcvt;
    for (size_t rf6__Vidx = 0; rf6__Vidx < 1; ++rf6__Vidx) rf6__Vcvt = rf6;
    int rf7__Vcvt;
    for (size_t rf7__Vidx = 0; rf7__Vidx < 1; ++rf7__Vidx) rf7__Vcvt = rf7;
    int rf8__Vcvt;
    for (size_t rf8__Vidx = 0; rf8__Vidx < 1; ++rf8__Vidx) rf8__Vcvt = rf8;
    int rf9__Vcvt;
    for (size_t rf9__Vidx = 0; rf9__Vidx < 1; ++rf9__Vidx) rf9__Vcvt = rf9;
    int rf10__Vcvt;
    for (size_t rf10__Vidx = 0; rf10__Vidx < 1; ++rf10__Vidx) rf10__Vcvt = rf10;
    int rf11__Vcvt;
    for (size_t rf11__Vidx = 0; rf11__Vidx < 1; ++rf11__Vidx) rf11__Vcvt = rf11;
    int rf12__Vcvt;
    for (size_t rf12__Vidx = 0; rf12__Vidx < 1; ++rf12__Vidx) rf12__Vcvt = rf12;
    int rf13__Vcvt;
    for (size_t rf13__Vidx = 0; rf13__Vidx < 1; ++rf13__Vidx) rf13__Vcvt = rf13;
    int rf14__Vcvt;
    for (size_t rf14__Vidx = 0; rf14__Vidx < 1; ++rf14__Vidx) rf14__Vcvt = rf14;
    int rf15__Vcvt;
    for (size_t rf15__Vidx = 0; rf15__Vidx < 1; ++rf15__Vidx) rf15__Vcvt = rf15;
    int rf16__Vcvt;
    for (size_t rf16__Vidx = 0; rf16__Vidx < 1; ++rf16__Vidx) rf16__Vcvt = rf16;
    int rf17__Vcvt;
    for (size_t rf17__Vidx = 0; rf17__Vidx < 1; ++rf17__Vidx) rf17__Vcvt = rf17;
    int rf18__Vcvt;
    for (size_t rf18__Vidx = 0; rf18__Vidx < 1; ++rf18__Vidx) rf18__Vcvt = rf18;
    int rf19__Vcvt;
    for (size_t rf19__Vidx = 0; rf19__Vidx < 1; ++rf19__Vidx) rf19__Vcvt = rf19;
    int rf20__Vcvt;
    for (size_t rf20__Vidx = 0; rf20__Vidx < 1; ++rf20__Vidx) rf20__Vcvt = rf20;
    int rf21__Vcvt;
    for (size_t rf21__Vidx = 0; rf21__Vidx < 1; ++rf21__Vidx) rf21__Vcvt = rf21;
    int rf22__Vcvt;
    for (size_t rf22__Vidx = 0; rf22__Vidx < 1; ++rf22__Vidx) rf22__Vcvt = rf22;
    int rf23__Vcvt;
    for (size_t rf23__Vidx = 0; rf23__Vidx < 1; ++rf23__Vidx) rf23__Vcvt = rf23;
    int rf24__Vcvt;
    for (size_t rf24__Vidx = 0; rf24__Vidx < 1; ++rf24__Vidx) rf24__Vcvt = rf24;
    int rf25__Vcvt;
    for (size_t rf25__Vidx = 0; rf25__Vidx < 1; ++rf25__Vidx) rf25__Vcvt = rf25;
    int rf26__Vcvt;
    for (size_t rf26__Vidx = 0; rf26__Vidx < 1; ++rf26__Vidx) rf26__Vcvt = rf26;
    int rf27__Vcvt;
    for (size_t rf27__Vidx = 0; rf27__Vidx < 1; ++rf27__Vidx) rf27__Vcvt = rf27;
    int rf28__Vcvt;
    for (size_t rf28__Vidx = 0; rf28__Vidx < 1; ++rf28__Vidx) rf28__Vcvt = rf28;
    int rf29__Vcvt;
    for (size_t rf29__Vidx = 0; rf29__Vidx < 1; ++rf29__Vidx) rf29__Vcvt = rf29;
    int rf30__Vcvt;
    for (size_t rf30__Vidx = 0; rf30__Vidx < 1; ++rf30__Vidx) rf30__Vcvt = rf30;
    int rf31__Vcvt;
    for (size_t rf31__Vidx = 0; rf31__Vidx < 1; ++rf31__Vidx) rf31__Vcvt = rf31;
    display_ref(rf0__Vcvt, rf1__Vcvt, rf2__Vcvt, rf3__Vcvt, rf4__Vcvt, rf5__Vcvt, rf6__Vcvt, rf7__Vcvt, rf8__Vcvt, rf9__Vcvt, rf10__Vcvt, rf11__Vcvt, rf12__Vcvt, rf13__Vcvt, rf14__Vcvt, rf15__Vcvt, rf16__Vcvt, rf17__Vcvt, rf18__Vcvt, rf19__Vcvt, rf20__Vcvt, rf21__Vcvt, rf22__Vcvt, rf23__Vcvt, rf24__Vcvt, rf25__Vcvt, rf26__Vcvt, rf27__Vcvt, rf28__Vcvt, rf29__Vcvt, rf30__Vcvt, rf31__Vcvt);
}
