/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  ** This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * COPYRIGHT(c) 2018 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
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

#if !defined(ARDUINO_ARCH_STM32)
 
/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

#endif

#if defined(ARDUINO_NUCLEO_F103RB)

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LedN_Pin GPIO_PIN_13
#define LedN_GPIO_Port GPIOC
#define A7_Pin GPIO_PIN_0
#define A7_GPIO_Port GPIOC
#define A6_Pin GPIO_PIN_1
#define A6_GPIO_Port GPIOC
#define A4_Pin GPIO_PIN_2
#define A4_GPIO_Port GPIOC
#define A5_Pin GPIO_PIN_3
#define A5_GPIO_Port GPIOC
#define A0_Pin GPIO_PIN_0
#define A0_GPIO_Port GPIOA
#define A1_Pin GPIO_PIN_1
#define A1_GPIO_Port GPIOA
#define DbgTx_Pin GPIO_PIN_2
#define DbgTx_GPIO_Port GPIOA
#define DbgRx_Pin GPIO_PIN_3
#define DbgRx_GPIO_Port GPIOA
#define A2_Pin GPIO_PIN_4
#define A2_GPIO_Port GPIOA
#define Led_Pin GPIO_PIN_5
#define Led_GPIO_Port GPIOA
#define Dbg1_Pin GPIO_PIN_6
#define Dbg1_GPIO_Port GPIOA
#define Dbg3_Pin GPIO_PIN_7
#define Dbg3_GPIO_Port GPIOA
#define LedC4_Pin GPIO_PIN_4
#define LedC4_GPIO_Port GPIOC
#define C5_Pin GPIO_PIN_5
#define C5_GPIO_Port GPIOC
#define A3_Pin GPIO_PIN_0
#define A3_GPIO_Port GPIOB
#define CS2_Pin GPIO_PIN_1
#define CS2_GPIO_Port GPIOB
#define CS1_Pin GPIO_PIN_2
#define CS1_GPIO_Port GPIOB
#define Dbg6_Pin GPIO_PIN_11
#define Dbg6_GPIO_Port GPIOB
#define Dbg4_Pin GPIO_PIN_12
#define Dbg4_GPIO_Port GPIOB
#define SPI_SCK_Pin GPIO_PIN_13
#define SPI_SCK_GPIO_Port GPIOB
#define SPI_MISO_Pin GPIO_PIN_14
#define SPI_MISO_GPIO_Port GPIOB
#define SPI_MOSI_Pin GPIO_PIN_15
#define SPI_MOSI_GPIO_Port GPIOB
#define C6_Pin GPIO_PIN_6
#define C6_GPIO_Port GPIOC
#define Dbg7_Pin GPIO_PIN_7
#define Dbg7_GPIO_Port GPIOC
#define C8_Pin GPIO_PIN_8
#define C8_GPIO_Port GPIOC
#define C9_Pin GPIO_PIN_9
#define C9_GPIO_Port GPIOC
#define CS3_Pin GPIO_PIN_8
#define CS3_GPIO_Port GPIOA
#define CS0_Pin GPIO_PIN_9
#define CS0_GPIO_Port GPIOA
#define Dbg2_Pin GPIO_PIN_11
#define Dbg2_GPIO_Port GPIOA
#define Dbg0_Pin GPIO_PIN_12
#define Dbg0_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB
#define B4_Pin GPIO_PIN_4
#define B4_GPIO_Port GPIOB
#define B5_Pin GPIO_PIN_5
#define B5_GPIO_Port GPIOB
#define Dbg5_Pin GPIO_PIN_6
#define Dbg5_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

#endif	/* ARDUINO_NUCLEO_F103RB */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
