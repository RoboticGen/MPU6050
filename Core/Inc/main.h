/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_Pin GPIO_PIN_13
#define LED_GPIO_Port GPIOC
#define MOTOR_RIGHT_POWER_Pin GPIO_PIN_0
#define MOTOR_RIGHT_POWER_GPIO_Port GPIOA
#define MOTOR_LEFT_POWER_Pin GPIO_PIN_2
#define MOTOR_LEFT_POWER_GPIO_Port GPIOA
#define FRONT_SHARP_IR_Pin GPIO_PIN_3
#define FRONT_SHARP_IR_GPIO_Port GPIOA
#define RIGHT_SHARP_IR_Pin GPIO_PIN_4
#define RIGHT_SHARP_IR_GPIO_Port GPIOA
#define LEFT_SHARP_IR_Pin GPIO_PIN_5
#define LEFT_SHARP_IR_GPIO_Port GPIOA
#define BATTERY_PIN_Pin GPIO_PIN_6
#define BATTERY_PIN_GPIO_Port GPIOA
#define BUZZER_Pin GPIO_PIN_7
#define BUZZER_GPIO_Port GPIOA
#define MOTOR_LEFT_Pin GPIO_PIN_10
#define MOTOR_LEFT_GPIO_Port GPIOB
#define MOTOR_RIGHT_Pin GPIO_PIN_11
#define MOTOR_RIGHT_GPIO_Port GPIOB
#define ENCODER_LEFT_1_Pin GPIO_PIN_12
#define ENCODER_LEFT_1_GPIO_Port GPIOB
#define ENCODER_LEFT_1_EXTI_IRQn EXTI15_10_IRQn
#define ENCODER_LEFT_2_Pin GPIO_PIN_13
#define ENCODER_LEFT_2_GPIO_Port GPIOB
#define ENCODER_RIGHT_1_Pin GPIO_PIN_14
#define ENCODER_RIGHT_1_GPIO_Port GPIOB
#define ENCODER_RIGHT_1_EXTI_IRQn EXTI15_10_IRQn
#define ENCODER_RIGHT_2_Pin GPIO_PIN_15
#define ENCODER_RIGHT_2_GPIO_Port GPIOB
#define BTN_OK_Pin GPIO_PIN_15
#define BTN_OK_GPIO_Port GPIOA
#define BTN_OK_EXTI_IRQn EXTI15_10_IRQn
#define BTN_RIGHT_Pin GPIO_PIN_8
#define BTN_RIGHT_GPIO_Port GPIOB
#define BTN_RIGHT_EXTI_IRQn EXTI9_5_IRQn
#define BTN_LEFT_Pin GPIO_PIN_9
#define BTN_LEFT_GPIO_Port GPIOB
#define BTN_LEFT_EXTI_IRQn EXTI9_5_IRQn

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
