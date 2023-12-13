/*
 * button.h
 *
 *  Created on: Dec 12, 2023
 *      Author: marcello
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

void Button_IRQHandler(void);
uint32_t Button_GetPressCount(void);

#endif /* INC_BUTTON_H_ */
