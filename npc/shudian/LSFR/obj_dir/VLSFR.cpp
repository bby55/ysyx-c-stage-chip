// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VLSFR.h"
#include "VLSFR__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VLSFR::VLSFR(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VLSFR__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , seal{vlSymsp->TOP.seal}
    , q{vlSymsp->TOP.q}
    , h1{vlSymsp->TOP.h1}
    , h0{vlSymsp->TOP.h0}
    , h2{vlSymsp->TOP.h2}
    , h3{vlSymsp->TOP.h3}
    , h4{vlSymsp->TOP.h4}
    , h5{vlSymsp->TOP.h5}
    , h6{vlSymsp->TOP.h6}
    , h7{vlSymsp->TOP.h7}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VLSFR::VLSFR(const char* _vcname__)
    : VLSFR(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VLSFR::~VLSFR() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VLSFR___024root___eval_debug_assertions(VLSFR___024root* vlSelf);
#endif  // VL_DEBUG
void VLSFR___024root___eval_static(VLSFR___024root* vlSelf);
void VLSFR___024root___eval_initial(VLSFR___024root* vlSelf);
void VLSFR___024root___eval_settle(VLSFR___024root* vlSelf);
void VLSFR___024root___eval(VLSFR___024root* vlSelf);

void VLSFR::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VLSFR::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VLSFR___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VLSFR___024root___eval_static(&(vlSymsp->TOP));
        VLSFR___024root___eval_initial(&(vlSymsp->TOP));
        VLSFR___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VLSFR___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VLSFR::eventsPending() { return false; }

uint64_t VLSFR::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VLSFR::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VLSFR___024root___eval_final(VLSFR___024root* vlSelf);

VL_ATTR_COLD void VLSFR::final() {
    VLSFR___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VLSFR::hierName() const { return vlSymsp->name(); }
const char* VLSFR::modelName() const { return "VLSFR"; }
unsigned VLSFR::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VLSFR::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VLSFR___024root__trace_init_top(VLSFR___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VLSFR___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VLSFR___024root*>(voidSelf);
    VLSFR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VLSFR___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VLSFR___024root__trace_register(VLSFR___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VLSFR::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VLSFR::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VLSFR___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
