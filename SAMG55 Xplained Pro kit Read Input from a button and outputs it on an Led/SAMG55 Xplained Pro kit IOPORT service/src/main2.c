
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
 * The common IOPORT service is described in
 * \ref ioport_group section.
  - SAMG55 Xplained Pro kit
 * \section example_description Description of the example
 * This example reads input from a button and outputs it on a LED. 
 */
#include <asf.h>
#include "conf_example.h"
#include "delay.h"

int main (void)
{
	
	board_init();
	sysclk_init();
	ioport_init();
	
	
	/* Set output direction on the given LED IOPORTs */
	ioport_set_pin_dir(EXAMPLE_LED, IOPORT_DIR_OUTPUT);
	
	/* Set direction and pullup on the given button IOPORT */
	ioport_set_pin_dir(EXAMPLE_BUTTON, IOPORT_DIR_INPUT);
	ioport_set_pin_mode(EXAMPLE_BUTTON, IOPORT_MODE_PULLUP);


	while (true) 
	{
		
		/* Get value from button and output it on led */
		ioport_set_pin_level(EXAMPLE_LED,ioport_get_pin_level(EXAMPLE_BUTTON));

	}

		
}
