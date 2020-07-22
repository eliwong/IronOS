/*
 * BSP_PD.c
 *
 *  Created on: 21 Jul 2020
 *      Author: Ralim
 */

#include "BSP_PD.h"

/*
 * An array of all of the desired voltages & minimum currents in preferred order
 */
const uint16_t USB_PD_Desired_Levels[] = {
//mV desired input, mA minimum required current
		12000, 2500, //12V @ 2.5A
		9000, 2000, //9V @ 2A
		5000, 1100, //5V @ 1.1A

		};
const uint8_t USB_PD_Desired_Levels_Len = 3;
