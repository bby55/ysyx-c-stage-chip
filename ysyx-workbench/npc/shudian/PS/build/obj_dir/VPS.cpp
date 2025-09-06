// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VPS.h"
#include "VPS__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VPS::VPS(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VPS__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , ps2_clk{vlSymsp->TOP.ps2_clk}
    , ps2_data{vlSymsp->TOP.ps2_data}
    , num{vlSymsp->TOP.num}
    , ascii{vlSymsp->TOP.ascii}
    , h0{vlSymsp->TOP.h0}
    , h1{vlSymsp->TOP.h1}
    , h2{vlSymsp->TOP.h2}
    , h3{vlSymsp->TOP.h3}
    , h4{vlSymsp->TOP.h4}
    , h5{vlSymsp->TOP.h5}
    , cur_key{vlSymsp->TOP.cur_key}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VPS::VPS(const char* _vcname__)
    : VPS(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VPS::~VPS() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VPS___024root___eval_debug_assertions(VPS___024root* vlSelf);
#endif  // VL_DEBUG
void VPS___024root___eval_static(VPS___024root* vlSelf);
void VPS___024root___eval_initial(VPS___024root* vlSelf);
void VPS___024root___eval_settle(VPS___024root* vlSelf);
void VPS___024root___eval(VPS___024root* vlSelf);

void VPS::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPS::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VPS___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VPS___024root___eval_static(&(vlSymsp->TOP));
        VPS___024root___eval_initial(&(vlSymsp->TOP));
        VPS___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VPS___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VPS::eventsPending() { return false; }

uint64_t VPS::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VPS::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VPS___024root___eval_final(VPS___024root* vlSelf);

VL_ATTR_COLD void VPS::final() {
    VPS___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VPS::hierName() const { return vlSymsp->name(); }
const char* VPS::modelName() const { return "VPS"; }
unsigned VPS::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VPS::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VPS___024root__trace_init_top(VPS___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VPS___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPS___024root*>(voidSelf);
    VPS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VPS___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VPS___024root__trace_register(VPS___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VPS::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VPS::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VPS___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
