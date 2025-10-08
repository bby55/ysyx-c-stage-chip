// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VLSFR__Syms.h"


VL_ATTR_COLD void VLSFR___024root__trace_init_sub__TOP__0(VLSFR___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VLSFR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSFR___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+3,"seal", false,-1);
    tracep->declBus(c+4,"q", false,-1, 7,0);
    tracep->declBus(c+5,"h1", false,-1, 6,0);
    tracep->declBus(c+6,"h0", false,-1, 6,0);
    tracep->declBus(c+7,"h2", false,-1, 6,0);
    tracep->declBus(c+8,"h3", false,-1, 6,0);
    tracep->declBus(c+9,"h4", false,-1, 6,0);
    tracep->declBus(c+10,"h5", false,-1, 6,0);
    tracep->declBus(c+11,"h6", false,-1, 6,0);
    tracep->declBus(c+12,"h7", false,-1, 6,0);
    tracep->pushNamePrefix("LSFR ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+3,"seal", false,-1);
    tracep->declBus(c+4,"q", false,-1, 7,0);
    tracep->declBus(c+5,"h1", false,-1, 6,0);
    tracep->declBus(c+6,"h0", false,-1, 6,0);
    tracep->declBus(c+7,"h2", false,-1, 6,0);
    tracep->declBus(c+8,"h3", false,-1, 6,0);
    tracep->declBus(c+9,"h4", false,-1, 6,0);
    tracep->declBus(c+10,"h5", false,-1, 6,0);
    tracep->declBus(c+11,"h6", false,-1, 6,0);
    tracep->declBus(c+12,"h7", false,-1, 6,0);
    tracep->declBit(c+13,"feedback", false,-1);
    tracep->pushNamePrefix("seg0 ");
    tracep->declBus(c+14,"b", false,-1, 3,0);
    tracep->declBus(c+6,"h", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seg1 ");
    tracep->declBus(c+15,"b", false,-1, 3,0);
    tracep->declBus(c+5,"h", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seg2 ");
    tracep->declBus(c+16,"b", false,-1, 3,0);
    tracep->declBus(c+7,"h", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seg3 ");
    tracep->declBus(c+17,"b", false,-1, 3,0);
    tracep->declBus(c+8,"h", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seg4 ");
    tracep->declBus(c+18,"b", false,-1, 3,0);
    tracep->declBus(c+9,"h", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seg5 ");
    tracep->declBus(c+19,"b", false,-1, 3,0);
    tracep->declBus(c+10,"h", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seg6 ");
    tracep->declBus(c+20,"b", false,-1, 3,0);
    tracep->declBus(c+11,"h", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seg7 ");
    tracep->declBus(c+21,"b", false,-1, 3,0);
    tracep->declBus(c+12,"h", false,-1, 6,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VLSFR___024root__trace_init_top(VLSFR___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VLSFR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSFR___024root__trace_init_top\n"); );
    // Body
    VLSFR___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VLSFR___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VLSFR___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VLSFR___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VLSFR___024root__trace_register(VLSFR___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VLSFR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSFR___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VLSFR___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VLSFR___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VLSFR___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VLSFR___024root__trace_full_sub_0(VLSFR___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VLSFR___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSFR___024root__trace_full_top_0\n"); );
    // Init
    VLSFR___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VLSFR___024root*>(voidSelf);
    VLSFR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VLSFR___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VLSFR___024root__trace_full_sub_0(VLSFR___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VLSFR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLSFR___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->reset));
    bufp->fullBit(oldp+3,(vlSelf->seal));
    bufp->fullCData(oldp+4,(vlSelf->q),8);
    bufp->fullCData(oldp+5,(vlSelf->h1),7);
    bufp->fullCData(oldp+6,(vlSelf->h0),7);
    bufp->fullCData(oldp+7,(vlSelf->h2),7);
    bufp->fullCData(oldp+8,(vlSelf->h3),7);
    bufp->fullCData(oldp+9,(vlSelf->h4),7);
    bufp->fullCData(oldp+10,(vlSelf->h5),7);
    bufp->fullCData(oldp+11,(vlSelf->h6),7);
    bufp->fullCData(oldp+12,(vlSelf->h7),7);
    bufp->fullBit(oldp+13,(vlSelf->LSFR__DOT__feedback));
    bufp->fullCData(oldp+14,((1U & (IData)(vlSelf->q))),4);
    bufp->fullCData(oldp+15,((1U & ((IData)(vlSelf->q) 
                                    >> 1U))),4);
    bufp->fullCData(oldp+16,((1U & ((IData)(vlSelf->q) 
                                    >> 2U))),4);
    bufp->fullCData(oldp+17,((1U & ((IData)(vlSelf->q) 
                                    >> 3U))),4);
    bufp->fullCData(oldp+18,((1U & ((IData)(vlSelf->q) 
                                    >> 4U))),4);
    bufp->fullCData(oldp+19,((1U & ((IData)(vlSelf->q) 
                                    >> 5U))),4);
    bufp->fullCData(oldp+20,((1U & ((IData)(vlSelf->q) 
                                    >> 6U))),4);
    bufp->fullCData(oldp+21,((1U & ((IData)(vlSelf->q) 
                                    >> 7U))),4);
}
