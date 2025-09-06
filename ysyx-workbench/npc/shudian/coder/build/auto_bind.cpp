#include <nvboard.h>
#include "Vcoder.h"

void nvboard_bind_all_pins(Vcoder* top) {
	nvboard_bind_pin( &top->in, 8, SW7, SW6, SW5, SW4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->en, 1, SW8);
	nvboard_bind_pin( &top->out, 3, LD2, LD1, LD0);
	nvboard_bind_pin( &top->seal, 1, LD3);
	nvboard_bind_pin( &top->h, 7, SEG5G, SEG5F, SEG5E, SEG5D, SEG5C, SEG5B, SEG5A);
	nvboard_bind_pin( &top->h0, 7, SEG0G, SEG0F, SEG0E, SEG0D, SEG0C, SEG0B, SEG0A);
	nvboard_bind_pin( &top->h1, 7, SEG1G, SEG1F, SEG1E, SEG1D, SEG1C, SEG1B, SEG1A);
	nvboard_bind_pin( &top->h2, 7, SEG2G, SEG2F, SEG2E, SEG2D, SEG2C, SEG2B, SEG2A);
	nvboard_bind_pin( &top->h3, 7, SEG3G, SEG3F, SEG3E, SEG3D, SEG3C, SEG3B, SEG3A);
}
