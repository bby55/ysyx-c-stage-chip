#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

VerilatedContext* contextp;
#if CONFIG_WAVE
VerilatedVcdC* tfp;
#endif
VRv32e* top;

void sim_init(){
    contextp = new VerilatedContext;
    #if CONFIG_WAVE
    tfp = new VerilatedVcdC;
    #endif
    top = new VRv32e;
    #if CONFIG_WAVE
    contextp->traceEverOn(true);
    top->trace(tfp,0);
    tfp->open("/home/ysyxbby/ysyx-workbench/npc/build/wave.vcd");
    #endif
}

void sim_exit(){
    step_and_dump_wave();
    #if CONFIG_WAVE
    tfp->close();
    #endif
}

void engine_start() {
    top->clock = 0;
    top->reset_n = 0;
    step_and_dump_wave();
    top->clock = 1;
    step_and_dump_wave();
    top->reset_n = 1;
    top->clock = 0;
    step_and_dump_wave();
}

int main(int argc, char *argv[]){
    init_sim();
    
    //init_monitor(argc, argv);

    engine_start();
    
    //sdb_mainloop();

    sim_exit();
    return 0;
}