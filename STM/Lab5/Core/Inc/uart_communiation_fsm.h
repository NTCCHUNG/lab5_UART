/*
 * uart_communiation_fsm.h
 *
 *  Created on: Dec 27, 2023
 *      Author: DELL
 */

#ifndef INC_UART_COMMUNIATION_FSM_H_
#define INC_UART_COMMUNIATION_FSM_H_

#include "global.h"

#define END_WRITE "Start closing in 3s"

extern char ADC_string[];
void uart_communication_fsm();

#endif /* INC_UART_COMMUNIATION_FSM_H_ */
