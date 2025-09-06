// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VLSFR.h for the primary calling header

#ifndef VERILATED_VLSFR___024ROOT_H_
#define VERILATED_VLSFR___024ROOT_H_  // guard

#include "verilated.h"

class VLSFR__Syms;

class VLSFR___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(seal,0,0);
    VL_OUT8(q,7,0);
    VL_OUT8(h1,6,0);
    VL_OUT8(h0,6,0);
    VL_OUT8(h2,6,0);
    VL_OUT8(h3,6,0);
    VL_OUT8(h4,6,0);
    VL_OUT8(h5,6,0);
    VL_OUT8(h6,6,0);
    VL_OUT8(h7,6,0);
    CData/*0:0*/ LSFR__DOT__feedback;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VLSFR__Syms* const vlSymsp;

    // CONSTRUCTORS
    VLSFR___024root(VLSFR__Syms* symsp, const char* v__name);
    ~VLSFR___024root();
    VL_UNCOPYABLE(VLSFR___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
