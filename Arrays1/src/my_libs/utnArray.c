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
#define INPUT_MSSG "\n INGRESE UN VALOR AL VECTOR: "

int getString(char vcChr[], int iTop) {
	printf("\n=vcChr[] =: %s", vcChr);
	printf("\n=iTop =: %d", vcChr);
	int iStatus = OK;
		if(vcChr != NULL){
			printf(INPUT_MSSG);
			fgets(vcChr, iTop, stdin);
			printf("\n=Luego fgets =: %s", vcChr);
		}else
			iStatus = ERROR;

	return iStatus;
}

int orderIntArrayAsc(int* aIntArr, int iTop) {
	int iStatus = OK;
	int itsDisordered = TRUE;
	int iAux = -1;
		if(aIntArr != NULL){
			while(itsDisordered == TRUE){
				itsDisordered = FALSE;
				for (int i = 0; i < iTop-1; i++) {
					if(aIntArr[i]>aIntArr[i+1]){
						//printf("\n-->%d",aIntArr[i]);
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
				printf("\n=valor array=: %d", aIntArr[i]);
			}
		}else
			iStatus = ERROR;
	return iStatus;
}

int showChrsArrayContent(char aChrsArr[],int iFrom, int iTo, int iTop){
	printf("\n=showChrsArrayContent array=: %s", aChrsArr);
	printf("\n=showChrsArrayContent array.SIZEOF=: %i", sizeof(aChrsArr));
	printf("\n=showChrsArrayContent iFrom=: %d", iFrom);
	printf("\n=showChrsArrayContent iTo=: %d", iTo);
	printf("\n=showChrsArrayContent iTop=: %d", iTop);

	int iStatus = OK;
		if(aChrsArr != NULL && iTo<iTop){
			for (int i = iFrom; i < iTop; i++) {
				printf("\n=valor array=: %d", aChrsArr[i]);
			}
		}else
			iStatus = ERROR;
	return iStatus;
}
