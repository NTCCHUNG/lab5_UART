/*
 * command_parser_fsm.h
 *
 *  Created on: Dec 27, 2023
 *      Author: DELL
 */

#ifndef INC_COMMAND_PARSER_FSM_H_
#define INC_COMMAND_PARSER_FSM_H_

#include "global.h"

#define START_STRING "!RST#"
#define END_STRING "!OK#"


extern uint8_t start[sizeof(START_STRING) - 1];
extern uint8_t end[sizeof(END_STRING) - 1];
extern uint8_t result;

void resetBuffer();
void command_parser_fsm();


#endif /* INC_COMMAND_PARSER_FSM_H_ */
