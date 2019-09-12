/*
 * utnArray.c
 *
 *  Created on: 11 sep. 2019
 *      Author: alumno
 */

#include <stdio.h>

#define OK 0
#define ERROR -1

#define FALSE -1
#define TRUE 0

int orderIntArrayAsc(int* aIntArr, int iTop) {
	int iStatus = OK;
	int itsDisordered = TRUE;
	int iAux = -1;
		if(aIntArr != NULL){
			while(itsDisordered == TRUE){
				itsDisordered = FALSE;
				for (int i = 0; i < iTop; i++) {
					if(aIntArr[i]>aIntArr[i+1]){
						printf("\n-->%d",aIntArr[i]);
						iAux = aIntArr[i];
						aIntArr[i] = aIntArr[i+1];
						aIntArr[i+1] = iAux;
						itsDisordered = TRUE;
					}
				}
			}
		}else
			iStatus = ERROR;
	return iStatus;
}

int showIntArrayContent(int* aIntArr,int iFrom, int iTo, int iTop){
	int iStatus = OK;
		if(aIntArr != NULL && iTo<iTop){
			for (int i = iFrom; i < iTop; i++) {
				printf("\n=valor=: %d", aIntArr[i]);
			}
		}else
			iStatus = ERROR;
	return iStatus;
}

