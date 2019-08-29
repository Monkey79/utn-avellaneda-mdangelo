/*
 ============================================================================
 Name        : Dumm2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int pedirCantDatos();
int pedirValor();
void checkMaxMin(int *iMax, int *iMin, int iVal);
void informarMaxMin(int *iMax, int *iMin);

int main(void) {
	int iTop = 0;
	int iCont = 0;

	int iMax = 0;
	int iMin = 0;
	int iAux = 0;

		iTop = pedirCantDatos();

		for(int i=0;i < iTop;i++){
			iAux = pedirValor();
			checkMaxMin(&iMax, &iMin, iAux);
			iCont++;
		}
		informarMaxMin(&iMax, &iMin);

	return EXIT_SUCCESS;
}

int pedirCantDatos() {
	int num = 0;
	do{
		printf("\n cuantos valores quiere ingresar? (solo valores mayores a cero) ");
		scanf("%d",&num);
	}while(num<=0);
	return num;
}

int pedirValor(){
	int iValor = 0;
	do{
		printf("\n Ingrese un valor (solo valores mayores a cero) : ");
		scanf("%d",&iValor);
	}while(iValor<=0);

	return iValor;
}

void checkMaxMin(int *iMax, int *iMin, int iVal) {
	if(*iMin==0) {
		*iMin = iVal;
	}else if(iVal < *iMin){
		*iMin = iVal;
	}else if(iVal>*iMax){
		*iMax = iVal;
	}

}

void informarMaxMin(int *iMax, int *iMin){
	printf("*************INFORME*********************** \n");
	printf("El valor Maximo fue: %d ",*iMax);
	printf("El valor Minimo fue: %d ",*iMin);
	printf("\n *******************************************");
}
