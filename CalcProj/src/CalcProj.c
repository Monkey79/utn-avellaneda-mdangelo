/*
 ============================================================================
 Name        : CalcProj.c
 Author      : mdangelo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//custom libs
#include "hello.h"
#include "./basic-math/bscMath.h"
#include "./menu-view/menuView.h"

#define APP_NAME "CALCULADORA_MDANGELO\n"

#define ASK_FIRST_NUM 1
#define ASK_SECOND_NUM 2
#define ALL_OPERATION 3
#define SHOW_RESULTS 4
#define EXIT 5


struct Results {
   int  iAddtRslt;
   int  iSubstRslt;
   int  iMultRslt;
   float  fDivsRslt;
   int  iFactRslt;
};

void initializeResults(struct Results *rslts);

void startCalculator(int *pNum1, int *pNum2, int *pOpSlc, struct Results *rslts);
void processOptionSelected(int pOpSlc, int *pNum1, int *pNum2, struct Results *rslts);
void showResults(struct Results rslts);

int main(void) {
	struct Results results;

	int iNum1=0;
	int iNum2=0;
	int iOptSelected=0;

	initializeResults(&results);

	startCalculator(&iNum1, &iNum2, &iOptSelected, &results);

	return EXIT_SUCCESS;
}

void initializeResults(struct Results *rslts){
	rslts->iAddtRslt = 0;
	rslts->iSubstRslt = 0;
	rslts->iMultRslt = 0;
	rslts->fDivsRslt = 0.0f;
	rslts->iAddtRslt = 0;
	rslts->iFactRslt = 0;
}

void startCalculator(int *pNum1, int *pNum2, int *pOpSlc, struct Results *rslts){
	do {
		mBuildMenuAndSaveOpt(*pNum1, *pNum2, pOpSlc);
		processOptionSelected(*pOpSlc,pNum1,pNum2, rslts);
	} while (*pOpSlc != EXIT);
}

void processOptionSelected(int pOpSlc, int *pNum1, int *pNum2, struct Results *rslts) {
	if(pOpSlc==ASK_FIRST_NUM){
		mAskForFirstANumber(pNum1);
	}else if(pOpSlc==ASK_SECOND_NUM){
		mAskForSecondtNumber(pNum2);
	}else if(pOpSlc == ALL_OPERATION){
		rslts->iAddtRslt = bscAddNumbers(*pNum1, *pNum2);
		rslts->iSubstRslt = bscSubtractNumbers(*pNum1, *pNum2);
		rslts->iMultRslt = bscMultiplyNumbers(*pNum1, *pNum2);
		rslts->fDivsRslt = bscDivideNumber(*pNum1, *pNum2);
		rslts->iFactRslt = bscfactorialNumber(*pNum1);
	}else if(pOpSlc == SHOW_RESULTS){
		showResults(*rslts);
	}else if(pOpSlc == 5){
		//fflush(stdout);
		printf("===Usted salio de la calculadora====");
	}

}

void showResults(struct Results rslts) {
	printf("\n******************Resultados*******************************\n");
	printf("\nLA Suma da %d", rslts.iAddtRslt);
	printf("\nLA Resta da %d", rslts.iSubstRslt);
	printf("\nLA Multiplicacion da %d", rslts.iMultRslt);
	(rslts.fDivsRslt > 0.0f)?printf("\nLA Division da %f", rslts.fDivsRslt):printf("\nPara la division no hay valores validos\n");
	(rslts.iFactRslt > 0)?printf("\nEl Factorial da %d", rslts.iFactRslt):printf("\nPara el factorial no hay valores validos\n");
	printf("\n**************************************************************\n");
}
