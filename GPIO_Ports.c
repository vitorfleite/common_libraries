#include "LSP.h"
#ifdef USE_GPIO_PORTS
#include "main.h"
#include "GPIO_Ports.h"
#include "GPIO.h"


// port A
int8_t PortA_On (uint32_t pin) {
#ifdef USB_SOFT_CONNECT
  if (pin == 6) return;
#endif
		HAL_GPIO_WritePin(GPIOA, pin, GPIO_PIN_SET);
  return 0;
}

int8_t PortA_Off (uint32_t pin) {
#ifdef USB_SOFT_CONNECT
  if (pin == 6) return;
#endif
	HAL_GPIO_WritePin(GPIOA, pin, GPIO_PIN_RESET);
  return 0;
}

int8_t PortA_Toggle (uint32_t pin) {
#ifdef USB_SOFT_CONNECT
  if (pin == 6) return;
#endif
	HAL_GPIO_TogglePin(GPIOA, pin);
  return 0;
}

// port B
int8_t PortB_On (uint32_t pin) {
#ifdef USB_SOFT_CONNECT
  if (pin == 6) return;
#endif
		HAL_GPIO_WritePin(GPIOB, pin, GPIO_PIN_SET);
  return 0;
}

int8_t PortB_Off (uint32_t pin) {
#ifdef USB_SOFT_CONNECT
  if (pin == 6) return;
#endif
	HAL_GPIO_WritePin(GPIOB, pin, GPIO_PIN_RESET);
  return 0;
}

int8_t PortB_Toggle (uint32_t pin) {
#ifdef USB_SOFT_CONNECT
  if (pin == 6) return;
#endif
	HAL_GPIO_TogglePin(GPIOB, pin);
  return 0;
}

// port C
int8_t PortC_On (uint32_t pin) {
		HAL_GPIO_WritePin(GPIOC, pin, GPIO_PIN_SET);
  return 0;
}

int8_t PortC_Off (uint32_t pin) {
	HAL_GPIO_WritePin(GPIOC, pin, GPIO_PIN_RESET);
  return 0;
}

int8_t PortC_Toggle (uint32_t pin) {
	HAL_GPIO_TogglePin(GPIOC, pin);
  return 0;
}

// port D
int8_t PortD_On (uint32_t pin) {
		HAL_GPIO_WritePin(GPIOD, pin, GPIO_PIN_SET);
  return 0;
}

int8_t PortD_Off (uint32_t pin) {
	HAL_GPIO_WritePin(GPIOD, pin, GPIO_PIN_RESET);
  return 0;
}

int8_t PortD_Toggle (uint32_t pin) {
	HAL_GPIO_TogglePin(GPIOD, pin);
  return 0;
}

#ifdef STM32F4xx_HAL_CAN_H
// port G
int8_t PortG_On (uint32_t pin) {
		HAL_GPIO_WritePin(GPIOG, pin, GPIO_PIN_SET);
  return 0;
}

int8_t PortG_Off (uint32_t pin) {
	HAL_GPIO_WritePin(GPIOG, pin, GPIO_PIN_RESET);
  return 0;
}

int8_t PortG_Toggle (uint32_t pin) {
	HAL_GPIO_TogglePin(GPIOG, pin);
  return 0;
}

#endif // #ifdef STM32F4xx_HAL_CAN_H


// Functions to Read pin
int8_t ReadPortA(uint16_t pin) {
	return HAL_GPIO_ReadPin(GPIOA, pin);
}

int8_t ReadPortB(uint16_t pin) {
	return HAL_GPIO_ReadPin(GPIOB, pin);
}

int8_t ReadPortC(uint16_t pin) {
	return HAL_GPIO_ReadPin(GPIOC, pin);
}

int8_t ReadPortD(uint16_t pin) {
	return HAL_GPIO_ReadPin(GPIOD, pin);
}

#endif // USE_GPIO_PORTS
