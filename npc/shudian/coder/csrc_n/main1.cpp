#include "verilated.h"
#include "Vcoder.h"
#include "verilated_vcd_c.h"


vluint64_t sim_time = 0;

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
static Vcoder* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}

void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vcoder;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("dump.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}

int main(int argc, char *argv[])
{
		sim_init();
		while(sim_time <= 10){
			int a = rand()&15;
			top->in = a;
			top->en = 1;
			step_and_dump_wave();
			printf("in = %d out = %d\n",top->in ,top->out);
			sim_time++;
			}
			sim_exit();
}
