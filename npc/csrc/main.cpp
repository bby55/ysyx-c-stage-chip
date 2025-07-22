#include <nvboard.h>
#include "verilated.h"
#include "Vcpu.h"
#include "verilated_vcd_c.h"

//static TOP_NAME dut;

static Vcpu* top;
void nvboard_bind_all_pins(Vcpu* top);

static void single_cycle() {
     top->clk = 0; top->eval();
     top->clk = 1; top->eval();
  }

static void reset(int n) {
   top->rst = 1;
   while (n -- > 0) single_cycle();
   top->rst = 0;
 }

vluint64_t sim_time = 0;

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;


void step_and_dump_wave(){
  top->clk ^= 1;
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}


void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vcpu;
  contextp->traceEverOn(true);
  top->trace(tfp, 5);
  tfp->open("dump.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}

int main(int argc, char *argv[]){
	sim_init();
  nvboard_bind_all_pins(top);
  nvboard_init();
 
  reset(10);

	while (/*sim_time < 1000000 sim_time < 100000000/2*/1){ 

		/*int x = rand()&1;
		int y = rand()&1;
		top->clk ^= 1;
		top->rst = 1;*/
	  nvboard_update();

		step_and_dump_wave();
		sim_time++;
	}
		sim_exit();
}
