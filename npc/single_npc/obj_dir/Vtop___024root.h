// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;
class Vtop___024unit;


class Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        CData/*0:0*/ top__DOT__wen;
        CData/*0:0*/ top__DOT__valid;
        CData/*0:0*/ top__DOT__wen_ram;
        CData/*0:0*/ top__DOT__is_lui;
        CData/*0:0*/ top__DOT____VdfgTmp_hb37fddff__0;
        CData/*1:0*/ top__DOT____VdfgTmp_ha2850746__0;
        CData/*0:0*/ top__DOT____VdfgTmp_h42b8e437__0;
        CData/*0:0*/ top__DOT__i4__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__i4__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__i5__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__i5__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__i0__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__i6__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__i7__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__i8__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__i1__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__i2__DOT__i0__DOT__lut_out;
        CData/*0:0*/ top__DOT__i2__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__i9__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__i10__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__i3__DOT__i0__DOT__hit;
        CData/*1:0*/ top__DOT__u_alu__DOT__byte_idx;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ top__DOT__instr_type;
        SData/*11:0*/ top__DOT__B_imm;
        SData/*11:0*/ top__DOT__S_imm;
        SData/*11:0*/ top__DOT__csr;
        SData/*9:0*/ top__DOT__opcode_funct3;
        SData/*11:0*/ top__DOT__instr_type_tmp;
        SData/*11:0*/ top__DOT__instr_type_nofunct;
        SData/*11:0*/ top__DOT__instr_type_funct7;
        SData/*11:0*/ top__DOT__instr_type_csr;
        SData/*11:0*/ top__DOT__i0__DOT__i0__DOT__lut_out;
        SData/*11:0*/ top__DOT__i6__DOT__i0__DOT__lut_out;
        SData/*11:0*/ top__DOT__i7__DOT__i0__DOT__lut_out;
        SData/*11:0*/ top__DOT__i8__DOT__i0__DOT__lut_out;
        SData/*11:0*/ top__DOT__i9__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__pc;
        IData/*31:0*/ top__DOT__pc_next;
        IData/*31:0*/ top__DOT__instr;
        IData/*31:0*/ top__DOT__imm;
        IData/*19:0*/ top__DOT__J_imm;
        IData/*31:0*/ top__DOT__I_ex;
        IData/*31:0*/ top__DOT__S_ex;
        IData/*31:0*/ top__DOT__J_ex;
        IData/*31:0*/ top__DOT__B_ex;
        IData/*31:0*/ top__DOT__imm_ex;
        IData/*31:0*/ top__DOT__rs1_data;
        IData/*31:0*/ top__DOT__rs2_data;
        IData/*31:0*/ top__DOT__rd_data;
        IData/*31:0*/ top__DOT__t;
        IData/*16:0*/ top__DOT__opcode_funct3_funct7;
        IData/*31:0*/ top__DOT__csr_val;
        IData/*31:0*/ top__DOT__rdata;
        VlWide<55>/*1759:0*/ top__DOT____Vcellinp__i1____pinNumber4;
        IData/*31:0*/ top__DOT____VdfgTmp_h2f2dbb37__0;
        IData/*31:0*/ top__DOT____VdfgTmp_h8a6dd3c2__0;
        IData/*31:0*/ top__DOT__i1__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__i10__DOT__i0__DOT__lut_out;
    };
    struct {
        IData/*31:0*/ top__DOT__i3__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__u_regfile__DOT__mcause;
        IData/*31:0*/ top__DOT__u_regfile__DOT__mepc;
        IData/*31:0*/ top__DOT__u_regfile__DOT__mstatus;
        IData/*31:0*/ top__DOT__u_regfile__DOT__mtvec;
        IData/*31:0*/ top__DOT__u_regfile__DOT__mcycle;
        IData/*31:0*/ top__DOT__u_regfile__DOT__mcycleh;
        IData/*31:0*/ top__DOT__u_regfile__DOT__mvendorid;
        IData/*31:0*/ top__DOT__u_regfile__DOT__marchid;
        IData/*31:0*/ top__DOT__u_regfile__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ __Vfunc_rom_read__1__Vfuncout;
        IData/*31:0*/ __Vfunc_top__DOT__pmem_read__2__Vfuncout;
        IData/*31:0*/ __Vtrigrprev__TOP__top__DOT__rdata;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<SData/*12:0*/, 8> top__DOT__i4__DOT__i0__DOT__pair_list;
        VlUnpacked<SData/*11:0*/, 8> top__DOT__i4__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 8> top__DOT__i4__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*12:0*/, 3> top__DOT__i5__DOT__i0__DOT__pair_list;
        VlUnpacked<SData/*11:0*/, 3> top__DOT__i5__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 3> top__DOT__i5__DOT__i0__DOT__data_list;
        VlUnpacked<IData/*21:0*/, 24> top__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<SData/*9:0*/, 24> top__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<SData/*11:0*/, 24> top__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<IData/*18:0*/, 3> top__DOT__i6__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 3> top__DOT__i6__DOT__i0__DOT__key_list;
        VlUnpacked<SData/*11:0*/, 3> top__DOT__i6__DOT__i0__DOT__data_list;
        VlUnpacked<IData/*28:0*/, 11> top__DOT__i7__DOT__i0__DOT__pair_list;
        VlUnpacked<IData/*16:0*/, 11> top__DOT__i7__DOT__i0__DOT__key_list;
        VlUnpacked<SData/*11:0*/, 11> top__DOT__i7__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*43:0*/, 2> top__DOT__i8__DOT__i0__DOT__pair_list;
        VlUnpacked<IData/*31:0*/, 2> top__DOT__i8__DOT__i0__DOT__key_list;
        VlUnpacked<SData/*11:0*/, 2> top__DOT__i8__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*11:0*/, 40> top__DOT__i1__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 40> top__DOT__i1__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*12:0*/, 11> top__DOT__i2__DOT__i0__DOT__pair_list;
        VlUnpacked<SData/*11:0*/, 11> top__DOT__i2__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 11> top__DOT__i2__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*43:0*/, 4> top__DOT__i9__DOT__i0__DOT__pair_list;
        VlUnpacked<IData/*31:0*/, 4> top__DOT__i9__DOT__i0__DOT__key_list;
        VlUnpacked<SData/*11:0*/, 4> top__DOT__i9__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*43:0*/, 4> top__DOT__i10__DOT__i0__DOT__pair_list;
        VlUnpacked<SData/*11:0*/, 4> top__DOT__i10__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 4> top__DOT__i10__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*43:0*/, 10> top__DOT__i3__DOT__i0__DOT__pair_list;
        VlUnpacked<SData/*11:0*/, 10> top__DOT__i3__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 10> top__DOT__i3__DOT__i0__DOT__data_list;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__u_regfile__DOT__rf;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
