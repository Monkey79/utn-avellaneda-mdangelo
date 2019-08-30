/*
 * utn.c
 *
 *  Created on: 29 ago. 2019
 *      Author: alumno
 */
#include <stdio.h>
//ES CONVENIENTE ESTO: #include <stdlib.h> por si una funcion
//de esta libreria llama a otra funcion de la misma libreria

static int calcularProm(int iNum1, int iNum2); //COMO UNA FUNCION PRIVADA

void mostrarMnsjYGuardarNum(char *mnsj, int *iNum){
	printf("%s",mnsj);
	scanf("%d",&iNum);
}
