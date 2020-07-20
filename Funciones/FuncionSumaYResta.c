//Funciones de Sumar y Restar

#include <stdio.h>

int sumar(int iNumeroX, int iNumeroY);

int restar(int iNumeroX, int iNumeroY);

int main(void){
	
	int iNumeroX, iNumeroY;

	printf("Este programa realiza la suma y la resta de dos n%cmeros",163);
	
	printf("\nIngresa el primer n%cmero: ",163);
	
	scanf("%d",&iNumeroX);
	
	printf("\nIngresa el segundo n%cmero: ",163);
	
	scanf("%d",&iNumeroY);
	
	printf("\nEl resultado de sumar %d + %d = %d",iNumeroX,iNumeroY,sumar(iNumeroX,iNumeroY));
	
	printf("\nEl resultado de restar %d - %d = %d",iNumeroX,iNumeroY,restar(iNumeroX,iNumeroY));
	
	return 0;
	
}//fin int main

int sumar(int iNumeroX, int iNumeroY){
	
	return iNumeroX + iNumeroY;
	
}//fin int sumar

int restar(int iNumeroX, int iNumeroY){
	
	return iNumeroX - iNumeroY;
	
}//fin int restar


