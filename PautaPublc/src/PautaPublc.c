/*
 ============================================================================
 Name        : PautaPublc.c
 Author      : mdangelo
 Version     :
 Copyright   : GLP 3
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "./my-libs/AdvertisingMng.h"

#define SUCCESS 0
#define ERROR -1

#define SCR_TOP 100

int main(void) {
	int status = ERROR;
	Screen screens[SCR_TOP];

	status = adv_initScreens(screens, SCR_TOP);
	if(status == SUCCESS){
		status = adv_createScreen(screens, SCR_TOP);
		printf("****FIN***** %d", status);
	}

	return status;


}
