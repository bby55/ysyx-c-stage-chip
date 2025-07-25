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

void Vtop___024unit____Vdpiimwrap_rom_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &rom_read__Vfuncrtn);
void Vtop___024root____Vdpiimwrap_top__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    Vtop___024unit____Vdpiimwrap_rom_read_TOP____024unit(
                                                         ((vlSelf->top__DOT__pc 
                                                           - (IData)(0x80000000U)) 
                                                          >> 2U), vlSelf->__Vfunc_rom_read__0__Vfuncout);
    vlSelf->top__DOT__instr = vlSelf->__Vfunc_rom_read__0__Vfuncout;
    vlSelf->top__DOT__i1__DOT__i0__DOT__pair_list[2U] 
        = ((QData)((IData)((0x600000U | (vlSelf->top__DOT__instr 
                                         >> 0xcU)))) 
           << 0xcU);
    Vtop___024root____Vdpiimwrap_top__DOT__pmem_read_TOP(
                                                         (0x7cU 
                                                          & (vlSelf->top__DOT__instr 
                                                             >> 0xdU)), vlSelf->__Vfunc_top__DOT__pmem_read__3__Vfuncout);
    vlSelf->top__DOT____VdfgExtracted_h4a41356a__0 
        = vlSelf->__Vfunc_top__DOT__pmem_read__3__Vfuncout;
    vlSelf->top__DOT__rs2_data = ((0U == (0x1fU & (vlSelf->top__DOT__instr 
                                                   >> 0x14U)))
                                   ? 0U : vlSelf->top__DOT__u_regfile__DOT__rf
                                  [(0x1fU & (vlSelf->top__DOT__instr 
                                             >> 0x14U))]);
    vlSelf->top__DOT__I_ex = (((- (IData)((vlSelf->top__DOT__instr 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->top__DOT__instr 
                                           >> 0x14U));
    vlSelf->top__DOT__rs1_data = ((0U == (0x1fU & (vlSelf->top__DOT__instr 
                                                   >> 0xfU)))
                                   ? 0U : vlSelf->top__DOT__u_regfile__DOT__rf
                                  [(0x1fU & (vlSelf->top__DOT__instr 
                                             >> 0xfU))]);
    vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((vlSelf->top__DOT__instr >> 0x1fU))) 
            << 0xcU) | (vlSelf->top__DOT__instr >> 0x14U));
    vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[2U] 
        = (0xfffff000U & vlSelf->top__DOT__instr);
    vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((vlSelf->top__DOT__instr >> 0x1fU))) 
            << 0xcU) | (vlSelf->top__DOT__instr >> 0x14U));
    vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[6U] 
        = (((- (IData)((vlSelf->top__DOT__instr >> 0x1fU))) 
            << 0xcU) | (vlSelf->top__DOT__instr >> 0x14U));
    vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[7U] 
        = (((- (IData)((vlSelf->top__DOT__instr >> 0x1fU))) 
            << 0xcU) | (vlSelf->top__DOT__instr >> 0x14U));
    vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[8U] 
        = (((- (IData)((vlSelf->top__DOT__instr >> 0x1fU))) 
            << 0xcU) | (vlSelf->top__DOT__instr >> 0x14U));
    vlSelf->top__DOT__opcode_funct3 = ((0x3f8U & (vlSelf->top__DOT__instr 
                                                  << 3U)) 
                                       | (7U & (vlSelf->top__DOT__instr 
                                                >> 0xcU)));
    vlSelf->top__DOT__S_imm = ((0xfe0U & (vlSelf->top__DOT__instr 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->top__DOT__instr 
                                           >> 7U)));
    vlSelf->top__DOT__i1__DOT__i0__DOT__pair_list[0U] 
        = (0x800000000ULL | (QData)((IData)(vlSelf->top__DOT__I_ex)));
    vlSelf->top__DOT__i1__DOT__i0__DOT__pair_list[4U] 
        = (0x400000000ULL | (QData)((IData)(vlSelf->top__DOT__I_ex)));
    vlSelf->top__DOT__i1__DOT__i0__DOT__pair_list[6U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->top__DOT__I_ex)));
    vlSelf->top__DOT__i1__DOT__i0__DOT__pair_list[7U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->top__DOT__I_ex)));
    vlSelf->top__DOT__i1__DOT__i0__DOT__pair_list[8U] 
        = (QData)((IData)(vlSelf->top__DOT__I_ex));
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
    vlSelf->top__DOT__instr_type_tmp = ((IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__hit)
                                         ? (IData)(vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out)
                                         : 0U);
    vlSelf->top__DOT__S_ex = (((- (IData)((vlSelf->top__DOT__instr 
                                           >> 0x1fU))) 
                               << 0xcU) | (IData)(vlSelf->top__DOT__S_imm));
    vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->top__DOT__instr >> 0x1fU))) 
            << 0xcU) | (IData)(vlSelf->top__DOT__S_imm));
    vlSelf->top__DOT__i1__DOT__i0__DOT__data_list[5U] 
        = (((- (IData)((vlSelf->top__DOT__instr >> 0x1fU))) 
            << 0xcU) | (IData)(vlSelf->top__DOT__S_imm));
    vlSelf->top__DOT__instr_type = ((0x37U == (0x7fU 
                                               & vlSelf->top__DOT__instr))
                                     ? 6U : (IData)(vlSelf->top__DOT__instr_type_tmp));
    vlSelf->top__DOT__i1__DOT__i0__DOT__pair_list[1U] 
        = (0x700000000ULL | (QData)((IData)(vlSelf->top__DOT__S_ex)));
    vlSelf->top__DOT__i1__DOT__i0__DOT__pair_list[5U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->top__DOT__S_ex)));
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
    vlSelf->top__DOT__imm = ((IData)(vlSelf->top__DOT__i1__DOT__i0__DOT__hit)
                              ? vlSelf->top__DOT__i1__DOT__i0__DOT__lut_out
                              : 0U);
    vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0 = (vlSelf->top__DOT__imm 
                                                + vlSelf->top__DOT__rs1_data);
    vlSelf->top__DOT__i3__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(((0x80000000U 
                                              > vlSelf->top__DOT__rs1_data)
                                              ? ((IData)(0x80000000U) 
                                                 + vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0)
                                              : vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0))));
    vlSelf->top__DOT__i3__DOT__i0__DOT__data_list[0U] 
        = ((0x80000000U > vlSelf->top__DOT__rs1_data)
            ? ((IData)(0x80000000U) + vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0)
            : vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0);
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
    vlSelf->top__DOT__pc_next = ((IData)(vlSelf->top__DOT__i3__DOT__i0__DOT__hit)
                                  ? vlSelf->top__DOT__i3__DOT__i0__DOT__lut_out
                                  : ((IData)(4U) + vlSelf->top__DOT__pc));
}
