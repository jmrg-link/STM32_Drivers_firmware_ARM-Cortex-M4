/*
 * stm32f401xx.h
 *
 *  Created on: 5 feb. 2022
 *      Author: jmrg
 */

#ifndef DRIVERS_INC_STM32F401XX_H_
#define DRIVERS_INC_STM32F401XX_H_

#include <stdint.h>

#define AHB1PERIPH_BASEADDR			0x40020000UL

#define GPIOA_BASEADDR				(AHB1PERIPH_BASEADDR + 0x0000)
#define GPIOB_BASEADDR				(AHB1PERIPH_BASEADDR + 0x0400)
#define GPIOC_BASEADDR				(AHB1PERIPH_BASEADDR + 0x0800)
#define GPIOD_BASEADDR				(AHB1PERIPH_BASEADDR + 0x0c00)
#define GPIOE_BASEADDR				(AHB1PERIPH_BASEADDR + 0x1000)
#define GPIOF_BASEADDR				(AHB1PERIPH_BASEADDR + 0x1400)
#define GPIOG_BASEADDR				(AHB1PERIPH_BASEADDR + 0x1800)
#define GPIOH_BASEADDR				(AHB1PERIPH_BASEADDR + 0x1c00)

#define RCC_BASEADDR				(AHB1PERIPH_BASEADDR + 0x3800)

/* Estructuras de perifericos */
typedef struct {
	volatile uint32_t MODER;
	volatile uint32_t OTYPER;
	volatile uint32_t OSPEEDR;
	volatile uint32_t PUPDR;
	volatile uint32_t IDR;
	volatile uint32_t ODR;
	volatile uint32_t BSRR;
	volatile uint32_t LCKR;
	volatile uint32_t AFR[2];
}GPIO_RegDef_t;

#define GPIOA						((GPIO_RegDef_t *)GPIOA_BASEADDR)
#define GPIOB						((GPIO_RegDef_t *)GPIOA_BASEADDR)
#define GPIOC						((GPIO_RegDef_t *)GPIOA_BASEADDR)
#define GPIOD						((GPIO_RegDef_t *)GPIOA_BASEADDR)
#define GPIOE						((GPIO_RegDef_t *)GPIOA_BASEADDR)
#define GPIOF						((GPIO_RegDef_t *)GPIOA_BASEADDR)
#define GPIOG						((GPIO_RegDef_t *)GPIOA_BASEADDR)
#define GPIOH						((GPIO_RegDef_t *)GPIOA_BASEADDR)

#endif /* DRIVERS_INC_STM32F401XX_H_ */
