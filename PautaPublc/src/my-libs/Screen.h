/*
 * Screen.h
 *
 *  Created on: 3 oct. 2019
 *      Author: alumno
 */

#ifndef MY_LIBS_SCREEN_H_
#define MY_LIBS_SCREEN_H_

struct{
	int id;
	char type[4];
	char name[51];
	char surname[51];
	char adress[51];
	float price;
	int isEmpty;
}typedef Screen;
	int src_initialize(Screen screens[], int length);
	int scr_create(Screen screens[], int length);
	int src_getFirstEmptyScrIndx(Screen screens[], int length, int *indx);
	int src_getScreenById(Screen screens[], int length, int *indx, int srcId, Screen *updScr);

#endif /* MY_LIBS_SCREEN_H_ */
