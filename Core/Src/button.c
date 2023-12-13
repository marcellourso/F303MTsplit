/*
 * button.c
 *
 *  Created on: Dec 12, 2023
 *      Author: marcello
 */

#include "button.h"

static volatile uint32_t pressCount = 0;

void Button_IRQHandler(void) {
    static uint32_t lastInterruptTime = 0;
    uint32_t interruptTime = HAL_GetTick();

    // If interrupts come faster than 200ms, assume it's a bounce and ignore
    if (interruptTime - lastInterruptTime > 200) {
        pressCount++;
    }
    lastInterruptTime = interruptTime;
}

uint32_t Button_GetPressCount(void) {
    return pressCount;
}
