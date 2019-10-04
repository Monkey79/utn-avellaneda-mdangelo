/*
 * Screen.c
 *
 *  Created on: 3 oct. 2019
 *      Author: alumno
 */
#include <stdio.h>
#include <string.h>

#include "Screen.h"

#define SUCCESS 0
#define ERROR -1
#define TRUE  1
#define FALSE 0

int src_initialize(Screen screens[], int length){
	int status = ERROR;
	if(screens!= NULL && length>0){
		for (int i = 0; i < length; i++) {
			screens[i].isEmpty = TRUE;
		}
		status = SUCCESS;
	}
	return status;
}

int scr_create(Screen screens[], int length){
	int status = ERROR;
	if(screens!= NULL && length>0){

	}
	return status;
}

int src_getFirstEmptyScrIndx(Screen screens[], int length, int *indx){
	int status = ERROR;
	int i = 0;
	int notEmpt;
	if(screens!= NULL && length>0){
		status = SUCCESS;
		do{
			notEmpt = screens[i].isEmpty == FALSE;
			i++;
		}while(i<length && notEmpt==TRUE);
		if(notEmpt==FALSE) *indx = (i-1);
	}
	return status;
}
int src_getScreenById(Screen screens[], int length, int *indx, int srcId, Screen *updScr){
	int status = ERROR;
	int i = 0;
	int notFound = FALSE;
	if(screens!= NULL && length>0){
		status = SUCCESS;
		do{
			notFound = screens[i].id == srcId;
			i++;
		}while(i<length && notFound == FALSE);
		if(notFound==TRUE){
			updScr = screens[i-1];
		}
	}
	return status;
}

