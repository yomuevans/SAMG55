
/**
 * \mainpage
 * \section intro Introduction
 * This example demonstrates how to use the common IOPORT service for port
 * control.
 *
 * \section files Main Files
 *  - ioport.h common gpio definitions
 *  - ioport_example1.c example application
 *  - conf_example.h example definitions
 *
 * \section ioport_service_section services/ioport/ioport.h
 * This example flashes a single LEDs present with flash speed of 1Hz.
 *
 * Additionally a pin input can inspected from a debug session. 
 */
#include <asf.h>
#include "conf_example.h"
#include "delay.h"

int main (void)
{
	/* Use static volatile to make it available in debug watch */
	static volatile bool pin_val;
	
	board_init();
	sysclk_init();
	ioport_init();
	
	
	delay_init(sysclk_get_cpu_hz());

	/* Set output direction on the given LED IOPORTs */
	ioport_set_pin_dir(EXAMPLE_LED, IOPORT_DIR_OUTPUT);

	/* Set direction and pullup on the given button IOPORT */
	ioport_set_pin_dir(EXAMPLE_BUTTON, IOPORT_DIR_INPUT);
	ioport_set_pin_mode(EXAMPLE_BUTTON, IOPORT_MODE_PULLUP);

	/* Set LED IOPORTs high */
	ioport_set_pin_level(EXAMPLE_LED, IOPORT_PIN_LEVEL_HIGH);

	while (true) {
		/* Toggle LED IOPORTs with half a second interval */
		ioport_toggle_pin_level(EXAMPLE_LED);
		delay_ms(500);

		/* Get value from button port */
		/* Use watch with debugger to see it */
		pin_val = ioport_get_pin_level(EXAMPLE_BUTTON);
	}

		
}
