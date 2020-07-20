//Funcion al cuadrado

#include <stdio.h>

int square(int iNumeroY);

int main(void){
	
	int iNumeroX;
	
	printf("N%cmero  |Potencia Al Cuadrado",163);
	
	for(iNumeroX = 1; iNumeroX <= 10; iNumeroX++){
		
		printf("\n%d\t|%d",iNumeroX,square(iNumeroX));
		
	}//fin for
	
	return 0;
	
}//fin int main

int square (int iNumeroY){
	
	return iNumeroY * iNumeroY;
	
}//fin inr square 
