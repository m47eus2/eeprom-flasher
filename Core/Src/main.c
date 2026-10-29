/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "i2c.h"
#include "usart.h"
#include "gpio.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "stdio.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_USART2_UART_Init();
  MX_I2C1_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */

  uint8_t dataToWrite[128] = {
    0x00, // 0x00
    0x01, // 0x01
    0x02, // 0x02
    0x03, // 0x03
    0x04, // 0x04
    0x05, // 0x05
    0x06, // 0x06
    0x07, // 0x07
    0x08, // 0x08
    0x09, // 0x09
    0x0A, // 0x0A
    0x0B, // 0x0B
    0x0C, // 0x0C
    0x0D, // 0x0D
    0x0E, // 0x0E
    0x0F, // 0x0F
    0x10, // 0x10
    0x11, // 0x11
    0x12, // 0x12
    0x13, // 0x13
    0x14, // 0x14
    0x15, // 0x15
    0x16, // 0x16
    0x17, // 0x17
    0x18, // 0x18
    0x19, // 0x19
    0x1A, // 0x1A
    0x1B, // 0x1B
    0x1C, // 0x1C
    0x1D, // 0x1D
    0x1E, // 0x1E
    0x1F, // 0x1F
    0x20, // 0x20
    0x21, // 0x21
    0x22, // 0x22
    0x23, // 0x23
    0x24, // 0x24
    0x25, // 0x25
    0x26, // 0x26
    0x27, // 0x27
    0x28, // 0x28
    0x29, // 0x29
    0x2A, // 0x2A
    0x2B, // 0x2B
    0x2C, // 0x2C
    0x2D, // 0x2D
    0x2E, // 0x2E
    0x2F, // 0x2F
    0x30, // 0x30
    0x31, // 0x31
    0x32, // 0x32
    0x33, // 0x33
    0x34, // 0x34
    0x35, // 0x35
    0x36, // 0x36
    0x37, // 0x37
    0x38, // 0x38
    0x39, // 0x39
    0x3A, // 0x3A
    0x3B, // 0x3B
    0x3C, // 0x3C
    0x3D, // 0x3D
    0x3E, // 0x3E
    0x3F, // 0x3F
    0x40, // 0x40
    0x41, // 0x41
    0x42, // 0x42
    0x43, // 0x43
    0x44, // 0x44
    0x45, // 0x45
    0x46, // 0x46
    0x47, // 0x47
    0x48, // 0x48
    0x49, // 0x49
    0x4A, // 0x4A
    0x4B, // 0x4B
    0x4C, // 0x4C
    0x4D, // 0x4D
    0x4E, // 0x4E
    0x4F, // 0x4F
    0x50, // 0x50
    0x51, // 0x51
    0x52, // 0x52
    0x53, // 0x53
    0x54, // 0x54
    0x55, // 0x55
    0x56, // 0x56
    0x57, // 0x57
    0x58, // 0x58
    0x59, // 0x59
    0x5A, // 0x5A
    0x5B, // 0x5B
    0x5C, // 0x5C
    0x5D, // 0x5D
    0x5E, // 0x5E
    0x5F, // 0x5F
    0x60, // 0x60
    0x61, // 0x61
    0x62, // 0x62
    0x63, // 0x63
    0x64, // 0x64
    0x65, // 0x65
    0x66, // 0x66
    0x67, // 0x67
    0x68, // 0x68
    0x69, // 0x69
    0x6A, // 0x6A
    0x6B, // 0x6B
    0x6C, // 0x6C
    0x6D, // 0x6D
    0x6E, // 0x6E
    0x6F, // 0x6F
    0x70, // 0x70
    0x71, // 0x71
    0x72, // 0x72
    0x73, // 0x73
    0x74, // 0x74
    0x75, // 0x75
    0x76, // 0x76
    0x77, // 0x77
    0x78, // 0x78
    0x79, // 0x79
    0x7A, // 0x7A
    0x7B, // 0x7B
    0x7C, // 0x7C
    0x7D, // 0x7D
    0x7E, // 0x7E
    0x7F  // 0x7F
};

  uint8_t programState = 0;

  while (1)
  {
    if(programState == 0 && HAL_GPIO_ReadPin(button_GPIO_Port, button_Pin) == GPIO_PIN_RESET){
      printf("\n=============== READING DATA ===============\n\n");

      uint8_t receivedData[128];
      HAL_StatusTypeDef readRet = HAL_I2C_Mem_Read(&hi2c1, 0xA0, 0x0, 1, receivedData, sizeof(receivedData), HAL_MAX_DELAY);

      if(readRet == HAL_OK)
        for(uint8_t i=0; i < sizeof(receivedData); i++)
          printf("0x%02X: %02X\n", i, receivedData[i]);
      else
        printf("Read error\n");

      programState = 1;
    }

    if(programState == 1 && HAL_GPIO_ReadPin(button_GPIO_Port, button_Pin) == GPIO_PIN_SET){
      programState = 2;
    }

    if(programState == 2 && HAL_GPIO_ReadPin(button_GPIO_Port, button_Pin) == GPIO_PIN_RESET){
      printf("\n=============== WRITING DATA ===============\n\n");

      for(uint16_t addr = 0; addr < 128; addr += 8){
        HAL_StatusTypeDef writeRet = HAL_I2C_Mem_Write(&hi2c1, 0xA0, addr, 1, dataToWrite+addr, 8, HAL_MAX_DELAY);
        if(writeRet == HAL_OK)
          printf("Saved 8 B from 0x%02X\n", addr);
        HAL_Delay(50);
      }

      programState = 0;
    }

    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  if (HAL_PWREx_ControlVoltageScaling(PWR_REGULATOR_VOLTAGE_SCALE1) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_MSI;
  RCC_OscInitStruct.MSIState = RCC_MSI_ON;
  RCC_OscInitStruct.MSICalibrationValue = 0;
  RCC_OscInitStruct.MSIClockRange = RCC_MSIRANGE_6;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_MSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}
#ifdef USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
