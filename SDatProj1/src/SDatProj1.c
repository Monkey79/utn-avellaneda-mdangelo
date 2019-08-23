/*
 ============================================================================
 Name        : SDatProj1.c
 Author      : MDangelo
 Version     :
 Copyright   : GLP 3
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float fProm = 0.0;
	if(pedirCalcularProm(&fProm)==0){
		printf("el promedio da %d \n",fProm);
	}else
		printf("Error!!");

	return EXIT_SUCCESS;
}

int pedirCalcularProm(float *prom){
	int iCont = 0;
	int iTop = 5;
	int iNum = 0;
	int iAux = 0;

	while(iCont < iTop){
		printf("ingrese un numero: \n");
		scanf("%d",&iAux);
		iNum += iAux;
		iCont++;
	}
	printf("el valor prom antes %f \n", *prom);
	*prom = (iNum / iTop);
	printf("el valor prom despues %f \n", *prom);
	return 0;
}
