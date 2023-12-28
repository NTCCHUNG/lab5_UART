/*
 * command_parser_fsm.c
 *
 *  Created on: Dec 27, 2023
 *      Author: DELL
 */


#include "command_parser_fsm.h"


uint8_t start[sizeof(START_STRING) - 1] = START_STRING;
uint8_t end[sizeof(END_STRING) - 1] = END_STRING;
uint8_t result = 1;

void resetBuffer() {
    for (uint8_t i = 0; i < MAX_BUFFER_SIZE; i++) {
        buffer[i] = 0x00;
    }
}

void command_parser_fsm() {
	uint8_t checkSym = 0;

	for(uint8_t i=0;i < MAX_BUFFER_SIZE;i++){
        if (buffer[i] == '!') {
            checkSym = i;
            break;
        }
	}

	uint8_t result = 1;
	for(uint8_t i=0;i<5;i++){
		if(buffer[checkSym + i] != start[i]){
			result = 0;
			break;
		}
	}
	if(result == 1){
		command_flag = 1;
		result = 0;
		resetBuffer();
	}else result = 1;

	if(result ==1){
		result = 2;
		for(uint8_t i=0;i<4;i++){
			if(buffer[checkSym + i] != end[i]){
				result = 0;
				break;
			}
		}
	}

	if(result == 2){
		command_flag = 2;
		resetBuffer();
	}
}
