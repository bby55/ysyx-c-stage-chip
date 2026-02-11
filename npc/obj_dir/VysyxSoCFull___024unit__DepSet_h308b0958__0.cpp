// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024unit.h"

extern "C" void ebreak(int a0_val, int exit_pc);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_ebreak_TOP____024unit(IData/*31:0*/ a0_val, IData/*31:0*/ exit_pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_ebreak_TOP____024unit\n"); );
    // Body
    int a0_val__Vcvt;
    for (size_t a0_val__Vidx = 0; a0_val__Vidx < 1; ++a0_val__Vidx) a0_val__Vcvt = a0_val;
    int exit_pc__Vcvt;
    for (size_t exit_pc__Vidx = 0; exit_pc__Vidx < 1; ++exit_pc__Vidx) exit_pc__Vcvt = exit_pc;
    ebreak(a0_val__Vcvt, exit_pc__Vcvt);
}

extern "C" void display_ref(int rf0, int rf1, int rf2, int rf3, int rf4, int rf5, int rf6, int rf7, int rf8, int rf9, int rf10, int rf11, int rf12, int rf13, int rf14, int rf15);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_display_ref_TOP____024unit(IData/*31:0*/ rf0, IData/*31:0*/ rf1, IData/*31:0*/ rf2, IData/*31:0*/ rf3, IData/*31:0*/ rf4, IData/*31:0*/ rf5, IData/*31:0*/ rf6, IData/*31:0*/ rf7, IData/*31:0*/ rf8, IData/*31:0*/ rf9, IData/*31:0*/ rf10, IData/*31:0*/ rf11, IData/*31:0*/ rf12, IData/*31:0*/ rf13, IData/*31:0*/ rf14, IData/*31:0*/ rf15) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_display_ref_TOP____024unit\n"); );
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
    display_ref(rf0__Vcvt, rf1__Vcvt, rf2__Vcvt, rf3__Vcvt, rf4__Vcvt, rf5__Vcvt, rf6__Vcvt, rf7__Vcvt, rf8__Vcvt, rf9__Vcvt, rf10__Vcvt, rf11__Vcvt, rf12__Vcvt, rf13__Vcvt, rf14__Vcvt, rf15__Vcvt);
}

extern "C" int pmem_read(int raddr, int valid);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddr, IData/*31:0*/ valid, IData/*31:0*/ &pmem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_pmem_read_TOP____024unit\n"); );
    // Body
    int raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    int valid__Vcvt;
    for (size_t valid__Vidx = 0; valid__Vidx < 1; ++valid__Vidx) valid__Vcvt = valid;
    int pmem_read__Vfuncrtn__Vcvt;
    pmem_read__Vfuncrtn__Vcvt = pmem_read(raddr__Vcvt, valid__Vcvt);
    pmem_read__Vfuncrtn = pmem_read__Vfuncrtn__Vcvt;
}

extern "C" void pmem_write(int waddr, int wdata, char wmask, int pc);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask, IData/*31:0*/ pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_pmem_write_TOP____024unit\n"); );
    // Body
    int waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    int wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt, pc__Vcvt);
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
