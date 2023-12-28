/*
 * uart_communiation_fsm.c
 *
 *  Created on: Dec 27, 2023
 *      Author: DELL
 */

#include "uart_communiation_fsm.h"

char ADC_string[] = END_WRITE;

void uart_communication_fsm() {
	if (timer1_flag==1 && command_flag == 1 ){
		uint16_t ADC_value = HAL_ADC_GetValue(&hadc1);
		char ADC_string[11];
		sprintf( ADC_string , "!ADC=%04u#" , ADC_value );
		HAL_UART_Transmit (&huart2 , (uint8_t*)ADC_string , sizeof (ADC_string ) , 500) ;
		setTimer1(3000);
		}
	else if( command_flag == 2 ){
		HAL_UART_Transmit (&huart2 , (uint8_t*)ADC_string ,sizeof (ADC_string) , 100) ;
		command_flag =0;
	}
}
