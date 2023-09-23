/******************************************************************************
 *
 * Unit: 3 Embedded C
 *
 * Lesson: 1
 *
 * File Name: main.c
 *
 * Description: Program to toggle LED using STM32F103C6TX.
 *
 * Author: Ismail Amr
 ******************************************************************************/

#include"Platform_Registers.h"



int main(void)
{
	/* GPIO Initialization */

	/* Enable RCC clock */

	RCC_APB2ENR_REG |= (1<<2);

	/* Clear GPIOA CRH Mode pin 13 bits(20-23) */
	GPIOA_CRH_REG &= ~(0x00F00000);

	/* Set GPIOA CRH Mode pin 13 to output */
	GPIOA_CRH_REG |= 0x00200000;



    /* Loop forever */
	while(1)
	{
		GPIOA_ODR_REG->pin.p13 = 1; // LED ON

		for(int i=0;i<500000;i++); // Some Delay

		GPIOA_ODR_REG->pin.p13 = 0; // LED OFF

		for(int i=0;i<500000;i++); // Some Delay

	}
}
