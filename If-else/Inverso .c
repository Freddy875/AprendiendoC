/*
Inverso de un numero 
Si el número es negativo su inverso es positivo
Si el número es positivo su inverso es negativo
*/

#include <stdio.h>
int main(void){

	int iNumero;
	
	printf("Este programa te dice el inverso de un n%cmero",163);
	
	printf("\nSi el n%cmero es negativo su inverso es positivo",163);
	
	printf("\nSi el n%cmero es positivo su inverso es negativo",163);
	
	printf("\nIngresa un n%cmero entero: ",163);
	
	scanf("%d",&iNumero);
	
	if(iNumero == 0){
		
		printf("\nERROR.El cero NO es ni positivo ni negativo");
		
		printf("\nPor lo tanto el cero no tiene inverso");
		
	}else{
		
		printf("\nEl inverso de tu n%cmero es: %d",163,-iNumero);
		
	}//fin if-else
	
	return 0;
	
}//fin int main


