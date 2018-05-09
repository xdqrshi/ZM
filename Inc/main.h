/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * Copyright (c) 2018 STMicroelectronics International N.V. 
  * All rights reserved.
  *
  * Redistribution and use in source and binary forms, with or without 
  * modification, are permitted, provided that the following conditions are met:
  *
  * 1. Redistribution of source code must retain the above copyright notice, 
  *    this list of conditions and the following disclaimer.
  * 2. Redistributions in binary form must reproduce the above copyright notice,
  *    this list of conditions and the following disclaimer in the documentation
  *    and/or other materials provided with the distribution.
  * 3. Neither the name of STMicroelectronics nor the names of other 
  *    contributors to this software may be used to endorse or promote products 
  *    derived from this software without specific written permission.
  * 4. This software, including modifications and/or derivative works of this 
  *    software, must execute solely and exclusively on microcontroller or
  *    microprocessor devices manufactured by or for STMicroelectronics.
  * 5. Redistribution and use of this software other than as permitted under 
  *    this license is void and will automatically terminate your rights under 
  *    this license. 
  *
  * THIS SOFTWARE IS PROVIDED BY STMICROELECTRONICS AND CONTRIBUTORS "AS IS" 
  * AND ANY EXPRESS, IMPLIED OR STATUTORY WARRANTIES, INCLUDING, BUT NOT 
  * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
  * PARTICULAR PURPOSE AND NON-INFRINGEMENT OF THIRD PARTY INTELLECTUAL PROPERTY
  * RIGHTS ARE DISCLAIMED TO THE FULLEST EXTENT PERMITTED BY LAW. IN NO EVENT 
  * SHALL STMICROELECTRONICS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
  * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, 
  * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
  * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING 
  * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
  * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H__
