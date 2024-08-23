#ifndef CAN_LED_BLINK_H
#define CAN_LED_BLINK_H

#include "stm32f1xx_hal.h"

typedef struct
{
	GPIO_TypeDef *GPIO_LEDx; 
	uint16_t GPIO_Pin_LEDx;
} TydefLed;
void blink_led(TydefLed *Ledx, uint32_t time_delay);
void led_init(TydefLed *Ledx, GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin);
#endif
