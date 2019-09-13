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
#define TOP2 50

void testEdades(int* aEdades);
void testEdades2(int aEdades2[]);
void pisarEdades(int* aEdades);
void testingCHarsArray();

typedef struct {
	int edad;
	char nombre[50];
}Datos;

int main(void) {
	Datos persona;
	Datos personas[10];

	int aEdades[TOP] = {1,2,3,4,5};
	int aEdadesDes[TOP] = {2,1,5,10,22};

	persona.edad = 10;
	persona.nombre = "pepe";

	personas[0].edad = 0;

	//https://elcodigoascii.com.ar/?dur=609

	/*printf("\n===ANTES DE ORDENAR==");
	showIntArrayContent(aEdadesDes,0, TOP-1, TOP);
	orderIntArrayAsc(aEdadesDes, TOP);
	printf("\n===DESPUES DE ORDENAR==");
	showIntArrayContent(aEdadesDes,0, TOP-1, TOP);*/
	char nombres[TOP2];
	getString(nombres, TOP2);
	showChrsArrayContent(nombres,0, TOP2-1, TOP2);
	//testEdades(aEdades);
	//testEdades2(aEdades);
	//pisarEdades(aEdades);
	//testingCHarsArray();

	return EXIT_SUCCESS;
}

void testingCHarsArray() {
	int C = 'A';
	int D = 'Z';
	printf("\n************************\n");
	printf("probando (C==D):: %d \n",(C==D));
	printf("probando (C):: %d \n",C);
	printf("probando (D):: %d \n",D);
}

void testEdades(int* aEdades) {
	printf("%d", aEdades); //aca asi imprimo la direccion de memoria donde apunta al primer valor
	printf("*******************");
	printf("\n varlor indice 0: %d", *aEdades);
	printf("\n varlor indice 1: %d", *(aEdades+1));
}

//sintaxis recomendada
void testEdades2(int aEdades2[]) {
	printf("%d", aEdades2); //aca asi imprimo la direccion de memoria donde apunta al primer valor
	printf("*******************");
	printf("\n varlor indice 0: %d", aEdades2[0]);
	printf("\n varlor indice 1: %d", aEdades2[1]);
}

void pisarEdades(int* aEdades){
	printf("\n VALOR ANTES :%d", *aEdades);
	printf("\n Ingresa la nueva edad: ");
	scanf("%d", aEdades); //ACA POR EJEMPLO LE MANDO A SCANF LA DIRE DE MEMORIA DONE APUNTA AL PRIMER ELEMENTO
	printf("\n VALOR DESPUES :%d", *aEdades);
}
