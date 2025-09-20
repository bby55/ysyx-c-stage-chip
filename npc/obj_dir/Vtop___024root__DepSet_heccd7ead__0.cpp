// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

void Vtop___024root____Vdpiimwrap_top__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ valid, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vtop___024root____Vdpiimwrap_top__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask, IData/*31:0*/ pc);

VL_INLINE_OPT void Vtop___024root___act_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__0\n"); );
    // Body
    if ((0x800U & (IData)(vlSelf->top__DOT__instr_type))) {
        vlSelf->top__DOT__rd_data = 0U;
    } else if ((0x400U & (IData)(vlSelf->top__DOT__instr_type))) {
        vlSelf->top__DOT__rd_data = 0U;
    } else if ((0x200U & (IData)(vlSelf->top__DOT__instr_type))) {
        vlSelf->top__DOT__rd_data = 0U;
    } else if ((0x100U & (IData)(vlSelf->top__DOT__instr_type))) {
        vlSelf->top__DOT__rd_data = 0U;
    } else if ((0x80U & (IData)(vlSelf->top__DOT__instr_type))) {
        vlSelf->top__DOT__rd_data = 0U;
    } else if ((0x40U & (IData)(vlSelf->top__DOT__instr_type))) {
        vlSelf->top__DOT__rd_data = 0U;
    } else if ((0x20U & (IData)(vlSelf->top__DOT__instr_type))) {
        if ((0x10U & (IData)(vlSelf->top__DOT__instr_type))) {
            vlSelf->top__DOT__rd_data = 0U;
        } else if ((8U & (IData)(vlSelf->top__DOT__instr_type))) {
            vlSelf->top__DOT__rd_data = 0U;
        } else if ((4U & (IData)(vlSelf->top__DOT__instr_type))) {
            vlSelf->top__DOT__rd_data = ((2U & (IData)(vlSelf->top__DOT__instr_type))
                                          ? ((1U & (IData)(vlSelf->top__DOT__instr_type))
                                              ? 0U : vlSelf->top__DOT__t)
                                          : ((1U & (IData)(vlSelf->top__DOT__instr_type))
                                              ? vlSelf->top__DOT__t
                                              : 0U));
        } else if ((2U & (IData)(vlSelf->top__DOT__instr_type))) {
            vlSelf->top__DOT__rd_data = ((1U & (IData)(vlSelf->top__DOT__instr_type))
                                          ? ((2U & (IData)(vlSelf->top__DOT__u_alu__DOT__byte_idx))
                                              ? ((1U 
                                                  & (IData)(vlSelf->top__DOT__u_alu__DOT__byte_idx))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelf->top__DOT__rdata 
                                                               >> 0x1fU))) 
                                                   << 8U) 
                                                  | (vlSelf->top__DOT__rdata 
                                                     >> 0x18U))
                                                  : 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->top__DOT__rdata 
                                                                  >> 0x17U)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & (vlSelf->top__DOT__rdata 
                                                        >> 0x10U))))
                                              : ((1U 
                                                  & (IData)(vlSelf->top__DOT__u_alu__DOT__byte_idx))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->top__DOT__rdata 
                                                                  >> 0xfU)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & (vlSelf->top__DOT__rdata 
                                                        >> 8U)))
                                                  : 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->top__DOT__rdata 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & vlSelf->top__DOT__rdata))))
                                          : (vlSelf->top__DOT__rs1_data 
                                             >> (0x1fU 
                                                 & vlSelf->top__DOT__rs2_data)));
        } else if ((1U & (IData)(vlSelf->top__DOT__instr_type))) {
            vlSelf->top__DOT__rd_data = VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__rs1_data, 
                                                       (0x1fU 
                                                        & vlSelf->top__DOT__rs2_data));
        } else if ((2U & (IData)(vlSelf->top__DOT__u_alu__DOT__byte_idx))) {
            if ((2U & (IData)(vlSelf->top__DOT__u_alu__DOT__byte_idx))) {
                vlSelf->top__DOT__rd_data = (vlSelf->top__DOT__rdata 
                                             >> 0x10U);
            }
        } else {
            vlSelf->top__DOT__rd_data = (0xffffU & vlSelf->top__DOT__rdata);
        }
    } else if ((0x10U & (IData)(vlSelf->top__DOT__instr_type))) {
        if ((8U & (IData)(vlSelf->top__DOT__instr_type))) {
            if ((4U & (IData)(vlSelf->top__DOT__instr_type))) {
                if ((2U & (IData)(vlSelf->top__DOT__instr_type))) {
                    if ((1U & (IData)(vlSelf->top__DOT__instr_type))) {
                        if ((2U & (IData)(vlSelf->top__DOT__u_alu__DOT__byte_idx))) {
                            if ((2U & (IData)(vlSelf->top__DOT__u_alu__DOT__byte_idx))) {
                                vlSelf->top__DOT__rd_data 
                                    = (((- (IData)(
                                                   (vlSelf->top__DOT__rdata 
                                                    >> 0x1fU))) 
                                        << 0x10U) | 
                                       (vlSelf->top__DOT__rdata 
                                        >> 0x10U));
                            }
                        } else {
                            vlSelf->top__DOT__rd_data 
                                = (((- (IData)((1U 
                                                & (vlSelf->top__DOT__rdata 
                                                   >> 0xfU)))) 
                                    << 0x10U) | (0xffffU 
                                                 & vlSelf->top__DOT__rdata));
                        }
                    } else {
                        vlSelf->top__DOT__rd_data = 
                            ((vlSelf->top__DOT__rs1_data 
                              < vlSelf->top__DOT__imm)
                              ? 1U : 0U);
                    }
                } else {
                    vlSelf->top__DOT__rd_data = ((1U 
                                                  & (IData)(vlSelf->top__DOT__instr_type))
                                                  ? 
                                                 (VL_LTS_III(32, vlSelf->top__DOT__rs1_data, vlSelf->top__DOT__rs2_data)
                                                   ? 1U
                                                   : 0U)
                                                  : 0U);
                }
            } else {
                vlSelf->top__DOT__rd_data = ((2U & (IData)(vlSelf->top__DOT__instr_type))
                                              ? ((1U 
                                                  & (IData)(vlSelf->top__DOT__instr_type))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->top__DOT__rs1_data 
                                                  ^ vlSelf->top__DOT__rs2_data))
                                              : ((1U 
                                                  & (IData)(vlSelf->top__DOT__instr_type))
                                                  ? 
                                                 (vlSelf->top__DOT__rs1_data 
                                                  >> 
                                                  (0x1fU 
                                                   & vlSelf->top__DOT__imm))
                                                  : 0U));
            }
        } else {
            vlSelf->top__DOT__rd_data = ((4U & (IData)(vlSelf->top__DOT__instr_type))
                                          ? ((2U & (IData)(vlSelf->top__DOT__instr_type))
                                              ? ((1U 
                                                  & (IData)(vlSelf->top__DOT__instr_type))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->top__DOT__rs1_data 
                                                  ^ vlSelf->top__DOT__imm))
                                              : ((1U 
                                                  & (IData)(vlSelf->top__DOT__instr_type))
                                                  ? 
                                                 (vlSelf->top__DOT__rs1_data 
                                                  | vlSelf->top__DOT__rs2_data)
                                                  : 
                                                 ((vlSelf->top__DOT__rs1_data 
                                                   < vlSelf->top__DOT__rs2_data)
                                                   ? 1U
                                                   : 0U)))
                                          : ((2U & (IData)(vlSelf->top__DOT__instr_type))
                                              ? ((1U 
                                                  & (IData)(vlSelf->top__DOT__instr_type))
                                                  ? 
                                                 (vlSelf->top__DOT__rs1_data 
                                                  & vlSelf->top__DOT__rs2_data)
                                                  : 
                                                 (vlSelf->top__DOT__rs1_data 
                                                  << 
                                                  (0x1fU 
                                                   & vlSelf->top__DOT__rs2_data)))
                                              : ((1U 
                                                  & (IData)(vlSelf->top__DOT__instr_type))
                                                  ? 
                                                 (vlSelf->top__DOT__rs1_data 
                                                  & vlSelf->top__DOT__imm)
                                                  : vlSelf->top__DOT__rs2_data)));
        }
    } else {
        vlSelf->top__DOT__rd_data = ((8U & (IData)(vlSelf->top__DOT__instr_type))
                                      ? ((4U & (IData)(vlSelf->top__DOT__instr_type))
                                          ? ((2U & (IData)(vlSelf->top__DOT__instr_type))
                                              ? ((1U 
                                                  & (IData)(vlSelf->top__DOT__instr_type))
                                                  ? 
                                                 VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__rs1_data, 
                                                                (0x1fU 
                                                                 & vlSelf->top__DOT__imm))
                                                  : 0U)
                                              : ((1U 
                                                  & (IData)(vlSelf->top__DOT__instr_type))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->top__DOT__rs1_data 
                                                  - vlSelf->top__DOT__rs2_data)))
                                          : ((2U & (IData)(vlSelf->top__DOT__instr_type))
                                              ? ((1U 
                                                  & (IData)(vlSelf->top__DOT__instr_type))
                                                  ? 
                                                 (vlSelf->top__DOT__rs1_data 
                                                  << 
                                                  (0x1fU 
                                                   & vlSelf->top__DOT__imm))
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelf->top__DOT__pc))
                                              : ((1U 
                                                  & (IData)(vlSelf->top__DOT__instr_type))
                                                  ? 
                                                 (vlSelf->top__DOT__pc 
                                                  + vlSelf->top__DOT__imm)
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__u_alu__DOT__byte_idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__u_alu__DOT__byte_idx))
                                                    ? 
                                                   (vlSelf->top__DOT__rdata 
                                                    >> 0x18U)
                                                    : 
                                                   (0xffU 
                                                    & (vlSelf->top__DOT__rdata 
                                                       >> 0x10U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__u_alu__DOT__byte_idx))
                                                    ? 
                                                   (0xffU 
                                                    & (vlSelf->top__DOT__rdata 
                                                       >> 8U))
                                                    : 
                                                   (0xffU 
                                                    & vlSelf->top__DOT__rdata))))))
                                      : ((4U & (IData)(vlSelf->top__DOT__instr_type))
                                          ? ((2U & (IData)(vlSelf->top__DOT__instr_type))
                                              ? ((1U 
                                                  & (IData)(vlSelf->top__DOT__instr_type))
                                                  ? vlSelf->top__DOT__rs2_data
                                                  : vlSelf->top__DOT__imm)
                                              : ((1U 
                                                  & (IData)(vlSelf->top__DOT__instr_type))
                                                  ? 
                                                 (vlSelf->top__DOT__rs1_data 
                                                  + vlSelf->top__DOT__rs2_data)
                                                  : 0U))
                                          : ((2U & (IData)(vlSelf->top__DOT__instr_type))
                                              ? ((1U 
                                                  & (IData)(vlSelf->top__DOT__instr_type))
                                                  ? vlSelf->top__DOT__rs2_data
                                                  : vlSelf->top__DOT__rdata)
                                              : ((1U 
                                                  & (IData)(vlSelf->top__DOT__instr_type))
                                                  ? 
                                                 ((IData)(4U) 
                                                  + vlSelf->top__DOT__pc)
                                                  : 
                                                 (vlSelf->top__DOT__rs1_data 
                                                  + vlSelf->top__DOT__imm)))));
    }
    vlSelf->top__DOT__rdata = 0U;
    if (vlSelf->top__DOT__valid) {
        if (((2U == (IData)(vlSelf->top__DOT__instr_type)) 
             | ((8U == (IData)(vlSelf->top__DOT__instr_type)) 
                | ((0x1fU == (IData)(vlSelf->top__DOT__instr_type)) 
                   | ((0x20U == (IData)(vlSelf->top__DOT__instr_type)) 
                      | (0x23U == (IData)(vlSelf->top__DOT__instr_type))))))) {
            Vtop___024root____Vdpiimwrap_top__DOT__pmem_read_TOP(
                                                                 (((IData)(vlSelf->top__DOT__valid)
                                                                    ? vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0
                                                                    : 0x80000000U) 
                                                                  - (IData)(0x80000000U)), 
                                                                 (- (IData)((IData)(vlSelf->top__DOT__valid))), vlSelf->__Vfunc_top__DOT__pmem_read__2__Vfuncout);
            vlSelf->top__DOT__rdata = vlSelf->__Vfunc_top__DOT__pmem_read__2__Vfuncout;
        }
        if (vlSelf->top__DOT__wen_ram) {
            Vtop___024root____Vdpiimwrap_top__DOT__pmem_write_TOP(
                                                                  (((IData)(vlSelf->top__DOT__wen_ram)
                                                                     ? vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0
                                                                     : 0x80000000U) 
                                                                   - (IData)(0x80000000U)), 
                                                                  ((3U 
                                                                    == (IData)(vlSelf->top__DOT__instr_type))
                                                                    ? vlSelf->top__DOT__rd_data
                                                                    : 
                                                                   ((0x10U 
                                                                     == (IData)(vlSelf->top__DOT__instr_type))
                                                                     ? 
                                                                    ((IData)(vlSelf->top__DOT____VdfgTmp_hb37fddff__0)
                                                                      ? 
                                                                     (vlSelf->top__DOT__rd_data 
                                                                      << 0x10U)
                                                                      : 
                                                                     (0xffffU 
                                                                      & vlSelf->top__DOT__rd_data))
                                                                     : 
                                                                    ((7U 
                                                                      == (IData)(vlSelf->top__DOT__instr_type))
                                                                      ? 
                                                                     ((0U 
                                                                       == (IData)(vlSelf->top__DOT____VdfgTmp_ha2850746__0))
                                                                       ? 
                                                                      (0xffU 
                                                                       & vlSelf->top__DOT__rd_data)
                                                                       : 
                                                                      ((1U 
                                                                        == (IData)(vlSelf->top__DOT____VdfgTmp_ha2850746__0))
                                                                        ? 
                                                                       (0xff00U 
                                                                        & (vlSelf->top__DOT__rd_data 
                                                                           << 8U))
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->top__DOT____VdfgTmp_ha2850746__0))
                                                                         ? 
                                                                        (0xff0000U 
                                                                         & (vlSelf->top__DOT__rd_data 
                                                                            << 0x10U))
                                                                         : 
                                                                        (vlSelf->top__DOT__rd_data 
                                                                         << 0x18U))))
                                                                      : 0U))), 
                                                                  ((0x10U 
                                                                    == (IData)(vlSelf->top__DOT__instr_type))
                                                                    ? 
                                                                   ((IData)(vlSelf->top__DOT____VdfgTmp_hb37fddff__0)
                                                                     ? 0xcU
                                                                     : 3U)
                                                                    : 
                                                                   ((3U 
                                                                     == (IData)(vlSelf->top__DOT__instr_type))
                                                                     ? 0xfU
                                                                     : 
                                                                    ((0U 
                                                                      == (IData)(vlSelf->top__DOT____VdfgTmp_ha2850746__0))
                                                                      ? 1U
                                                                      : 
                                                                     ((1U 
                                                                       == (IData)(vlSelf->top__DOT____VdfgTmp_ha2850746__0))
                                                                       ? 2U
                                                                       : 
                                                                      ((2U 
                                                                        == (IData)(vlSelf->top__DOT____VdfgTmp_ha2850746__0))
                                                                        ? 4U
                                                                        : 
                                                                       ((3U 
                                                                         == (IData)(vlSelf->top__DOT____VdfgTmp_ha2850746__0))
                                                                         ? 8U
                                                                         : 0U)))))), vlSelf->top__DOT__pc);
        }
    } else {
        vlSelf->top__DOT__rdata = 0U;
    }
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0U)) {
        Vtop___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vtop___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/top.v", 17, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/top.v", 17, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
