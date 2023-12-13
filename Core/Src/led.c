/*
 * led.c
 *
 *  Created on: Dec 12, 2023
 *      Author: marcello
 */


#include "led.h"

void LED_On(void) {
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);
}

void LED_Off(void) {
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_RESET);
}
