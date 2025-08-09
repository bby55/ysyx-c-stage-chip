// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
    vlSelf->__VstlTriggered.at(1U) = (vlSelf->top__DOT__rdata 
                                      != vlSelf->__Vtrigrprev__TOP__top__DOT__rdata);
    vlSelf->__Vtrigrprev__TOP__top__DOT__rdata = vlSelf->top__DOT__rdata;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.at(1U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

void Vtop___024unit____Vdpiimwrap_display_ref_TOP____024unit(IData/*31:0*/ rf0, IData/*31:0*/ rf1, IData/*31:0*/ rf2, IData/*31:0*/ rf3, IData/*31:0*/ rf4, IData/*31:0*/ rf5, IData/*31:0*/ rf6, IData/*31:0*/ rf7, IData/*31:0*/ rf8, IData/*31:0*/ rf9, IData/*31:0*/ rf10, IData/*31:0*/ rf11, IData/*31:0*/ rf12, IData/*31:0*/ rf13, IData/*31:0*/ rf14, IData/*31:0*/ rf15, IData/*31:0*/ rf16, IData/*31:0*/ rf17, IData/*31:0*/ rf18, IData/*31:0*/ rf19, IData/*31:0*/ rf20, IData/*31:0*/ rf21, IData/*31:0*/ rf22, IData/*31:0*/ rf23, IData/*31:0*/ rf24, IData/*31:0*/ rf25, IData/*31:0*/ rf26, IData/*31:0*/ rf27, IData/*31:0*/ rf28, IData/*31:0*/ rf29, IData/*31:0*/ rf30, IData/*31:0*/ rf31);
void Vtop___024unit____Vdpiimwrap_rom_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &rom_read__Vfuncrtn);

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    Vtop___024unit____Vdpiimwrap_display_ref_TOP____024unit(
                                                            vlSelf->top__DOT__u_regfile__DOT__rf
                                                            [0U], 
                                                            vlSelf->top__DOT__u_regfile__DOT__rf
                                                            [1U], 
                                                            vlSelf->top__DOT__u_regfile__DOT__rf
                                                            [2U], 
                                                            vlSelf->top__DOT__u_regfile__DOT__rf
                                                            [3U], 
                                                            vlSelf->top__DOT__u_regfile__DOT__rf
                                                            [4U], 
                                                            vlSelf->top__DOT__u_regfile__DOT__rf
                                                            [5U], 
                                                            vlSelf->top__DOT__u_regfile__DOT__rf
                                                            [6U], 
                                                            vlSelf->top__DOT__u_regfile__DOT__rf
                                                            [7U], 
                                                            vlSelf->top__DOT__u_regfile__DOT__rf
                                                            [8U], 
                                                            vlSelf->top__DOT__u_regfile__DOT__rf
                                                            [9U], 
                                                            vlSelf->top__DOT__u_regfile__DOT__rf
                                                            [0xaU], 
                                                            vlSelf->top__DOT__u_regfile__DOT__rf
                                                            [0xbU], 
                                                            vlSelf->top__DOT__u_regfile__DOT__rf
                                                            [0xcU], 
                                                            vlSelf->top__DOT__u_regfile__DOT__rf
                                                            [0xdU], 
                                                            vlSelf->top__DOT__u_regfile__DOT__rf
                                                            [0xeU], 
                                                            vlSelf->top__DOT__u_regfile__DOT__rf
                                                            [0xfU], 
                                                            vlSelf->top__DOT__u_regfile__DOT__rf
                                                            [0x10U], 
                                                            vlSelf->top__DOT__u_regfile__DOT__rf
                                                            [0x11U], 
                                                            vlSelf->top__DOT__u_regfile__DOT__rf
                                                            [0x12U], 
                                                            vlSelf->top__DOT__u_regfile__DOT__rf
                                                            [0x13U], 
                                                            vlSelf->top__DOT__u_regfile__DOT__rf
                                                            [0x14U], 
                                                            vlSelf->top__DOT__u_regfile__DOT__rf
                                                            [0x15U], 
                                                            vlSelf->top__DOT__u_regfile__DOT__rf
                                                            [0x16U], 
                                                            vlSelf->top__DOT__u_regfile__DOT__rf
                                                            [0x17U], 
                                                            vlSelf->top__DOT__u_regfile__DOT__rf
                                                            [0x18U], 
                                                            vlSelf->top__DOT__u_regfile__DOT__rf
                                                            [0x19U], 
                                                            vlSelf->top__DOT__u_regfile__DOT__rf
                                                            [0x1aU], 
                                                            vlSelf->top__DOT__u_regfile__DOT__rf
                                                            [0x1bU], 
                                                            vlSelf->top__DOT__u_regfile__DOT__rf
                                                            [0x1cU], 
                                                            vlSelf->top__DOT__u_regfile__DOT__rf
                                                            [0x1dU], 
                                                            vlSelf->top__DOT__u_regfile__DOT__rf
                                                            [0x1eU], 
                                                            vlSelf->top__DOT__u_regfile__DOT__rf
                                                            [0x1fU]);
    Vtop___024unit____Vdpiimwrap_rom_read_TOP____024unit(
                                                         (((0x80000000U 
                                                            > vlSelf->top__DOT__pc)
                                                            ? 
                                                           (vlSelf->top__DOT__pc 
                                                            >> 2U)
                                                            : 
                                                           ((vlSelf->top__DOT__pc 
                                                             - (IData)(0x80000000U)) 
                                                            >> 2U)) 
                                                          << 2U), vlSelf->__Vfunc_rom_read__1__Vfuncout);
    vlSelf->top__DOT__instr = vlSelf->__Vfunc_rom_read__1__Vfuncout;
    vlSelf->top__DOT__I_ex = (((- (IData)((vlSelf->top__DOT__instr 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->top__DOT__instr 
                                           >> 0x14U));
    vlSelf->top__DOT__rs2_data = ((0U == (0x1fU & (vlSelf->top__DOT__instr 
                                                   >> 0x14U)))
                                   ? 0U : vlSelf->top__DOT__u_regfile__DOT__rf
                                  [(0x1fU & (vlSelf->top__DOT__instr 
                                             >> 0x14U))]);
    vlSelf->top__DOT__rs1_data = ((0U == (0x1fU & (vlSelf->top__DOT__instr 
                                                   >> 0xfU)))
                                   ? 0U : vlSelf->top__DOT__u_regfile__DOT__rf
                                  [(0x1fU & (vlSelf->top__DOT__instr 
                                             >> 0xfU))]);
    vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((vlSelf->top__DOT__instr >> 0x1fU))) 
            << 0xcU) | (vlSelf->top__DOT__instr >> 0x14U));
    vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[3U] 
        = (((- (IData)((vlSelf->top__DOT__instr >> 0x1fU))) 
            << 0xcU) | (vlSelf->top__DOT__instr >> 0x14U));
    vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((vlSelf->top__DOT__instr >> 0x1fU))) 
            << 0xcU) | (vlSelf->top__DOT__instr >> 0x14U));
    vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[5U] 
        = (((- (IData)((vlSelf->top__DOT__instr >> 0x1fU))) 
            << 0xcU) | (vlSelf->top__DOT__instr >> 0x14U));
    vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[0xaU] 
        = (((- (IData)((vlSelf->top__DOT__instr >> 0x1fU))) 
            << 0xcU) | (vlSelf->top__DOT__instr >> 0x14U));
    vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[0xdU] 
        = (((- (IData)((vlSelf->top__DOT__instr >> 0x1fU))) 
            << 0xcU) | (vlSelf->top__DOT__instr >> 0x14U));
    vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[0x12U] 
        = (((- (IData)((vlSelf->top__DOT__instr >> 0x1fU))) 
            << 0xcU) | (vlSelf->top__DOT__instr >> 0x14U));
    vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[0x14U] 
        = (((- (IData)((vlSelf->top__DOT__instr >> 0x1fU))) 
            << 0xcU) | (vlSelf->top__DOT__instr >> 0x14U));
    vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[0x18U] 
        = (((- (IData)((vlSelf->top__DOT__instr >> 0x1fU))) 
            << 0xcU) | (vlSelf->top__DOT__instr >> 0x14U));
    vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[0x1aU] 
        = (0xfffff000U & vlSelf->top__DOT__instr);
    vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[0x1bU] 
        = (((- (IData)((vlSelf->top__DOT__instr >> 0x1fU))) 
            << 0xcU) | (vlSelf->top__DOT__instr >> 0x14U));
    vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[0x1dU] 
        = (0xfffff000U & vlSelf->top__DOT__instr);
    vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[0x1fU] 
        = (((- (IData)((vlSelf->top__DOT__instr >> 0x1fU))) 
            << 0xcU) | (vlSelf->top__DOT__instr >> 0x14U));
    vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[0x21U] 
        = (((- (IData)((vlSelf->top__DOT__instr >> 0x1fU))) 
            << 0xcU) | (vlSelf->top__DOT__instr >> 0x14U));
    vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[0x22U] 
        = (((- (IData)((vlSelf->top__DOT__instr >> 0x1fU))) 
            << 0xcU) | (vlSelf->top__DOT__instr >> 0x14U));
    vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[0x23U] 
        = (((- (IData)((vlSelf->top__DOT__instr >> 0x1fU))) 
            << 0xcU) | (vlSelf->top__DOT__instr >> 0x14U));
    vlSelf->top__DOT__J_imm = ((0x80000U & (vlSelf->top__DOT__instr 
                                            >> 0xcU)) 
                               | ((0x7f800U & (vlSelf->top__DOT__instr 
                                               >> 1U)) 
                                  | ((0x400U & (vlSelf->top__DOT__instr 
                                                >> 0xaU)) 
                                     | (0x3ffU & (vlSelf->top__DOT__instr 
                                                  >> 0x15U)))));
    vlSelf->top__DOT__i6__DOT__i0__DOT__lut_out = (
                                                   (- (IData)(
                                                              ((0x7fU 
                                                                & vlSelf->top__DOT__instr) 
                                                               == 
                                                               vlSelf->top__DOT__i6__DOT__i0__DOT__key_list
                                                               [0U]))) 
                                                   & vlSelf->top__DOT__i6__DOT__i0__DOT__data_list
                                                   [0U]);
    vlSelf->top__DOT__i6__DOT__i0__DOT__hit = ((0x7fU 
                                                & vlSelf->top__DOT__instr) 
                                               == vlSelf->top__DOT__i6__DOT__i0__DOT__key_list
                                               [0U]);
    vlSelf->top__DOT__i6__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i6__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 ((0x7fU 
                                                                   & vlSelf->top__DOT__instr) 
                                                                  == 
                                                                  vlSelf->top__DOT__i6__DOT__i0__DOT__key_list
                                                                  [1U]))) 
                                                      & vlSelf->top__DOT__i6__DOT__i0__DOT__data_list
                                                      [1U]));
    vlSelf->top__DOT__i6__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i6__DOT__i0__DOT__hit) 
                                               | ((0x7fU 
                                                   & vlSelf->top__DOT__instr) 
                                                  == 
                                                  vlSelf->top__DOT__i6__DOT__i0__DOT__key_list
                                                  [1U]));
    vlSelf->top__DOT__i6__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i6__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 ((0x7fU 
                                                                   & vlSelf->top__DOT__instr) 
                                                                  == 
                                                                  vlSelf->top__DOT__i6__DOT__i0__DOT__key_list
                                                                  [2U]))) 
                                                      & vlSelf->top__DOT__i6__DOT__i0__DOT__data_list
                                                      [2U]));
    vlSelf->top__DOT__i6__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i6__DOT__i0__DOT__hit) 
                                               | ((0x7fU 
                                                   & vlSelf->top__DOT__instr) 
                                                  == 
                                                  vlSelf->top__DOT__i6__DOT__i0__DOT__key_list
                                                  [2U]));
    vlSelf->top__DOT__instr_type_nofunct = ((IData)(vlSelf->top__DOT__i6__DOT__i0__DOT__hit)
                                             ? (IData)(vlSelf->top__DOT__i6__DOT__i0__DOT__lut_out)
                                             : 0U);
    vlSelf->top__DOT__opcode_funct3 = ((0x3f8U & (vlSelf->top__DOT__instr 
                                                  << 3U)) 
                                       | (7U & (vlSelf->top__DOT__instr 
                                                >> 0xcU)));
    vlSelf->top__DOT__opcode_funct3_funct7 = ((0x1fc00U 
                                               & (vlSelf->top__DOT__instr 
                                                  << 0xaU)) 
                                              | ((0x380U 
                                                  & (vlSelf->top__DOT__instr 
                                                     >> 5U)) 
                                                 | (vlSelf->top__DOT__instr 
                                                    >> 0x19U)));
    vlSelf->top__DOT__S_imm = ((0xfe0U & (vlSelf->top__DOT__instr 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->top__DOT__instr 
                                           >> 7U)));
    vlSelf->top__DOT__B_imm = ((0x800U & (vlSelf->top__DOT__instr 
                                          >> 0x14U)) 
                               | ((0x400U & (vlSelf->top__DOT__instr 
                                             << 3U)) 
                                  | ((0x3f0U & (vlSelf->top__DOT__instr 
                                                >> 0x15U)) 
                                     | (0xfU & (vlSelf->top__DOT__instr 
                                                >> 8U)))));
    vlSelf->top__DOT____VdfgTmp_h42b8e437__0 = (vlSelf->top__DOT__rs1_data 
                                                == vlSelf->top__DOT__rs2_data);
    vlSelf->top__DOT__J_ex = (((- (IData)((vlSelf->top__DOT__instr 
                                           >> 0x1fU))) 
                               << 0x15U) | (vlSelf->top__DOT__J_imm 
                                            << 1U));
    vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[0x19U] 
        = (((- (IData)((vlSelf->top__DOT__instr >> 0x1fU))) 
            << 0x15U) | (vlSelf->top__DOT__J_imm << 1U));
    vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out = (
                                                   (- (IData)(
                                                              ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                               == 
                                                               vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                               [0U]))) 
                                                   & vlSelf->top__DOT__i0__DOT__i0__DOT__data_list
                                                   [0U]);
    vlSelf->top__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                               == vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                               [0U]);
    vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                                  == 
                                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                                  [1U]))) 
                                                      & vlSelf->top__DOT__i0__DOT__i0__DOT__data_list
                                                      [1U]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                  == 
                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                  [1U]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                                  == 
                                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                                  [2U]))) 
                                                      & vlSelf->top__DOT__i0__DOT__i0__DOT__data_list
                                                      [2U]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                  == 
                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                  [2U]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                                  == 
                                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                                  [3U]))) 
                                                      & vlSelf->top__DOT__i0__DOT__i0__DOT__data_list
                                                      [3U]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                  == 
                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                  [3U]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                                  == 
                                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                                  [4U]))) 
                                                      & vlSelf->top__DOT__i0__DOT__i0__DOT__data_list
                                                      [4U]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                  == 
                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                  [4U]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                                  == 
                                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                                  [5U]))) 
                                                      & vlSelf->top__DOT__i0__DOT__i0__DOT__data_list
                                                      [5U]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                  == 
                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                  [5U]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                                  == 
                                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                                  [6U]))) 
                                                      & vlSelf->top__DOT__i0__DOT__i0__DOT__data_list
                                                      [6U]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                  == 
                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                  [6U]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                                  == 
                                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                                  [7U]))) 
                                                      & vlSelf->top__DOT__i0__DOT__i0__DOT__data_list
                                                      [7U]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                  == 
                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                  [7U]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                                  == 
                                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                                  [8U]))) 
                                                      & vlSelf->top__DOT__i0__DOT__i0__DOT__data_list
                                                      [8U]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                  == 
                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                  [8U]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                                  == 
                                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                                  [9U]))) 
                                                      & vlSelf->top__DOT__i0__DOT__i0__DOT__data_list
                                                      [9U]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                  == 
                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                  [9U]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                                  == 
                                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                                  [0xaU]))) 
                                                      & vlSelf->top__DOT__i0__DOT__i0__DOT__data_list
                                                      [0xaU]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                  == 
                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                  [0xaU]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                                  == 
                                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                                  [0xbU]))) 
                                                      & vlSelf->top__DOT__i0__DOT__i0__DOT__data_list
                                                      [0xbU]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                  == 
                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                  [0xbU]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                                  == 
                                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                                  [0xcU]))) 
                                                      & vlSelf->top__DOT__i0__DOT__i0__DOT__data_list
                                                      [0xcU]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                  == 
                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                  [0xcU]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                                  == 
                                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                                  [0xdU]))) 
                                                      & vlSelf->top__DOT__i0__DOT__i0__DOT__data_list
                                                      [0xdU]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                  == 
                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                  [0xdU]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                                  == 
                                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                                  [0xeU]))) 
                                                      & vlSelf->top__DOT__i0__DOT__i0__DOT__data_list
                                                      [0xeU]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                  == 
                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                  [0xeU]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                                  == 
                                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                                  [0xfU]))) 
                                                      & vlSelf->top__DOT__i0__DOT__i0__DOT__data_list
                                                      [0xfU]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                  == 
                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                  [0xfU]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                                  == 
                                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                                  [0x10U]))) 
                                                      & vlSelf->top__DOT__i0__DOT__i0__DOT__data_list
                                                      [0x10U]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                  == 
                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                  [0x10U]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                                  == 
                                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                                  [0x11U]))) 
                                                      & vlSelf->top__DOT__i0__DOT__i0__DOT__data_list
                                                      [0x11U]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                  == 
                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                  [0x11U]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                                  == 
                                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                                  [0x12U]))) 
                                                      & vlSelf->top__DOT__i0__DOT__i0__DOT__data_list
                                                      [0x12U]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                  == 
                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                  [0x12U]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                                  == 
                                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                                  [0x13U]))) 
                                                      & vlSelf->top__DOT__i0__DOT__i0__DOT__data_list
                                                      [0x13U]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                  == 
                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                  [0x13U]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                                  == 
                                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                                  [0x14U]))) 
                                                      & vlSelf->top__DOT__i0__DOT__i0__DOT__data_list
                                                      [0x14U]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                  == 
                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                  [0x14U]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                                  == 
                                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                                  [0x15U]))) 
                                                      & vlSelf->top__DOT__i0__DOT__i0__DOT__data_list
                                                      [0x15U]));
    vlSelf->top__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__opcode_funct3) 
                                                  == 
                                                  vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
                                                  [0x15U]));
    vlSelf->top__DOT__instr_type_tmp = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__hit)
                                         ? (IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out)
                                         : 0U);
    vlSelf->top__DOT__i7__DOT__i0__DOT__lut_out = (
                                                   (- (IData)(
                                                              (vlSelf->top__DOT__opcode_funct3_funct7 
                                                               == 
                                                               vlSelf->top__DOT__i7__DOT__i0__DOT__key_list
                                                               [0U]))) 
                                                   & vlSelf->top__DOT__i7__DOT__i0__DOT__data_list
                                                   [0U]);
    vlSelf->top__DOT__i7__DOT__i0__DOT__hit = (vlSelf->top__DOT__opcode_funct3_funct7 
                                               == vlSelf->top__DOT__i7__DOT__i0__DOT__key_list
                                               [0U]);
    vlSelf->top__DOT__i7__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i7__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 (vlSelf->top__DOT__opcode_funct3_funct7 
                                                                  == 
                                                                  vlSelf->top__DOT__i7__DOT__i0__DOT__key_list
                                                                  [1U]))) 
                                                      & vlSelf->top__DOT__i7__DOT__i0__DOT__data_list
                                                      [1U]));
    vlSelf->top__DOT__i7__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i7__DOT__i0__DOT__hit) 
                                               | (vlSelf->top__DOT__opcode_funct3_funct7 
                                                  == 
                                                  vlSelf->top__DOT__i7__DOT__i0__DOT__key_list
                                                  [1U]));
    vlSelf->top__DOT__i7__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i7__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 (vlSelf->top__DOT__opcode_funct3_funct7 
                                                                  == 
                                                                  vlSelf->top__DOT__i7__DOT__i0__DOT__key_list
                                                                  [2U]))) 
                                                      & vlSelf->top__DOT__i7__DOT__i0__DOT__data_list
                                                      [2U]));
    vlSelf->top__DOT__i7__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i7__DOT__i0__DOT__hit) 
                                               | (vlSelf->top__DOT__opcode_funct3_funct7 
                                                  == 
                                                  vlSelf->top__DOT__i7__DOT__i0__DOT__key_list
                                                  [2U]));
    vlSelf->top__DOT__i7__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i7__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 (vlSelf->top__DOT__opcode_funct3_funct7 
                                                                  == 
                                                                  vlSelf->top__DOT__i7__DOT__i0__DOT__key_list
                                                                  [3U]))) 
                                                      & vlSelf->top__DOT__i7__DOT__i0__DOT__data_list
                                                      [3U]));
    vlSelf->top__DOT__i7__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i7__DOT__i0__DOT__hit) 
                                               | (vlSelf->top__DOT__opcode_funct3_funct7 
                                                  == 
                                                  vlSelf->top__DOT__i7__DOT__i0__DOT__key_list
                                                  [3U]));
    vlSelf->top__DOT__i7__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i7__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 (vlSelf->top__DOT__opcode_funct3_funct7 
                                                                  == 
                                                                  vlSelf->top__DOT__i7__DOT__i0__DOT__key_list
                                                                  [4U]))) 
                                                      & vlSelf->top__DOT__i7__DOT__i0__DOT__data_list
                                                      [4U]));
    vlSelf->top__DOT__i7__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i7__DOT__i0__DOT__hit) 
                                               | (vlSelf->top__DOT__opcode_funct3_funct7 
                                                  == 
                                                  vlSelf->top__DOT__i7__DOT__i0__DOT__key_list
                                                  [4U]));
    vlSelf->top__DOT__i7__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i7__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 (vlSelf->top__DOT__opcode_funct3_funct7 
                                                                  == 
                                                                  vlSelf->top__DOT__i7__DOT__i0__DOT__key_list
                                                                  [5U]))) 
                                                      & vlSelf->top__DOT__i7__DOT__i0__DOT__data_list
                                                      [5U]));
    vlSelf->top__DOT__i7__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i7__DOT__i0__DOT__hit) 
                                               | (vlSelf->top__DOT__opcode_funct3_funct7 
                                                  == 
                                                  vlSelf->top__DOT__i7__DOT__i0__DOT__key_list
                                                  [5U]));
    vlSelf->top__DOT__i7__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i7__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 (vlSelf->top__DOT__opcode_funct3_funct7 
                                                                  == 
                                                                  vlSelf->top__DOT__i7__DOT__i0__DOT__key_list
                                                                  [6U]))) 
                                                      & vlSelf->top__DOT__i7__DOT__i0__DOT__data_list
                                                      [6U]));
    vlSelf->top__DOT__i7__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i7__DOT__i0__DOT__hit) 
                                               | (vlSelf->top__DOT__opcode_funct3_funct7 
                                                  == 
                                                  vlSelf->top__DOT__i7__DOT__i0__DOT__key_list
                                                  [6U]));
    vlSelf->top__DOT__i7__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i7__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 (vlSelf->top__DOT__opcode_funct3_funct7 
                                                                  == 
                                                                  vlSelf->top__DOT__i7__DOT__i0__DOT__key_list
                                                                  [7U]))) 
                                                      & vlSelf->top__DOT__i7__DOT__i0__DOT__data_list
                                                      [7U]));
    vlSelf->top__DOT__i7__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i7__DOT__i0__DOT__hit) 
                                               | (vlSelf->top__DOT__opcode_funct3_funct7 
                                                  == 
                                                  vlSelf->top__DOT__i7__DOT__i0__DOT__key_list
                                                  [7U]));
    vlSelf->top__DOT__i7__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i7__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 (vlSelf->top__DOT__opcode_funct3_funct7 
                                                                  == 
                                                                  vlSelf->top__DOT__i7__DOT__i0__DOT__key_list
                                                                  [8U]))) 
                                                      & vlSelf->top__DOT__i7__DOT__i0__DOT__data_list
                                                      [8U]));
    vlSelf->top__DOT__i7__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i7__DOT__i0__DOT__hit) 
                                               | (vlSelf->top__DOT__opcode_funct3_funct7 
                                                  == 
                                                  vlSelf->top__DOT__i7__DOT__i0__DOT__key_list
                                                  [8U]));
    vlSelf->top__DOT__i7__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i7__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 (vlSelf->top__DOT__opcode_funct3_funct7 
                                                                  == 
                                                                  vlSelf->top__DOT__i7__DOT__i0__DOT__key_list
                                                                  [9U]))) 
                                                      & vlSelf->top__DOT__i7__DOT__i0__DOT__data_list
                                                      [9U]));
    vlSelf->top__DOT__i7__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i7__DOT__i0__DOT__hit) 
                                               | (vlSelf->top__DOT__opcode_funct3_funct7 
                                                  == 
                                                  vlSelf->top__DOT__i7__DOT__i0__DOT__key_list
                                                  [9U]));
    vlSelf->top__DOT__i7__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i7__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 (vlSelf->top__DOT__opcode_funct3_funct7 
                                                                  == 
                                                                  vlSelf->top__DOT__i7__DOT__i0__DOT__key_list
                                                                  [0xaU]))) 
                                                      & vlSelf->top__DOT__i7__DOT__i0__DOT__data_list
                                                      [0xaU]));
    vlSelf->top__DOT__i7__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i7__DOT__i0__DOT__hit) 
                                               | (vlSelf->top__DOT__opcode_funct3_funct7 
                                                  == 
                                                  vlSelf->top__DOT__i7__DOT__i0__DOT__key_list
                                                  [0xaU]));
    vlSelf->top__DOT__instr_type_funct7 = ((IData)(vlSelf->top__DOT__i7__DOT__i0__DOT__hit)
                                            ? (IData)(vlSelf->top__DOT__i7__DOT__i0__DOT__lut_out)
                                            : 0U);
    vlSelf->top__DOT__S_ex = (((- (IData)((vlSelf->top__DOT__instr 
                                           >> 0x1fU))) 
                               << 0xcU) | (IData)(vlSelf->top__DOT__S_imm));
    vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[0x13U] 
        = (((- (IData)((vlSelf->top__DOT__instr >> 0x1fU))) 
            << 0xcU) | (IData)(vlSelf->top__DOT__S_imm));
    vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[0x1cU] 
        = (((- (IData)((vlSelf->top__DOT__instr >> 0x1fU))) 
            << 0xcU) | (IData)(vlSelf->top__DOT__S_imm));
    vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[0x20U] 
        = (((- (IData)((vlSelf->top__DOT__instr >> 0x1fU))) 
            << 0xcU) | (IData)(vlSelf->top__DOT__S_imm));
    vlSelf->top__DOT__B_ex = (((- (IData)((vlSelf->top__DOT__instr 
                                           >> 0x1fU))) 
                               << 0xdU) | ((IData)(vlSelf->top__DOT__B_imm) 
                                           << 1U));
    vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[7U] 
        = (((- (IData)((vlSelf->top__DOT__instr >> 0x1fU))) 
            << 0xdU) | ((IData)(vlSelf->top__DOT__B_imm) 
                        << 1U));
    vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[8U] 
        = (((- (IData)((vlSelf->top__DOT__instr >> 0x1fU))) 
            << 0xdU) | ((IData)(vlSelf->top__DOT__B_imm) 
                        << 1U));
    vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[0xbU] 
        = (((- (IData)((vlSelf->top__DOT__instr >> 0x1fU))) 
            << 0xdU) | ((IData)(vlSelf->top__DOT__B_imm) 
                        << 1U));
    vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[0xcU] 
        = (((- (IData)((vlSelf->top__DOT__instr >> 0x1fU))) 
            << 0xdU) | ((IData)(vlSelf->top__DOT__B_imm) 
                        << 1U));
    vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[0x15U] 
        = (((- (IData)((vlSelf->top__DOT__instr >> 0x1fU))) 
            << 0xdU) | ((IData)(vlSelf->top__DOT__B_imm) 
                        << 1U));
    vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[0x16U] 
        = (((- (IData)((vlSelf->top__DOT__instr >> 0x1fU))) 
            << 0xdU) | ((IData)(vlSelf->top__DOT__B_imm) 
                        << 1U));
    vlSelf->top__DOT__instr_type = ((0U == (IData)(vlSelf->top__DOT__instr_type_nofunct))
                                     ? ((0U == (IData)(vlSelf->top__DOT__instr_type_funct7))
                                         ? (IData)(vlSelf->top__DOT__instr_type_tmp)
                                         : (IData)(vlSelf->top__DOT__instr_type_funct7))
                                     : (IData)(vlSelf->top__DOT__instr_type_nofunct));
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0U] 
        = (IData)((0x2300000000ULL | (QData)((IData)(vlSelf->top__DOT__I_ex))));
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[1U] 
        = (IData)(((0x2300000000ULL | (QData)((IData)(vlSelf->top__DOT__I_ex))) 
                   >> 0x20U));
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[2U] = 0x22000U;
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[3U] = 0x21000000U;
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[4U] 
        = (vlSelf->top__DOT__I_ex << 4U);
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[5U] 
        = (0x200U | ((vlSelf->top__DOT__I_ex << 0x10U) 
                     | (vlSelf->top__DOT__I_ex >> 0x1cU)));
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[6U] 
        = (0x1f0000U | ((vlSelf->top__DOT__I_ex << 0x1cU) 
                        | (vlSelf->top__DOT__I_ex >> 0x10U)));
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[7U] 
        = (0xe0000000U | (vlSelf->top__DOT__I_ex >> 4U));
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[8U] = 1U;
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[9U] 
        = (0x1d00U | (vlSelf->top__DOT__B_ex << 0x14U));
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0xaU] 
        = (0x1c00000U | (vlSelf->top__DOT__B_ex >> 0xcU));
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0xbU] 
        = vlSelf->top__DOT__B_ex;
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0xcU] = 0x1bU;
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0xdU] 
        = (0x1a000U | (vlSelf->top__DOT__I_ex << 0x18U));
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0xeU] 
        = (0x19000000U | (vlSelf->top__DOT__I_ex >> 8U));
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0xfU] 
        = (vlSelf->top__DOT__B_ex << 4U);
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0x10U] 
        = (0x180U | ((vlSelf->top__DOT__B_ex << 0x10U) 
                     | (vlSelf->top__DOT__B_ex >> 0x1cU)));
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0x11U] 
        = (0x170000U | ((vlSelf->top__DOT__I_ex << 0x1cU) 
                        | (vlSelf->top__DOT__B_ex >> 0x10U)));
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0x12U] 
        = (0x60000000U | (vlSelf->top__DOT__I_ex >> 4U));
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0x13U] = 1U;
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0x14U] = 0x1500U;
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0x15U] = 0x1400000U;
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0x16U] = 0U;
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0x17U] = 0x13U;
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0x18U] 
        = (0x12000U | (vlSelf->top__DOT__I_ex << 0x18U));
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0x19U] 
        = (0x11000000U | (vlSelf->top__DOT__I_ex >> 8U));
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0x1aU] 
        = (vlSelf->top__DOT__S_ex << 4U);
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0x1bU] 
        = (0x100U | ((vlSelf->top__DOT__I_ex << 0x10U) 
                     | (vlSelf->top__DOT__S_ex >> 0x1cU)));
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0x1cU] 
        = (0xf0000U | ((vlSelf->top__DOT__B_ex << 0x1cU) 
                       | (vlSelf->top__DOT__I_ex >> 0x10U)));
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0x1dU] 
        = (0xe0000000U | (vlSelf->top__DOT__B_ex >> 4U));
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0x1eU] 
        = (vlSelf->top__DOT__B_ex << 8U);
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0x1fU] 
        = (0xd00U | (vlSelf->top__DOT__B_ex >> 0x18U));
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0x20U] = 0xc00000U;
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0x21U] 
        = vlSelf->top__DOT__I_ex;
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0x22U] 
        = (0xbU | (vlSelf->top__DOT__J_ex << 0xcU));
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0x23U] 
        = (0xa000U | (vlSelf->top__DOT__J_ex >> 0x14U));
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0x24U] 
        = (0x9000000U | (0xfffff0U & (vlSelf->top__DOT__instr 
                                      >> 8U)));
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0x25U] 
        = (vlSelf->top__DOT__I_ex << 4U);
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0x26U] 
        = (0x80U | ((vlSelf->top__DOT__S_ex << 0x10U) 
                    | (vlSelf->top__DOT__I_ex >> 0x1cU)));
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0x27U] 
        = (0x70000U | (vlSelf->top__DOT__S_ex >> 0x10U));
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0x28U] 
        = (0x60000000U | (0xfffff00U & (vlSelf->top__DOT__instr 
                                        >> 4U)));
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0x29U] = 0U;
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0x2aU] 
        = (0x500U | (vlSelf->top__DOT__I_ex << 0x14U));
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0x2bU] 
        = (0x400000U | (vlSelf->top__DOT__I_ex >> 0xcU));
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0x2cU] 
        = vlSelf->top__DOT__S_ex;
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0x2dU] 
        = (3U | (vlSelf->top__DOT__I_ex << 0xcU));
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0x2eU] 
        = (0x2000U | ((vlSelf->top__DOT__I_ex << 0x18U) 
                      | (vlSelf->top__DOT__I_ex >> 0x14U)));
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0x2fU] 
        = (0x1000000U | (vlSelf->top__DOT__I_ex >> 8U));
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0x30U] 
        = (vlSelf->top__DOT__I_ex << 4U);
    vlSelf->top__DOT____Vcellinp__i1____pinNumber4[0x31U] 
        = (vlSelf->top__DOT__I_ex >> 0x1cU);
    vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out = (
                                                   ((IData)(vlSelf->top__DOT__instr_type) 
                                                    == 
                                                    vlSelf->top__DOT__i2__DOT__i0__DOT__key_list
                                                    [0U]) 
                                                   & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                                                   [0U]);
    vlSelf->top__DOT__i2__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__instr_type) 
                                               == vlSelf->top__DOT__i2__DOT__i0__DOT__key_list
                                               [0U]);
    vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out) 
                                                   | (((IData)(vlSelf->top__DOT__instr_type) 
                                                       == 
                                                       vlSelf->top__DOT__i2__DOT__i0__DOT__key_list
                                                       [1U]) 
                                                      & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                                                      [1U]));
    vlSelf->top__DOT__i2__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i2__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i2__DOT__i0__DOT__key_list
                                                  [1U]));
    vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out) 
                                                   | (((IData)(vlSelf->top__DOT__instr_type) 
                                                       == 
                                                       vlSelf->top__DOT__i2__DOT__i0__DOT__key_list
                                                       [2U]) 
                                                      & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                                                      [2U]));
    vlSelf->top__DOT__i2__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i2__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i2__DOT__i0__DOT__key_list
                                                  [2U]));
    vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out) 
                                                   | (((IData)(vlSelf->top__DOT__instr_type) 
                                                       == 
                                                       vlSelf->top__DOT__i2__DOT__i0__DOT__key_list
                                                       [3U]) 
                                                      & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                                                      [3U]));
    vlSelf->top__DOT__i2__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i2__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i2__DOT__i0__DOT__key_list
                                                  [3U]));
    vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out) 
                                                   | (((IData)(vlSelf->top__DOT__instr_type) 
                                                       == 
                                                       vlSelf->top__DOT__i2__DOT__i0__DOT__key_list
                                                       [4U]) 
                                                      & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                                                      [4U]));
    vlSelf->top__DOT__i2__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i2__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i2__DOT__i0__DOT__key_list
                                                  [4U]));
    vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out) 
                                                   | (((IData)(vlSelf->top__DOT__instr_type) 
                                                       == 
                                                       vlSelf->top__DOT__i2__DOT__i0__DOT__key_list
                                                       [5U]) 
                                                      & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                                                      [5U]));
    vlSelf->top__DOT__i2__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i2__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i2__DOT__i0__DOT__key_list
                                                  [5U]));
    vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out) 
                                                   | (((IData)(vlSelf->top__DOT__instr_type) 
                                                       == 
                                                       vlSelf->top__DOT__i2__DOT__i0__DOT__key_list
                                                       [6U]) 
                                                      & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                                                      [6U]));
    vlSelf->top__DOT__i2__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i2__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i2__DOT__i0__DOT__key_list
                                                  [6U]));
    vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out) 
                                                   | (((IData)(vlSelf->top__DOT__instr_type) 
                                                       == 
                                                       vlSelf->top__DOT__i2__DOT__i0__DOT__key_list
                                                       [7U]) 
                                                      & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                                                      [7U]));
    vlSelf->top__DOT__i2__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i2__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i2__DOT__i0__DOT__key_list
                                                  [7U]));
    vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out) 
                                                   | (((IData)(vlSelf->top__DOT__instr_type) 
                                                       == 
                                                       vlSelf->top__DOT__i2__DOT__i0__DOT__key_list
                                                       [8U]) 
                                                      & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                                                      [8U]));
    vlSelf->top__DOT__i2__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i2__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i2__DOT__i0__DOT__key_list
                                                  [8U]));
    vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out) 
                                                   | (((IData)(vlSelf->top__DOT__instr_type) 
                                                       == 
                                                       vlSelf->top__DOT__i2__DOT__i0__DOT__key_list
                                                       [9U]) 
                                                      & vlSelf->top__DOT__i2__DOT__i0__DOT__data_list
                                                      [9U]));
    vlSelf->top__DOT__i2__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i2__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i2__DOT__i0__DOT__key_list
                                                  [9U]));
    vlSelf->top__DOT__wen = (1U & ((~ (IData)(vlSelf->top__DOT__i2__DOT__i0__DOT__hit)) 
                                   | (IData)(vlSelf->top__DOT__i2__DOT__i0__DOT__lut_out)));
    vlSelf->top__DOT__i4__DOT__i0__DOT__lut_out = (
                                                   ((IData)(vlSelf->top__DOT__instr_type) 
                                                    == 
                                                    vlSelf->top__DOT__i4__DOT__i0__DOT__key_list
                                                    [0U]) 
                                                   & vlSelf->top__DOT__i4__DOT__i0__DOT__data_list
                                                   [0U]);
    vlSelf->top__DOT__i4__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__instr_type) 
                                               == vlSelf->top__DOT__i4__DOT__i0__DOT__key_list
                                               [0U]);
    vlSelf->top__DOT__i4__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i4__DOT__i0__DOT__lut_out) 
                                                   | (((IData)(vlSelf->top__DOT__instr_type) 
                                                       == 
                                                       vlSelf->top__DOT__i4__DOT__i0__DOT__key_list
                                                       [1U]) 
                                                      & vlSelf->top__DOT__i4__DOT__i0__DOT__data_list
                                                      [1U]));
    vlSelf->top__DOT__i4__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i4__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i4__DOT__i0__DOT__key_list
                                                  [1U]));
    vlSelf->top__DOT__i4__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i4__DOT__i0__DOT__lut_out) 
                                                   | (((IData)(vlSelf->top__DOT__instr_type) 
                                                       == 
                                                       vlSelf->top__DOT__i4__DOT__i0__DOT__key_list
                                                       [2U]) 
                                                      & vlSelf->top__DOT__i4__DOT__i0__DOT__data_list
                                                      [2U]));
    vlSelf->top__DOT__i4__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i4__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i4__DOT__i0__DOT__key_list
                                                  [2U]));
    vlSelf->top__DOT__i4__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i4__DOT__i0__DOT__lut_out) 
                                                   | (((IData)(vlSelf->top__DOT__instr_type) 
                                                       == 
                                                       vlSelf->top__DOT__i4__DOT__i0__DOT__key_list
                                                       [3U]) 
                                                      & vlSelf->top__DOT__i4__DOT__i0__DOT__data_list
                                                      [3U]));
    vlSelf->top__DOT__i4__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i4__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i4__DOT__i0__DOT__key_list
                                                  [3U]));
    vlSelf->top__DOT__i4__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i4__DOT__i0__DOT__lut_out) 
                                                   | (((IData)(vlSelf->top__DOT__instr_type) 
                                                       == 
                                                       vlSelf->top__DOT__i4__DOT__i0__DOT__key_list
                                                       [4U]) 
                                                      & vlSelf->top__DOT__i4__DOT__i0__DOT__data_list
                                                      [4U]));
    vlSelf->top__DOT__i4__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i4__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i4__DOT__i0__DOT__key_list
                                                  [4U]));
    vlSelf->top__DOT__i4__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i4__DOT__i0__DOT__lut_out) 
                                                   | (((IData)(vlSelf->top__DOT__instr_type) 
                                                       == 
                                                       vlSelf->top__DOT__i4__DOT__i0__DOT__key_list
                                                       [5U]) 
                                                      & vlSelf->top__DOT__i4__DOT__i0__DOT__data_list
                                                      [5U]));
    vlSelf->top__DOT__i4__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i4__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i4__DOT__i0__DOT__key_list
                                                  [5U]));
    vlSelf->top__DOT__i4__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i4__DOT__i0__DOT__lut_out) 
                                                   | (((IData)(vlSelf->top__DOT__instr_type) 
                                                       == 
                                                       vlSelf->top__DOT__i4__DOT__i0__DOT__key_list
                                                       [6U]) 
                                                      & vlSelf->top__DOT__i4__DOT__i0__DOT__data_list
                                                      [6U]));
    vlSelf->top__DOT__i4__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i4__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i4__DOT__i0__DOT__key_list
                                                  [6U]));
    vlSelf->top__DOT__i4__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i4__DOT__i0__DOT__lut_out) 
                                                   | (((IData)(vlSelf->top__DOT__instr_type) 
                                                       == 
                                                       vlSelf->top__DOT__i4__DOT__i0__DOT__key_list
                                                       [7U]) 
                                                      & vlSelf->top__DOT__i4__DOT__i0__DOT__data_list
                                                      [7U]));
    vlSelf->top__DOT__i4__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i4__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i4__DOT__i0__DOT__key_list
                                                  [7U]));
    vlSelf->top__DOT__valid = ((IData)(vlSelf->top__DOT__i4__DOT__i0__DOT__hit) 
                               & (IData)(vlSelf->top__DOT__i4__DOT__i0__DOT__lut_out));
    vlSelf->top__DOT__i5__DOT__i0__DOT__lut_out = (
                                                   ((IData)(vlSelf->top__DOT__instr_type) 
                                                    == 
                                                    vlSelf->top__DOT__i5__DOT__i0__DOT__key_list
                                                    [0U]) 
                                                   & vlSelf->top__DOT__i5__DOT__i0__DOT__data_list
                                                   [0U]);
    vlSelf->top__DOT__i5__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__instr_type) 
                                               == vlSelf->top__DOT__i5__DOT__i0__DOT__key_list
                                               [0U]);
    vlSelf->top__DOT__i5__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i5__DOT__i0__DOT__lut_out) 
                                                   | (((IData)(vlSelf->top__DOT__instr_type) 
                                                       == 
                                                       vlSelf->top__DOT__i5__DOT__i0__DOT__key_list
                                                       [1U]) 
                                                      & vlSelf->top__DOT__i5__DOT__i0__DOT__data_list
                                                      [1U]));
    vlSelf->top__DOT__i5__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i5__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i5__DOT__i0__DOT__key_list
                                                  [1U]));
    vlSelf->top__DOT__i5__DOT__i0__DOT__lut_out = ((IData)(vlSelf->top__DOT__i5__DOT__i0__DOT__lut_out) 
                                                   | (((IData)(vlSelf->top__DOT__instr_type) 
                                                       == 
                                                       vlSelf->top__DOT__i5__DOT__i0__DOT__key_list
                                                       [2U]) 
                                                      & vlSelf->top__DOT__i5__DOT__i0__DOT__data_list
                                                      [2U]));
    vlSelf->top__DOT__i5__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i5__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i5__DOT__i0__DOT__key_list
                                                  [2U]));
    vlSelf->top__DOT__wen_ram = ((IData)(vlSelf->top__DOT__i5__DOT__i0__DOT__hit) 
                                 & (IData)(vlSelf->top__DOT__i5__DOT__i0__DOT__lut_out));
    vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out = (
                                                   (- (IData)(
                                                              ((IData)(vlSelf->top__DOT__instr_type) 
                                                               == 
                                                               vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                               [0U]))) 
                                                   & vlSelf->top__DOT__i1__DOT__i0__DOT__data_list
                                                   [0U]);
    vlSelf->top__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__instr_type) 
                                               == vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                               [0U]);
    vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                                  [1U]))) 
                                                      & vlSelf->top__DOT__i1__DOT__i0__DOT__data_list
                                                      [1U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i1__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                  [1U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                                  [2U]))) 
                                                      & vlSelf->top__DOT__i1__DOT__i0__DOT__data_list
                                                      [2U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i1__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                  [2U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                                  [3U]))) 
                                                      & vlSelf->top__DOT__i1__DOT__i0__DOT__data_list
                                                      [3U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i1__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                  [3U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                                  [4U]))) 
                                                      & vlSelf->top__DOT__i1__DOT__i0__DOT__data_list
                                                      [4U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i1__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                  [4U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                                  [5U]))) 
                                                      & vlSelf->top__DOT__i1__DOT__i0__DOT__data_list
                                                      [5U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i1__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                  [5U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                                  [6U]))) 
                                                      & vlSelf->top__DOT__i1__DOT__i0__DOT__data_list
                                                      [6U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i1__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                  [6U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                                  [7U]))) 
                                                      & vlSelf->top__DOT__i1__DOT__i0__DOT__data_list
                                                      [7U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i1__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                  [7U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                                  [8U]))) 
                                                      & vlSelf->top__DOT__i1__DOT__i0__DOT__data_list
                                                      [8U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i1__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                  [8U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                                  [9U]))) 
                                                      & vlSelf->top__DOT__i1__DOT__i0__DOT__data_list
                                                      [9U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i1__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                  [9U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                                  [0xaU]))) 
                                                      & vlSelf->top__DOT__i1__DOT__i0__DOT__data_list
                                                      [0xaU]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i1__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                  [0xaU]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                                  [0xbU]))) 
                                                      & vlSelf->top__DOT__i1__DOT__i0__DOT__data_list
                                                      [0xbU]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i1__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                  [0xbU]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                                  [0xcU]))) 
                                                      & vlSelf->top__DOT__i1__DOT__i0__DOT__data_list
                                                      [0xcU]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i1__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                  [0xcU]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                                  [0xdU]))) 
                                                      & vlSelf->top__DOT__i1__DOT__i0__DOT__data_list
                                                      [0xdU]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i1__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                  [0xdU]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                                  [0xeU]))) 
                                                      & vlSelf->top__DOT__i1__DOT__i0__DOT__data_list
                                                      [0xeU]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i1__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                  [0xeU]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                                  [0xfU]))) 
                                                      & vlSelf->top__DOT__i1__DOT__i0__DOT__data_list
                                                      [0xfU]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i1__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                  [0xfU]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                                  [0x10U]))) 
                                                      & vlSelf->top__DOT__i1__DOT__i0__DOT__data_list
                                                      [0x10U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i1__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                  [0x10U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                                  [0x11U]))) 
                                                      & vlSelf->top__DOT__i1__DOT__i0__DOT__data_list
                                                      [0x11U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i1__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                  [0x11U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                                  [0x12U]))) 
                                                      & vlSelf->top__DOT__i1__DOT__i0__DOT__data_list
                                                      [0x12U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i1__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                  [0x12U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                                  [0x13U]))) 
                                                      & vlSelf->top__DOT__i1__DOT__i0__DOT__data_list
                                                      [0x13U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i1__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                  [0x13U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                                  [0x14U]))) 
                                                      & vlSelf->top__DOT__i1__DOT__i0__DOT__data_list
                                                      [0x14U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i1__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                  [0x14U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                                  [0x15U]))) 
                                                      & vlSelf->top__DOT__i1__DOT__i0__DOT__data_list
                                                      [0x15U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i1__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                  [0x15U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                                  [0x16U]))) 
                                                      & vlSelf->top__DOT__i1__DOT__i0__DOT__data_list
                                                      [0x16U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i1__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                  [0x16U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                                  [0x17U]))) 
                                                      & vlSelf->top__DOT__i1__DOT__i0__DOT__data_list
                                                      [0x17U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i1__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                  [0x17U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                                  [0x18U]))) 
                                                      & vlSelf->top__DOT__i1__DOT__i0__DOT__data_list
                                                      [0x18U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i1__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                  [0x18U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                                  [0x19U]))) 
                                                      & vlSelf->top__DOT__i1__DOT__i0__DOT__data_list
                                                      [0x19U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i1__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                  [0x19U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                                  [0x1aU]))) 
                                                      & vlSelf->top__DOT__i1__DOT__i0__DOT__data_list
                                                      [0x1aU]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i1__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                  [0x1aU]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                                  [0x1bU]))) 
                                                      & vlSelf->top__DOT__i1__DOT__i0__DOT__data_list
                                                      [0x1bU]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i1__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                  [0x1bU]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                                  [0x1cU]))) 
                                                      & vlSelf->top__DOT__i1__DOT__i0__DOT__data_list
                                                      [0x1cU]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i1__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                  [0x1cU]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                                  [0x1dU]))) 
                                                      & vlSelf->top__DOT__i1__DOT__i0__DOT__data_list
                                                      [0x1dU]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i1__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                  [0x1dU]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                                  [0x1eU]))) 
                                                      & vlSelf->top__DOT__i1__DOT__i0__DOT__data_list
                                                      [0x1eU]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i1__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                  [0x1eU]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                                  [0x1fU]))) 
                                                      & vlSelf->top__DOT__i1__DOT__i0__DOT__data_list
                                                      [0x1fU]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i1__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                  [0x1fU]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                                  [0x20U]))) 
                                                      & vlSelf->top__DOT__i1__DOT__i0__DOT__data_list
                                                      [0x20U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i1__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                  [0x20U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                                  [0x21U]))) 
                                                      & vlSelf->top__DOT__i1__DOT__i0__DOT__data_list
                                                      [0x21U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i1__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                  [0x21U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                                  [0x22U]))) 
                                                      & vlSelf->top__DOT__i1__DOT__i0__DOT__data_list
                                                      [0x22U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i1__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                  [0x22U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                                  [0x23U]))) 
                                                      & vlSelf->top__DOT__i1__DOT__i0__DOT__data_list
                                                      [0x23U]));
    vlSelf->top__DOT__i1__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i1__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i1__DOT__i0__DOT__key_list
                                                  [0x23U]));
    vlSelf->top__DOT__imm = ((IData)(vlSelf->top__DOT__i1__DOT__i0__DOT__hit)
                              ? vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out
                              : 0U);
    vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0 = (vlSelf->top__DOT__imm 
                                                + vlSelf->top__DOT__rs1_data);
    vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0 = (vlSelf->top__DOT__imm 
                                                + vlSelf->top__DOT__pc);
    if (VL_UNLIKELY((1U & (~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff))))) {
        VL_WRITEF("PC=%x instr=%x raddr=%x\n",32,vlSelf->top__DOT__pc,
                  32,vlSelf->top__DOT__instr,32,((IData)(vlSelf->top__DOT__valid)
                                                  ? vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0
                                                  : 0x80000000U));
    }
    vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[7U] 
        = (0x100000000ULL | (QData)((IData)(((0x80000000U 
                                              > vlSelf->top__DOT__rs1_data)
                                              ? ((IData)(0x80000000U) 
                                                 + vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0)
                                              : vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0))));
    if (vlSelf->top__DOT__wen_ram) {
        vlSelf->top__DOT____VdfgTmp_hb37fddff__0 = 
            (1U & (vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0 
                   >> 1U));
        vlSelf->top__DOT____VdfgTmp_ha2850746__0 = 
            (3U & vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0);
    } else {
        vlSelf->top__DOT____VdfgTmp_hb37fddff__0 = 0U;
        vlSelf->top__DOT____VdfgTmp_ha2850746__0 = 0U;
    }
    vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[7U] 
        = ((0x80000000U > vlSelf->top__DOT__rs1_data)
            ? ((IData)(0x80000000U) + vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0)
            : vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0);
    vlSelf->top__DOT__u_alu__DOT__byte_idx = ((IData)(vlSelf->top__DOT__valid)
                                               ? (3U 
                                                  & vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0)
                                               : 0U);
    vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[6U] 
        = (0xa00000000ULL | (QData)((IData)(((0x80000000U 
                                              > vlSelf->top__DOT__pc)
                                              ? ((IData)(0x80000000U) 
                                                 + vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0)
                                              : vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0))));
    vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[4U] 
        = (0xe00000000ULL | (QData)((IData)(((IData)(vlSelf->top__DOT____VdfgTmp_h42b8e437__0)
                                              ? ((IData)(4U) 
                                                 + vlSelf->top__DOT__pc)
                                              : vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0))));
    vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[5U] 
        = (0xd00000000ULL | (QData)((IData)(((IData)(vlSelf->top__DOT____VdfgTmp_h42b8e437__0)
                                              ? vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0
                                              : ((IData)(4U) 
                                                 + vlSelf->top__DOT__pc)))));
    vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[0U] 
        = (0x1c00000000ULL | (QData)((IData)(((vlSelf->top__DOT__rs1_data 
                                               < vlSelf->top__DOT__rs2_data)
                                               ? vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0
                                               : ((IData)(4U) 
                                                  + vlSelf->top__DOT__pc)))));
    vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[1U] 
        = (0x1b00000000ULL | (QData)((IData)(((vlSelf->top__DOT__rs1_data 
                                               >= vlSelf->top__DOT__rs2_data)
                                               ? vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0
                                               : ((IData)(4U) 
                                                  + vlSelf->top__DOT__pc)))));
    vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[2U] 
        = (0x1800000000ULL | (QData)((IData)((VL_LTS_III(32, vlSelf->top__DOT__rs1_data, vlSelf->top__DOT__rs2_data)
                                               ? vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0
                                               : ((IData)(4U) 
                                                  + vlSelf->top__DOT__pc)))));
    vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[3U] 
        = (0x1700000000ULL | (QData)((IData)((VL_GTES_III(32, vlSelf->top__DOT__rs1_data, vlSelf->top__DOT__rs2_data)
                                               ? vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0
                                               : ((IData)(4U) 
                                                  + vlSelf->top__DOT__pc)))));
    vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[6U] 
        = ((0x80000000U > vlSelf->top__DOT__pc) ? ((IData)(0x80000000U) 
                                                   + vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0)
            : vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0);
    if (vlSelf->top__DOT____VdfgTmp_h42b8e437__0) {
        vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[4U] 
            = ((IData)(4U) + vlSelf->top__DOT__pc);
        vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[5U] 
            = vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0;
    } else {
        vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[4U] 
            = vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0;
        vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[5U] 
            = ((IData)(4U) + vlSelf->top__DOT__pc);
    }
    vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[0U] 
        = ((vlSelf->top__DOT__rs1_data < vlSelf->top__DOT__rs2_data)
            ? vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0
            : ((IData)(4U) + vlSelf->top__DOT__pc));
    vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[1U] 
        = ((vlSelf->top__DOT__rs1_data >= vlSelf->top__DOT__rs2_data)
            ? vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0
            : ((IData)(4U) + vlSelf->top__DOT__pc));
    vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[2U] 
        = (VL_LTS_III(32, vlSelf->top__DOT__rs1_data, vlSelf->top__DOT__rs2_data)
            ? vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0
            : ((IData)(4U) + vlSelf->top__DOT__pc));
    vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[3U] 
        = (VL_GTES_III(32, vlSelf->top__DOT__rs1_data, vlSelf->top__DOT__rs2_data)
            ? vlSelf->top__DOT____VdfgTmp_h8a6dd3c2__0
            : ((IData)(4U) + vlSelf->top__DOT__pc));
    vlSelf->top__DOT__i3__DOT__i0__DOT__lut_out = (
                                                   (- (IData)(
                                                              ((IData)(vlSelf->top__DOT__instr_type) 
                                                               == 
                                                               vlSelf->top__DOT__i3__DOT__i0__DOT__key_list
                                                               [0U]))) 
                                                   & vlSelf->top__DOT__i3__DOT__i0__DOT__data_list
                                                   [0U]);
    vlSelf->top__DOT__i3__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__instr_type) 
                                               == vlSelf->top__DOT__i3__DOT__i0__DOT__key_list
                                               [0U]);
    vlSelf->top__DOT__i3__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i3__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i3__DOT__i0__DOT__key_list
                                                                  [1U]))) 
                                                      & vlSelf->top__DOT__i3__DOT__i0__DOT__data_list
                                                      [1U]));
    vlSelf->top__DOT__i3__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i3__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i3__DOT__i0__DOT__key_list
                                                  [1U]));
    vlSelf->top__DOT__i3__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i3__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i3__DOT__i0__DOT__key_list
                                                                  [2U]))) 
                                                      & vlSelf->top__DOT__i3__DOT__i0__DOT__data_list
                                                      [2U]));
    vlSelf->top__DOT__i3__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i3__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i3__DOT__i0__DOT__key_list
                                                  [2U]));
    vlSelf->top__DOT__i3__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i3__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i3__DOT__i0__DOT__key_list
                                                                  [3U]))) 
                                                      & vlSelf->top__DOT__i3__DOT__i0__DOT__data_list
                                                      [3U]));
    vlSelf->top__DOT__i3__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i3__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i3__DOT__i0__DOT__key_list
                                                  [3U]));
    vlSelf->top__DOT__i3__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i3__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i3__DOT__i0__DOT__key_list
                                                                  [4U]))) 
                                                      & vlSelf->top__DOT__i3__DOT__i0__DOT__data_list
                                                      [4U]));
    vlSelf->top__DOT__i3__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i3__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i3__DOT__i0__DOT__key_list
                                                  [4U]));
    vlSelf->top__DOT__i3__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i3__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i3__DOT__i0__DOT__key_list
                                                                  [5U]))) 
                                                      & vlSelf->top__DOT__i3__DOT__i0__DOT__data_list
                                                      [5U]));
    vlSelf->top__DOT__i3__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i3__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i3__DOT__i0__DOT__key_list
                                                  [5U]));
    vlSelf->top__DOT__i3__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i3__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i3__DOT__i0__DOT__key_list
                                                                  [6U]))) 
                                                      & vlSelf->top__DOT__i3__DOT__i0__DOT__data_list
                                                      [6U]));
    vlSelf->top__DOT__i3__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i3__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i3__DOT__i0__DOT__key_list
                                                  [6U]));
    vlSelf->top__DOT__i3__DOT__i0__DOT__lut_out = (vlSelf->top__DOT__i3__DOT__i0__DOT__lut_out 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->top__DOT__instr_type) 
                                                                  == 
                                                                  vlSelf->top__DOT__i3__DOT__i0__DOT__key_list
                                                                  [7U]))) 
                                                      & vlSelf->top__DOT__i3__DOT__i0__DOT__data_list
                                                      [7U]));
    vlSelf->top__DOT__i3__DOT__i0__DOT__hit = ((IData)(vlSelf->top__DOT__i3__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->top__DOT__instr_type) 
                                                  == 
                                                  vlSelf->top__DOT__i3__DOT__i0__DOT__key_list
                                                  [7U]));
    vlSelf->top__DOT__pc_next = ((IData)(vlSelf->top__DOT__i3__DOT__i0__DOT__hit)
                                  ? vlSelf->top__DOT__i3__DOT__i0__DOT__lut_out
                                  : ((IData)(4U) + vlSelf->top__DOT__pc));
}
