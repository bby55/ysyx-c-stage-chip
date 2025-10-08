// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcoder__Syms.h"


VL_ATTR_COLD void Vcoder___024root__trace_init_sub__TOP__0(Vcoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoder___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"in", false,-1, 7,0);
    tracep->declBus(c+2,"en", false,-1, 0,0);
    tracep->declBus(c+3,"h", false,-1, 6,0);
    tracep->declBus(c+4,"seal", false,-1, 0,0);
    tracep->declBus(c+5,"h1", false,-1, 6,0);
    tracep->declBus(c+6,"h0", false,-1, 6,0);
    tracep->declBus(c+7,"h2", false,-1, 6,0);
    tracep->declBus(c+8,"h3", false,-1, 6,0);
    tracep->declBus(c+9,"out", false,-1, 2,0);
    tracep->pushNamePrefix("coder ");
    tracep->declBus(c+1,"in", false,-1, 7,0);
    tracep->declBus(c+2,"en", false,-1, 0,0);
    tracep->declBus(c+3,"h", false,-1, 6,0);
    tracep->declBus(c+4,"seal", false,-1, 0,0);
    tracep->declBus(c+5,"h1", false,-1, 6,0);
    tracep->declBus(c+6,"h0", false,-1, 6,0);
    tracep->declBus(c+7,"h2", false,-1, 6,0);
    tracep->declBus(c+8,"h3", false,-1, 6,0);
    tracep->declBus(c+9,"out", false,-1, 2,0);
    tracep->declBus(c+10,"i", false,-1, 31,0);
    tracep->declBus(c+11,"temp", false,-1, 3,0);
    tracep->pushNamePrefix("seg0 ");
    tracep->declBus(c+12,"b", false,-1, 3,0);
    tracep->declBus(c+6,"h", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seg1 ");
    tracep->declBus(c+13,"b", false,-1, 3,0);
    tracep->declBus(c+5,"h", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seg2 ");
    tracep->declBus(c+14,"b", false,-1, 3,0);
    tracep->declBus(c+7,"h", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seg3 ");
    tracep->declBus(c+15,"b", false,-1, 3,0);
    tracep->declBus(c+8,"h", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seg4 ");
    tracep->declBus(c+11,"b", false,-1, 3,0);
    tracep->declBus(c+3,"h", false,-1, 6,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vcoder___024root__trace_init_top(Vcoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoder___024root__trace_init_top\n"); );
    // Body
    Vcoder___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcoder___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcoder___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcoder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcoder___024root__trace_register(Vcoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoder___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcoder___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcoder___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcoder___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcoder___024root__trace_full_sub_0(Vcoder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcoder___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoder___024root__trace_full_top_0\n"); );
    // Init
    Vcoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcoder___024root*>(voidSelf);
    Vcoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcoder___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcoder___024root__trace_full_sub_0(Vcoder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoder___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->in),8);
    bufp->fullBit(oldp+2,(vlSelf->en));
    bufp->fullCData(oldp+3,(vlSelf->h),7);
    bufp->fullBit(oldp+4,(vlSelf->seal));
    bufp->fullCData(oldp+5,(vlSelf->h1),7);
    bufp->fullCData(oldp+6,(vlSelf->h0),7);
    bufp->fullCData(oldp+7,(vlSelf->h2),7);
    bufp->fullCData(oldp+8,(vlSelf->h3),7);
    bufp->fullCData(oldp+9,(vlSelf->out),3);
    bufp->fullIData(oldp+10,(vlSelf->coder__DOT__i),32);
    bufp->fullCData(oldp+11,(vlSelf->coder__DOT__temp),4);
    bufp->fullCData(oldp+12,((1U & (IData)(vlSelf->out))),4);
    bufp->fullCData(oldp+13,((1U & ((IData)(vlSelf->out) 
                                    >> 1U))),4);
    bufp->fullCData(oldp+14,((1U & ((IData)(vlSelf->out) 
                                    >> 2U))),4);
    bufp->fullCData(oldp+15,(vlSelf->seal),4);
}
