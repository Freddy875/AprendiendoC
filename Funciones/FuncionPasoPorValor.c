/*
El paso por valor envia una copia de los parametros 
A la funcion por lo tanto los cambios que se hagan en ella 
No son tomados en cuenta dentro de la función main 
*/

#include <stdio.h>

void sumarPorValor(int iNumeroX, int iNumeroY);

int main(void){
	
	int iNumeroX, iNumeroY;
	
	printf("\nIngresa el primer n%cmero: ",163);

	scanf("%d",iNumeroX);
	
	printf("\nIngresa el segundo n%cmero: ",163);
	
	scanf("%d",iNumeroY);
		
	sumarPorValor(iNumeroX,iNumeroY);	
		
	return 0;
	
}//fin int main

void sumarPorValor(int iNumeroX, int iNumeroY){
	
	printf("\nEl resultado de sumar %d + %d = %d",iNumeroX,iNumeroY,iNumeroX + iNumeroY);
	
	return;
	
}//fin void sumaPorValor