#define __MAIN_H__

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define VDD_3V3_SENSORS_EN_Pin GPIO_PIN_3
#define VDD_3V3_SENSORS_EN_GPIO_Port GPIOE
#define SPEKTRUM_POWER_Pin GPIO_PIN_4
#define SPEKTRUM_POWER_GPIO_Port GPIOE
#define SBUS_INV_Pin GPIO_PIN_13
#define SBUS_INV_GPIO_Port GPIOC
#define ICM20608_DRDY_Pin GPIO_PIN_14
#define ICM20608_DRDY_GPIO_Port GPIOC
#define ICM20608_CS_Pin GPIO_PIN_15
#define ICM20608_CS_GPIO_Port GPIOC
#define VBUS_VALID_Pin GPIO_PIN_0
#define VBUS_VALID_GPIO_Port GPIOC
#define RSSI_IN_Pin GPIO_PIN_1
#define RSSI_IN_GPIO_Port GPIOC
#define MPU9250_CS_Pin GPIO_PIN_2
#define MPU9250_CS_GPIO_Port GPIOC
#define LED_SAFETY_Pin GPIO_PIN_3
#define LED_SAFETY_GPIO_Port GPIOC
#define FMU_USART4_TX_Pin GPIO_PIN_0
#define FMU_USART4_TX_GPIO_Port GPIOA
#define FMU_USART4_RX_Pin GPIO_PIN_1
#define FMU_USART4_RX_GPIO_Port GPIOA
#define BATT_VOLT_SENS_Pin GPIO_PIN_2
#define BATT_VOLT_SENS_GPIO_Port GPIOA
#define BATT_CURRENT_SENS_Pin GPIO_PIN_3
#define BATT_CURRENT_SENS_GPIO_Port GPIOA
#define VDD_5V_SENS_Pin GPIO_PIN_4
#define VDD_5V_SENS_GPIO_Port GPIOA
#define MPU9250_SCK_Pin GPIO_PIN_5
#define MPU9250_SCK_GPIO_Port GPIOA
#define MPU9250_MISO_Pin GPIO_PIN_6
#define MPU9250_MISO_GPIO_Port GPIOA
#define MPU9250_MOSI_Pin GPIO_PIN_7
#define MPU9250_MOSI_GPIO_Port GPIOA
#define SAFETY_SWITCH_IN_Pin GPIO_PIN_4
#define SAFETY_SWITCH_IN_GPIO_Port GPIOC
#define VDD_3V3_PERIPH_EN_Pin GPIO_PIN_5
#define VDD_3V3_PERIPH_EN_GPIO_Port GPIOC
#define FMU_RC_INPUT_Pin GPIO_PIN_0
#define FMU_RC_INPUT_GPIO_Port GPIOB
#define FMU_LED_GREEN_Pin GPIO_PIN_1
#define FMU_LED_GREEN_GPIO_Port GPIOB
#define PI_GPIO0_Pin GPIO_PIN_2
#define PI_GPIO0_GPIO_Port GPIOB
#define FMU_UART7_RX_Pin GPIO_PIN_7
#define FMU_UART7_RX_GPIO_Port GPIOE
#define FMU_UART7_TX_Pin GPIO_PIN_8
#define FMU_UART7_TX_GPIO_Port GPIOE
#define FMU_CH4_Pin GPIO_PIN_9
#define FMU_CH4_GPIO_Port GPIOE
#define SPI4_CS_Pin GPIO_PIN_10
#define SPI4_CS_GPIO_Port GPIOE
#define FMU_CH3_Pin GPIO_PIN_11
#define FMU_CH3_GPIO_Port GPIOE
#define HMC5983_DRDY_Pin GPIO_PIN_12
#define HMC5983_DRDY_GPIO_Port GPIOE
#define FMU_CH2_Pin GPIO_PIN_13
#define FMU_CH2_GPIO_Port GPIOE
#define FMU_CH1_Pin GPIO_PIN_14
#define FMU_CH1_GPIO_Port GPIOE
#define HMC5983_CS_Pin GPIO_PIN_15
#define HMC5983_CS_GPIO_Port GPIOE
#define FMU_LED_RED_Pin GPIO_PIN_11
#define FMU_LED_RED_GPIO_Port GPIOB
#define PI_CS0_Pin GPIO_PIN_12
#define PI_CS0_GPIO_Port GPIOB
#define PI_CS1_Pin GPIO_PIN_13
#define PI_CS1_GPIO_Port GPIOB
#define FMU_USART3_TX_Pin GPIO_PIN_8
#define FMU_USART3_TX_GPIO_Port GPIOD
#define FMU_USART3_RX_Pin GPIO_PIN_9
#define FMU_USART3_RX_GPIO_Port GPIOD
#define FRAM_CS_Pin GPIO_PIN_10
#define FRAM_CS_GPIO_Port GPIOD
#define FMU_USART3_IN_Pin GPIO_PIN_11
#define FMU_USART3_IN_GPIO_Port GPIOD
#define FMU_USART3_OUT_Pin GPIO_PIN_12
#define FMU_USART3_OUT_GPIO_Port GPIOD
#define FMU_CH5_Pin GPIO_PIN_13
#define FMU_CH5_GPIO_Port GPIOD
#define FMU_CH6_Pin GPIO_PIN_14
#define FMU_CH6_GPIO_Port GPIOD
#define MPU9250_DRDY_Pin GPIO_PIN_15
#define MPU9250_DRDY_GPIO_Port GPIOD
#define PI_GPIO22_Pin GPIO_PIN_6
#define PI_GPIO22_GPIO_Port GPIOC
#define FMU_RC_INPUTC7_Pin GPIO_PIN_7
#define FMU_RC_INPUTC7_GPIO_Port GPIOC
#define EXT_GPIO1_Pin GPIO_PIN_8
#define EXT_GPIO1_GPIO_Port GPIOA
#define VBUS_Pin GPIO_PIN_9
#define VBUS_GPIO_Port GPIOA
#define FrSky_INV_Pin GPIO_PIN_10
#define FrSky_INV_GPIO_Port GPIOA
#define OTG_FS_DM_Pin GPIO_PIN_11
#define OTG_FS_DM_GPIO_Port GPIOA
#define OTG_FS_DP_Pin GPIO_PIN_12
#define OTG_FS_DP_GPIO_Port GPIOA
#define ALARM_Pin GPIO_PIN_15
#define ALARM_GPIO_Port GPIOA
#define FMU_USART2_IN_Pin GPIO_PIN_3
#define FMU_USART2_IN_GPIO_Port GPIOD
#define FMU_USART2_OUT_Pin GPIO_PIN_4
#define FMU_USART2_OUT_GPIO_Port GPIOD
#define FMU_USART2_TX_Pin GPIO_PIN_5
#define FMU_USART2_TX_GPIO_Port GPIOD
#define FMU_USART2_RX_Pin GPIO_PIN_6
#define FMU_USART2_RX_GPIO_Port GPIOD
#define BARO_CS_Pin GPIO_PIN_7
#define BARO_CS_GPIO_Port GPIOD
#define FMU_LED_BLUE_Pin GPIO_PIN_3
#define FMU_LED_BLUE_GPIO_Port GPIOB
#define EXT_GPIO2_Pin GPIO_PIN_4
#define EXT_GPIO2_GPIO_Port GPIOB
#define VDD_BRICK_VALID_Pin GPIO_PIN_5
#define VDD_BRICK_VALID_GPIO_Port GPIOB
#define FMU_USART1_TX_Pin GPIO_PIN_6
#define FMU_USART1_TX_GPIO_Port GPIOB
#define FMU_USART1_RX_Pin GPIO_PIN_7
#define FMU_USART1_RX_GPIO_Port GPIOB
#define FMU_I2C1_SCL_Pin GPIO_PIN_8
#define FMU_I2C1_SCL_GPIO_Port GPIOB
#define FMU_I2C1_SDA_Pin GPIO_PIN_9
#define FMU_I2C1_SDA_GPIO_Port GPIOB
#define FMU_USART8_RX_Pin GPIO_PIN_0
#define FMU_USART8_RX_GPIO_Port GPIOE
#define FMU_USART8_TX_Pin GPIO_PIN_1
#define FMU_USART8_TX_GPIO_Port GPIOE

/* ########################## Assert Selection ############################## */
/**
  * @brief Uncomment the line below to expanse the "assert_param" macro in the 
  *        HAL drivers code
  */
/* #define USE_FULL_ASSERT    1U */

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
 extern "C" {
#endif
void _Error_Handler(char *, int);

#define Error_Handler() _Error_Handler(__FILE__, __LINE__)
#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H__ */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
