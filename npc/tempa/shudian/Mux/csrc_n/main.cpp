#include "verilated.h"
#include "Vmux.h"
#include "verilated_vcd_c.h"

vluint64_t sim_time = 0;

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
static Vmux* top;


void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}

void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vmux;
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
		int a = rand() & 3;
		top->x0=0b00;
		top->x1=0b01;
		top->x2=0b10;
		top->x3=0b11;
		top->s=a;
		step_and_dump_wave();
		printf("s = %d y = %d\n", top->s ,top->y);
		sim_time++;
	}
		sim_exit();
}
