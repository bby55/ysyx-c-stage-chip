#include "verilated.h"
#include "Vtop.h"
#include "verilated_vcd_c.h"

vluint64_t sim_time = 0;

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
static Vtop* top;


void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}

void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vtop;
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
	while (sim_time < 10){ 
		int x = rand() & 1;
		int y = rand() & 1;
		top->a=x;
		top->b=y;
		step_and_dump_wave();
		sim_time++;
	}
		sim_exit();
}

