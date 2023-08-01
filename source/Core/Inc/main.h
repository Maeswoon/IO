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
#include "stm32l4xx_hal.h"

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
#define PYRO1_DET_Pin GPIO_PIN_0
#define PYRO1_DET_GPIO_Port GPIOA
#define PYRO2_DET_Pin GPIO_PIN_1
#define PYRO2_DET_GPIO_Port GPIOA
#define PYRO3_DET_Pin GPIO_PIN_2
#define PYRO3_DET_GPIO_Port GPIOA
#define PYRO4_DET_Pin GPIO_PIN_3
#define PYRO4_DET_GPIO_Port GPIOA
#define PYRO1_Pin GPIO_PIN_5
#define PYRO1_GPIO_Port GPIOC
#define PYRO2_Pin GPIO_PIN_0
#define PYRO2_GPIO_Port GPIOB
#define PYRO3_Pin GPIO_PIN_1
#define PYRO3_GPIO_Port GPIOB
#define PYRO4_Pin GPIO_PIN_2
#define PYRO4_GPIO_Port GPIOB
#define SDMMC1_DET_Pin GPIO_PIN_7
#define SDMMC1_DET_GPIO_Port GPIOC
#define RF_DIO0_Pin GPIO_PIN_8
#define RF_DIO0_GPIO_Port GPIOA
#define RF_DIO1_Pin GPIO_PIN_9
#define RF_DIO1_GPIO_Port GPIOA
#define RF_DIO5_Pin GPIO_PIN_10
#define RF_DIO5_GPIO_Port GPIOA
#define USB_OTG_FS_DP_Pin GPIO_PIN_12
#define USB_OTG_FS_DP_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
