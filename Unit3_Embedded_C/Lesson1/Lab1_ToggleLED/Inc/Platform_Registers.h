/******************************************************************************
 *
 * Unit: 3 Embedded C
 *
 * Lesson: 1
 *
 * File Name: Platform_Registers.h
 *
 * Description: Platform Registers Header for STM32F103C6TX
 *
 * Author: Ismail Amr
 ******************************************************************************/

#ifndef PLATFORM_REGISTERS_H_
#define PLATFORM_REGISTERS_H_

#include"Platform_Types.h"

/* Base Addresses */

#define RCC_BASE_ADDRESS   0x40021000
#define GPIOA_BASE_ADDRESS 0x40010800

/* RCC Register Offsets */

#define APB2ENR 0X18

/* RCC Registers */

#define RCC_APB2ENR_REG (*((vuint32_t*)(RCC_BASE_ADDRESS+APB2ENR)))


/* GPIO Register Offsets */

#define CRH 0x04
#define ODR 0x0C

/* GPIO Registers */

#define GPIOA_CRH_REG (*((vuint32_t*)(GPIOA_BASE_ADDRESS+CRH)))

typedef union{
	vuint32_t all_pins;
	struct{
		vuint32_t p0:1;
		vuint32_t p1:1;
		vuint32_t p2:1;
		vuint32_t p3:1;
		vuint32_t p4:1;
		vuint32_t p5:1;
		vuint32_t p6:1;
		vuint32_t p7:1;
		vuint32_t p8:1;
		vuint32_t p9:1;
		vuint32_t p10:1;
		vuint32_t p11:1;
		vuint32_t p12:1;
		vuint32_t p13:1;
		vuint32_t p14:1;
		vuint32_t p15:1;
	}pin;

}GPIO_ODR;

volatile GPIO_ODR* GPIOA_ODR_REG = (volatile GPIO_ODR*)(GPIOA_BASE_ADDRESS+ODR);








#endif /* PLATFORM_REGISTERS_H_ */
