// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPS.h for the primary calling header

#ifndef VERILATED_VPS___024ROOT_H_
#define VERILATED_VPS___024ROOT_H_  // guard

#include "verilated.h"

class VPS__Syms;

class VPS___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(ps2_clk,0,0);
    VL_IN8(ps2_data,0,0);
    VL_OUT8(num,7,0);
    VL_OUT8(ascii,7,0);
    VL_OUT8(h0,6,0);
    VL_OUT8(h1,6,0);
    VL_OUT8(h2,6,0);
    VL_OUT8(h3,6,0);
    VL_OUT8(h4,6,0);
    VL_OUT8(h5,6,0);
    CData/*3:0*/ PS__DOT__count;
    CData/*0:0*/ PS__DOT__update;
    CData/*2:0*/ PS__DOT__MY_PS__DOT__ps2_clk_sync;
    CData/*0:0*/ PS__DOT__MY_PS__DOT____Vstrobe0;
    CData/*0:0*/ PS__DOT__MY_PS__DOT____Vstrobe1;
    CData/*0:0*/ PS__DOT__MY_PS__DOT____Vstrobe2;
    CData/*0:0*/ PS__DOT__MY_PS__DOT____Vlvbound_he42a8c0b__0;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(cur_key,9,0);
    SData/*9:0*/ PS__DOT__MY_PS__DOT__buffer;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VPS__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPS___024root(VPS__Syms* symsp, const char* v__name);
    ~VPS___024root();
    VL_UNCOPYABLE(VPS___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
