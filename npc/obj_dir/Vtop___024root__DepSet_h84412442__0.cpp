// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

extern "C" int pmem_read(int raddr, int valid);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ valid, IData/*31:0*/ &pmem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__pmem_read_TOP\n"); );
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

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask, IData/*31:0*/ pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__pmem_write_TOP\n"); );
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

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (vlSelf->top__DOT__rdata 
                                      != vlSelf->__Vtrigrprev__TOP__top__DOT__rdata);
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__top__DOT__rdata = vlSelf->top__DOT__rdata;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(0U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtop___024unit____Vdpiimwrap_display_TOP____024unit(IData/*31:0*/ instr, IData/*31:0*/ pc);

VL_INLINE_OPT void Vtop___024root___act_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__rd_data = (((((((((0U == (IData)(vlSelf->top__DOT__instr_type)) 
                                        | (1U == (IData)(vlSelf->top__DOT__instr_type))) 
                                       | (2U == (IData)(vlSelf->top__DOT__instr_type))) 
                                      | (3U == (IData)(vlSelf->top__DOT__instr_type))) 
                                     | (7U == (IData)(vlSelf->top__DOT__instr_type))) 
                                    | (5U == (IData)(vlSelf->top__DOT__instr_type))) 
                                   | (6U == (IData)(vlSelf->top__DOT__instr_type))) 
                                  | (8U == (IData)(vlSelf->top__DOT__instr_type)))
                                  ? ((0U == (IData)(vlSelf->top__DOT__instr_type))
                                      ? (vlSelf->top__DOT__rs1_data 
                                         + vlSelf->top__DOT__imm)
                                      : ((1U == (IData)(vlSelf->top__DOT__instr_type))
                                          ? ((IData)(4U) 
                                             + vlSelf->top__DOT__pc)
                                          : ((2U == (IData)(vlSelf->top__DOT__instr_type))
                                              ? vlSelf->top__DOT__rdata
                                              : ((3U 
                                                  == (IData)(vlSelf->top__DOT__instr_type))
                                                  ? vlSelf->top__DOT__rs2_data
                                                  : 
                                                 ((7U 
                                                   == (IData)(vlSelf->top__DOT__instr_type))
                                                   ? vlSelf->top__DOT__rs2_data
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->top__DOT__instr_type))
                                                    ? 
                                                   (vlSelf->top__DOT__rs1_data 
                                                    + vlSelf->top__DOT__rs2_data)
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->top__DOT__instr_type))
                                                     ? vlSelf->top__DOT__imm
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
                                                       & vlSelf->top__DOT__rdata))))))))))
                                  : 0U);
    Vtop___024unit____Vdpiimwrap_display_TOP____024unit(vlSelf->top__DOT__instr, vlSelf->top__DOT__pc);
    vlSelf->top__DOT__rdata = 0U;
    if (vlSelf->top__DOT__valid) {
        if (((2U == (IData)(vlSelf->top__DOT__instr_type)) 
             | (8U == (IData)(vlSelf->top__DOT__instr_type)))) {
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
                                                                     : 0U)), 
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
                                                                        : 0U))))), vlSelf->top__DOT__pc);
        }
    } else {
        vlSelf->top__DOT__rdata = 0U;
    }
}

void Vtop___024unit____Vdpiimwrap_display_ref__Vdpioc2_TOP____024unit(const VlUnpacked<IData/*31:0*/, 32> &rf);
void Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit(IData/*31:0*/ a0_val, IData/*31:0*/ exit_pc);
void Vtop___024unit____Vdpiimwrap_rom_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &rom_read__Vfuncrtn);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__u_regfile__DOT__rf__v0;
    __Vdlyvdim0__top__DOT__u_regfile__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__u_regfile__DOT__rf__v0;
    __Vdlyvval__top__DOT__u_regfile__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_regfile__DOT__rf__v0;
    __Vdlyvset__top__DOT__u_regfile__DOT__rf__v0 = 0;
    // Body
    Vtop___024unit____Vdpiimwrap_display_ref__Vdpioc2_TOP____024unit(vlSelf->top__DOT__u_regfile__DOT__rf);
    __Vdlyvset__top__DOT__u_regfile__DOT__rf__v0 = 0U;
    if ((0x100073U == vlSelf->top__DOT__instr)) {
        Vtop___024unit____Vdpiimwrap_ebreak_TOP____024unit(
                                                           vlSelf->top__DOT__u_regfile__DOT__rf
                                                           [0xaU], vlSelf->top__DOT__pc);
    }
    if (((IData)(vlSelf->top__DOT__wen) & (0U != (0x1fU 
                                                  & (vlSelf->top__DOT__instr 
                                                     >> 7U))))) {
        __Vdlyvval__top__DOT__u_regfile__DOT__rf__v0 
            = vlSelf->top__DOT__rd_data;
        __Vdlyvset__top__DOT__u_regfile__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top__DOT__u_regfile__DOT__rf__v0 
            = (0x1fU & (vlSelf->top__DOT__instr >> 7U));
    }
    if (__Vdlyvset__top__DOT__u_regfile__DOT__rf__v0) {
        vlSelf->top__DOT__u_regfile__DOT__rf[__Vdlyvdim0__top__DOT__u_regfile__DOT__rf__v0] 
            = __Vdlyvval__top__DOT__u_regfile__DOT__rf__v0;
    }
    vlSelf->top__DOT__pc = ((IData)(vlSelf->reset) ? 0x80000000U
                             : vlSelf->top__DOT__pc_next);
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
                                                          << 2U), vlSelf->__Vfunc_rom_read__0__Vfuncout);
    vlSelf->top__DOT__instr = vlSelf->__Vfunc_rom_read__0__Vfuncout;
    vlSelf->top__DOT__i1__DOT__i0__DOT__pair_list[2U] 
        = ((QData)((IData)((0x600000U | (vlSelf->top__DOT__instr 
                                         >> 0xcU)))) 
           << 0xcU);
    vlSelf->top__DOT__rs2_data = ((0U == (0x1fU & (vlSelf->top__DOT__instr 
                                                   >> 0x14U)))
                                   ? 0U : vlSelf->top__DOT__u_regfile__DOT__rf
                                  [(0x1fU & (vlSelf->top__DOT__instr 
                                             >> 0x14U))]);
    vlSelf->top__DOT__I_ex = (((- (IData)((vlSelf->top__DOT__instr 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->top__DOT__instr 
                                           >> 0x14U));
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
    vlSelf->top__DOT__rs1_data = ((0U == (0x1fU & (vlSelf->top__DOT__instr 
                                                   >> 0xfU)))
                                   ? 0U : vlSelf->top__DOT__u_regfile__DOT__rf
                                  [(0x1fU & (vlSelf->top__DOT__instr 
                                             >> 0xfU))]);
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
    vlSelf->top__DOT____VdfgTmp_ha2850746__0 = ((IData)(vlSelf->top__DOT__wen_ram)
                                                 ? 
                                                (3U 
                                                 & vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0)
                                                 : 0U);
    vlSelf->top__DOT__u_alu__DOT__byte_idx = ((IData)(vlSelf->top__DOT__valid)
                                               ? (3U 
                                                  & vlSelf->top__DOT____VdfgTmp_h2f2dbb37__0)
                                               : 0U);
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
