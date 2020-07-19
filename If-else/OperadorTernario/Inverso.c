/*
Inverso de un numero usando el operador ternario
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
	
	iNumero == 0 ? printf("\nERROR.El cero NO es ni positivo ni negativo \nPor lo tanto el cero no tiene inverso") : 
			
				   printf("\nEl inverso de tu n%cmero es: %d",163,-iNumero);
	
	
	return 0;
	
}//fin int main


