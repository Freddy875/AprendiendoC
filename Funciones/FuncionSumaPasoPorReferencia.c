/*
Funcion paso por referencia
El paso por referencia se hace usando apuntadores
Se envia la dirreccion de memoria de la variable, 
por lo tanto los cambios que haga en la funcion 
si afectan el valor de la referencia 
*/

#include <stdio.h>

void sumarReferencia(int *iNumeroX, int *iNumeroY);

int main(void){
	
	int iNumeroX,iNumeroY;
	
	printf("\nIngresa el primer n%cmero: ",163);
	
	scanf("%d",&iNumeroX);
	
	printf("\nIngresa el segundo n%cmero: ",163);
	
	scanf("%d",&iNumeroY);
		
	sumarReferencia(&iNumeroX,&iNumeroY);
	
	return 0;
	
}//fin int main

void sumarReferencia(int *iNumeroX, int *iNumeroY){
	
	printf("\nEl resultado de sumar %d + %d = %d",*iNumeroX,*iNumeroY,*iNumeroX + *iNumeroY);
	
	return;
	
}//fin void sumarReferencia

