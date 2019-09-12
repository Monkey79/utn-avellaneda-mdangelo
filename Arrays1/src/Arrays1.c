/*
 ============================================================================
 Name        : Arrays1.c
 Author      : Mariano
 Version     :
 Copyright   : GLP 3
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "./my_libs/utnArray.h"

#define TOP 5

void testEdades(int* aEdades);
void pisarEdades(int* aEdades);

int main(void) {
	int aEdades[TOP] = {1,2,3,4,5};
	int aEdadesDes[TOP] = {2,1,5,10,22};

	printf("\n===ANTES DE ORDENAR==");
	showIntArrayContent(aEdadesDes,0, TOP-1, TOP);
	orderIntArrayAsc(aEdadesDes, TOP);
	printf("\n===DESPUES DE ORDENAR==");
	showIntArrayContent(aEdadesDes,0, TOP-1, TOP);

	//testEdades(aEdades);
	//pisarEdades(aEdades);

	return EXIT_SUCCESS;
}

void testEdades(int* aEdades) {
	printf("%d", aEdades); //aca asi imprimo la direccion de memoria donde apunta al primer valor
	printf("*******************");
	printf("\n varlor indice 0: %d", *aEdades);
	printf("\n varlor indice 1: %d", *(aEdades+1));
}

void pisarEdades(int* aEdades){
	printf("\n VALOR ANTES :%d", *aEdades);
	printf("\n Ingresa la nueva edad: ");
	scanf("%d", aEdades); //ACA POR EJEMPLO LE MANDO A SCANF LA DIRE DE MEMORIA DONE APUNTA AL PRIMER ELEMENTO
	printf("\n VALOR DESPUES :%d", *aEdades);
}
