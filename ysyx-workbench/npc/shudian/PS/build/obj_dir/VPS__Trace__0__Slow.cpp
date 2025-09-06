// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPS__Syms.h"


VL_ATTR_COLD void VPS___024root__trace_init_sub__TOP__0(VPS___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+12,"clk", false,-1);
    tracep->declBit(c+13,"rst", false,-1);
    tracep->declBit(c+14,"ps2_clk", false,-1);
    tracep->declBit(c+15,"ps2_data", false,-1);
    tracep->declBus(c+16,"num", false,-1, 7,0);
    tracep->declBus(c+17,"cur_key", false,-1, 9,0);
    tracep->declBus(c+18,"ascii", false,-1, 7,0);
    tracep->declBus(c+19,"h0", false,-1, 6,0);
    tracep->declBus(c+20,"h1", false,-1, 6,0);
    tracep->declBus(c+21,"h2", false,-1, 6,0);
    tracep->declBus(c+22,"h3", false,-1, 6,0);
    tracep->declBus(c+23,"h4", false,-1, 6,0);
    tracep->declBus(c+24,"h5", false,-1, 6,0);
    tracep->pushNamePrefix("PS ");
    tracep->declBit(c+12,"clk", false,-1);
    tracep->declBit(c+13,"rst", false,-1);
    tracep->declBit(c+14,"ps2_clk", false,-1);
    tracep->declBit(c+15,"ps2_data", false,-1);
    tracep->declBus(c+16,"num", false,-1, 7,0);
    tracep->declBus(c+17,"cur_key", false,-1, 9,0);
    tracep->declBus(c+18,"ascii", false,-1, 7,0);
    tracep->declBus(c+19,"h0", false,-1, 6,0);
    tracep->declBus(c+20,"h1", false,-1, 6,0);
    tracep->declBus(c+21,"h2", false,-1, 6,0);
    tracep->declBus(c+22,"h3", false,-1, 6,0);
    tracep->declBus(c+23,"h4", false,-1, 6,0);
    tracep->declBus(c+24,"h5", false,-1, 6,0);
    tracep->declBus(c+1,"hh0", false,-1, 6,0);
    tracep->declBus(c+2,"hh1", false,-1, 6,0);
    tracep->declBus(c+3,"hh2", false,-1, 6,0);
    tracep->declBus(c+4,"hh3", false,-1, 6,0);
    tracep->declBus(c+5,"count", false,-1, 3,0);
    tracep->declBit(c+6,"update", false,-1);
    tracep->pushNamePrefix("MY_PS ");
    tracep->declBit(c+12,"clk", false,-1);
    tracep->declBit(c+13,"resetn", false,-1);
    tracep->declBit(c+14,"ps2_clk", false,-1);
    tracep->declBit(c+15,"ps2_data", false,-1);
    tracep->declBus(c+17,"cur_key", false,-1, 9,0);
    tracep->declBus(c+5,"count", false,-1, 3,0);
    tracep->declBus(c+16,"num", false,-1, 7,0);
    tracep->declBit(c+6,"update", false,-1);
    tracep->declBus(c+7,"buffer", false,-1, 9,0);
    tracep->declBus(c+8,"ps2_clk_sync", false,-1, 2,0);
    tracep->declBus(c+9,"seal", false,-1, 1,0);
    tracep->declBus(c+25,"state", false,-1, 1,0);
    tracep->declBus(c+10,"next_state", false,-1, 1,0);
    tracep->declBus(c+33,"A", false,-1, 1,0);
    tracep->declBus(c+34,"B", false,-1, 1,0);
    tracep->declBus(c+35,"C", false,-1, 1,0);
    tracep->declBit(c+11,"sampling", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rom1 ");
    tracep->declBus(c+26,"key_code", false,-1, 7,0);
    tracep->declBus(c+18,"ascii_code", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seg0 ");
    tracep->declBus(c+27,"b", false,-1, 3,0);
    tracep->declBus(c+1,"h", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seg1 ");
    tracep->declBus(c+28,"b", false,-1, 3,0);
    tracep->declBus(c+2,"h", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seg2 ");
    tracep->declBus(c+29,"b", false,-1, 3,0);
    tracep->declBus(c+3,"h", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seg3 ");
    tracep->declBus(c+30,"b", false,-1, 3,0);
    tracep->declBus(c+4,"h", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seg4 ");
    tracep->declBus(c+31,"b", false,-1, 3,0);
    tracep->declBus(c+23,"h", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("seg5 ");
    tracep->declBus(c+32,"b", false,-1, 3,0);
    tracep->declBus(c+24,"h", false,-1, 6,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VPS___024root__trace_init_top(VPS___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS___024root__trace_init_top\n"); );
    // Body
    VPS___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VPS___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPS___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPS___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VPS___024root__trace_register(VPS___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VPS___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VPS___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VPS___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VPS___024root__trace_full_sub_0(VPS___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VPS___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS___024root__trace_full_top_0\n"); );
    // Init
    VPS___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPS___024root*>(voidSelf);
    VPS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPS___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VPS___024root__trace_full_sub_0(VPS___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPS___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->PS__DOT__hh0),7);
    bufp->fullCData(oldp+2,(vlSelf->PS__DOT__hh1),7);
    bufp->fullCData(oldp+3,(vlSelf->PS__DOT__hh2),7);
    bufp->fullCData(oldp+4,(vlSelf->PS__DOT__hh3),7);
    bufp->fullCData(oldp+5,(vlSelf->PS__DOT__count),4);
    bufp->fullBit(oldp+6,(vlSelf->PS__DOT__update));
    bufp->fullSData(oldp+7,(vlSelf->PS__DOT__MY_PS__DOT__buffer),10);
    bufp->fullCData(oldp+8,(vlSelf->PS__DOT__MY_PS__DOT__ps2_clk_sync),3);
    bufp->fullCData(oldp+9,(vlSelf->PS__DOT__MY_PS__DOT__seal),2);
    bufp->fullCData(oldp+10,(vlSelf->PS__DOT__MY_PS__DOT__next_state),2);
    bufp->fullBit(oldp+11,((IData)((4U == (6U & (IData)(vlSelf->PS__DOT__MY_PS__DOT__ps2_clk_sync))))));
    bufp->fullBit(oldp+12,(vlSelf->clk));
    bufp->fullBit(oldp+13,(vlSelf->rst));
    bufp->fullBit(oldp+14,(vlSelf->ps2_clk));
    bufp->fullBit(oldp+15,(vlSelf->ps2_data));
    bufp->fullCData(oldp+16,(vlSelf->num),8);
    bufp->fullSData(oldp+17,(vlSelf->cur_key),10);
    bufp->fullCData(oldp+18,(vlSelf->ascii),8);
    bufp->fullCData(oldp+19,(vlSelf->h0),7);
    bufp->fullCData(oldp+20,(vlSelf->h1),7);
    bufp->fullCData(oldp+21,(vlSelf->h2),7);
    bufp->fullCData(oldp+22,(vlSelf->h3),7);
    bufp->fullCData(oldp+23,(vlSelf->h4),7);
    bufp->fullCData(oldp+24,(vlSelf->h5),7);
    bufp->fullCData(oldp+25,(vlSelf->PS__DOT__MY_PS__DOT__state),2);
    bufp->fullCData(oldp+26,((0xffU & ((IData)(vlSelf->cur_key) 
                                       >> 1U))),8);
    bufp->fullCData(oldp+27,((0xfU & ((IData)(vlSelf->cur_key) 
                                      >> 1U))),4);
    bufp->fullCData(oldp+28,((0xfU & ((IData)(vlSelf->cur_key) 
                                      >> 5U))),4);
    bufp->fullCData(oldp+29,((0xfU & (IData)(vlSelf->ascii))),4);
    bufp->fullCData(oldp+30,((0xfU & ((IData)(vlSelf->ascii) 
                                      >> 4U))),4);
    bufp->fullCData(oldp+31,((0xfU & (IData)(vlSelf->num))),4);
    bufp->fullCData(oldp+32,((0xfU & ((IData)(vlSelf->num) 
                                      >> 4U))),4);
    bufp->fullCData(oldp+33,(0U),2);
    bufp->fullCData(oldp+34,(1U),2);
    bufp->fullCData(oldp+35,(2U),2);
}
