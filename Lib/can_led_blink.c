#include "can_led_blink.h" 

void blink_led(TydefLed *Ledx, uint32_t time_delay)
{
	static uint32_t time_current = 0;
	if (HAL_GetTick() - time_current >= time_delay)
	{
		HAL_GPIO_TogglePin(Ledx->GPIO_LEDx, Ledx->GPIO_Pin_LEDx);
		time_current = HAL_GetTick();
	}
}

void led_init(TydefLed *Ledx, GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin)
{
	Ledx->GPIO_LEDx = GPIOx;
	Ledx->GPIO_Pin_LEDx = GPIO_Pin;
}