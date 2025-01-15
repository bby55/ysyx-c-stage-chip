#include <nvboard.h>
#include "verilated.h"
#include "VPS.h"
#include "verilated_vcd_c.h"

static TOP_NAME dut;

void nvboard_bind_all_pins(TOP_NAME* top);

static void single_cycle() {
     dut.clk = 0; dut.eval();
     dut.clk = 1; dut.eval();
  }

static void reset(int n) {
   dut.rst = 1;
   while (n -- > 0) single_cycle();
   dut.rst = 0;
 }

vluint64_t sim_time = 0;

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
static VPS* top;


void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}


void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new VPS;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("dump.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}

int main(int argc, char *argv[]){
	sim_init();
  nvboard_bind_all_pins(&dut);
  nvboard_init();
 
  reset(10);

	while (sim_time < 1000000){ 

		/*int x = rand()&1;
		int y = rand()&1;
		top->clk ^= 1;
		top->rst = 1;*/
	  nvboard_update();
    single_cycle();

		step_and_dump_wave();
		sim_time++;
	}
		sim_exit();
}
