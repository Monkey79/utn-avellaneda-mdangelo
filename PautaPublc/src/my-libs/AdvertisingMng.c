/*
 * AdvertisingMng.c
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

int SCR_ID = 0;

_adv_getScreenValues(Screen screens[], int length);
_adv_isAScreenAlreadyCharged(Screen screens[], int length);

int adv_initScreens(Screen screens[], int length){
	int status = ERROR;
	status = src_initialize(screens, length);
	return status;
}

int adv_createScreen(Screen screens[], int length){
	int status = ERROR;
	char opt;
	if(screens!= NULL && length>0){
		do{
			__fpurge(stdin);
			printf("***Hola desea ingresar un Pantalla? (s|n)***\n");
			scanf("%c",&opt);
		}while(opt!='s' && opt!='n');
		if(opt=='s'){
			status = _adv_getScreenValues(screens, length);
		}
	}
	return status;
}
int adv_updateScreen(Screen screens[], int length){
	int status = ERROR;
	int indx;
	int srcId;
	if(screens!= NULL && length>0){
		indx = _adv_isAScreenAlreadyCharged(screens, length);
		if(indx<0){
			printf("\n**Error**No hay ninguna pantalla previamante cargada. Cree una pantalla primero!!\n");
		}else{
			printf("\nIngrese el ID de la pantalla a modificar\n");
			scnaf("%d", &srcId);
			status = src_getScreenById(screens,length, int *indx, int srcId, Screen *updScr)
		}
	}
	return status;
}

/*****Private functions************/
int _adv_getScreenValues(Screen screens[], int length){
	int indx=-1;
	int status = src_getFirstEmptyScrIndx(screens, length, &indx);
	Screen src;

	//found an empty screen
	if(status==SUCCESS && indx>=0){
		src = screens[indx];
		do{
			__fpurge(stdin);
			printf("\n Ingrese el tipo de la pantalla (LCD|LED): \n");
			fgets(src.type, 4, stdin);
		}while(strcmp(src.type,"LCD")!=0 && strcmp(src.type,"LED")!=0);
		__fpurge(stdin);
		printf("\n Ingrese el nombre de la pantalla (max 51 caracteres): \n");
		fgets(src.name, 51, stdin);
		__fpurge(stdin);
		printf("\n Ingrese la direccion de la pantalla (max 51 caracteres): \n");
		fgets(src.adress, 51, stdin);
		__fpurge(stdin);
		printf("\n Ingrese el precio de la publicidad para esta pantalla: \n");
		scanf("%f",&src.price);
		src.id = ++SCR_ID;
		printf("\n++Exito++Se dio de alta a la siguiente pantalla con id=%d: \n", src.id);
	}
	return status;
}

int _adv_isAScreenAlreadyCharged(Screen screens[], int length){
	int indx=-1;
	src_getFirstEmptyScrIndx(screens, length, &indx);
	return indx;
}
