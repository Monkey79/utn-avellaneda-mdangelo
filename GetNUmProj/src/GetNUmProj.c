/*
 ============================================================================
 Name        : GetNUmProj.c
 Author      : Mariano
 Version     :
 Copyright   : GLP 3
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "utn.h"

#define ERROR 0
#define EXITO 1

#define INGRESE_NUMERO "INGRESE UN NUMERO:\n"

int getNumero(int *valor, int iMax, int iMin, int iReintentos);
//void mostrarMnsjYGuardarNum(char *mnsj, int *iNum);

int main(void) {
	int valor = 0;
	int iNUmAux = 0;

	char *saludo = "mira vos esto funciona";

	mostrarMnsjYGuardarNum(INGRESE_NUMERO, &iNUmAux); //VER

	if(getNumero(&valor,3,1,3) == EXITO){
		printf("\n[EXITO-FUNCION MAIN] SI el valor que devuelve la funcion getNumero es: %d", valor);
	}else
		printf("\n[ERROR-FUNCION MAIN] Hubo un error!!");
	return EXIT_SUCCESS;
}

int getNumero(int *valor, int iMax, int iMin, int iReintentos){
	int bSeguir = -1;
	int iNum = 0;
	int iCont = 0;
	int iStatus = ERROR;

	do {
		printf("\n Ingrese un valor que este comprendido entre [%d y %d]. Recuerde que tiene %d intentos para ingresar dicho valor: ",iMin, iMax, iReintentos);
		scanf("%d",&iNum);
		bSeguir = ((iNum<iMin) || (iNum>iMax));
		iCont++;
	} while (bSeguir==1 && (iCont<iReintentos));

	if(bSeguir == 0){
		printf("\n[OK]Perfecto el valor que ingreso es %d FIN FUNCION getNumero \n",iNum);
		*valor = iNum;
		iStatus = EXITO;
	}else if(iCont>=iReintentos){
		printf("\n[ERROR]Usted excedio la cantidad de reintentos FIN FUNCION getNumero \n",iNum);
	}
	printf("******************************************************************");
	return iStatus;
}

//Para probar:
/*void mostrarMnsjYGuardarNum(char *mnsj, int *iNum){
	printf("%s",mnsj);
	scanf("%d",&iNum);
}*/
