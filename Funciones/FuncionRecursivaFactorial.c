//funcion recursiva factorial

#include <stdio.h>

long factorial(int iNumero);

int main(void){
	
	long int iNumero;
	
	printf("Ingresa el n%cmero para hallar el factorial: ",163);
	
	scanf("%d",&iNumero);
	
	printf("\nEl factorial de tu n%cmero %d es: %ld",163,iNumero,factorial(iNumero));
	
	return 0;
	
}//fin int main

long factorial(int iNumero){
	
	if(iNumero == 0){
		
		return 1; //El factorial de 0 es igual a 1
		
	}else{
		
		return iNumero * factorial(iNumero - 1);
		
	}//fin if-else
	
}//fin long factorial


