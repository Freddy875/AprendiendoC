//funcion al cubo

#include <stdio.h>

int cube(int iNumeroY);

int main(void){
	
	int iNumeroX;
	
	printf("N%cmero  |Potencia Al Cubo",163);
	
	for(iNumeroX = 1; iNumeroX <= 10; iNumeroX++){
		
		printf("\n%d\t|%d",iNumeroX,cube(iNumeroX));
		
	}//fin for
	
	return 0;
	
}//fin int main

int cube (int iNumeroY){
	
	return iNumeroY * iNumeroY * iNumeroY;
	
}//fin inr square 
