#include <nvboard.h>
#include "VLSFR.h"

void nvboard_bind_all_pins(VLSFR* top) {
	nvboard_bind_pin( &top->q, 7, LD7, LD6, LD5, LD4, LD3, LD2, LD1);
	nvboard_bind_pin( &top->h0, 7, SEG0G, SEG0F, SEG0E, SEG0D, SEG0C, SEG0B, SEG0A);
	nvboard_bind_pin( &top->h1, 7, SEG1G, SEG1F, SEG1E, SEG1D, SEG1C, SEG1B, SEG1A);
	nvboard_bind_pin( &top->seal, 1, BTNC);
}
