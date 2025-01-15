// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmux.h"
#include "Vmux__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmux::Vmux(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmux__Syms(contextp(), _vcname__, this)}
    , x0{vlSymsp->TOP.x0}
    , x1{vlSymsp->TOP.x1}
    , x2{vlSymsp->TOP.x2}
    , x3{vlSymsp->TOP.x3}
    , s{vlSymsp->TOP.s}
    , y{vlSymsp->TOP.y}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmux::Vmux(const char* _vcname__)
    : Vmux(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmux::~Vmux() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmux___024root___eval_debug_assertions(Vmux___024root* vlSelf);
#endif  // VL_DEBUG
void Vmux___024root___eval_static(Vmux___024root* vlSelf);
void Vmux___024root___eval_initial(Vmux___024root* vlSelf);
void Vmux___024root___eval_settle(Vmux___024root* vlSelf);
void Vmux___024root___eval(Vmux___024root* vlSelf);

void Vmux::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmux::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmux___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmux___024root___eval_static(&(vlSymsp->TOP));
        Vmux___024root___eval_initial(&(vlSymsp->TOP));
        Vmux___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmux___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmux::eventsPending() { return false; }

uint64_t Vmux::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmux::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmux___024root___eval_final(Vmux___024root* vlSelf);

VL_ATTR_COLD void Vmux::final() {
    Vmux___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmux::hierName() const { return vlSymsp->name(); }
const char* Vmux::modelName() const { return "Vmux"; }
unsigned Vmux::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vmux::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vmux___024root__trace_init_top(Vmux___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmux___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux___024root*>(voidSelf);
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vmux___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vmux___024root__trace_register(Vmux___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmux::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vmux::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmux___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
