/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f4xx_hal.h"

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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define SENLED_RF_Pin GPIO_PIN_14
#define SENLED_RF_GPIO_Port GPIOC
#define SENLED_R_Pin GPIO_PIN_15
#define SENLED_R_GPIO_Port GPIOC
#define SEN_RF_Pin GPIO_PIN_0
#define SEN_RF_GPIO_Port GPIOA
#define SEN_R_Pin GPIO_PIN_1
#define SEN_R_GPIO_Port GPIOA
#define SEN_L_Pin GPIO_PIN_2
#define SEN_L_GPIO_Port GPIOA
#define SEN_LF_Pin GPIO_PIN_3
#define SEN_LF_GPIO_Port GPIOA
#define SENLED_L_Pin GPIO_PIN_4
#define SENLED_L_GPIO_Port GPIOA
#define SENLED_LF_Pin GPIO_PIN_6
#define SENLED_LF_GPIO_Port GPIOA
#define Speaker_Pin GPIO_PIN_7
#define Speaker_GPIO_Port GPIOA
#define Battery_Pin GPIO_PIN_1
#define Battery_GPIO_Port GPIOB
#define CS_L_ENCODER_Pin GPIO_PIN_8
#define CS_L_ENCODER_GPIO_Port GPIOA
#define CS_R_ENCODER_Pin GPIO_PIN_9
#define CS_R_ENCODER_GPIO_Port GPIOA
#define SWITCH_Pin GPIO_PIN_11
#define SWITCH_GPIO_Port GPIOA
#define FLAG_LED_Pin GPIO_PIN_12
#define FLAG_LED_GPIO_Port GPIOA
#define TIM_MOTER_R_Pin GPIO_PIN_15
#define TIM_MOTER_R_GPIO_Port GPIOA
#define TIM_MOTER_L_Pin GPIO_PIN_3
#define TIM_MOTER_L_GPIO_Port GPIOB
#define MOTER_R_CWCCW_Pin GPIO_PIN_6
#define MOTER_R_CWCCW_GPIO_Port GPIOB
#define MOTER_L_CWCCW_Pin GPIO_PIN_7
#define MOTER_L_CWCCW_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
