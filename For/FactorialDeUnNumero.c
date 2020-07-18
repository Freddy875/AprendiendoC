//Factorial de un número

#include <stdio.h>
int main(void){

	int iContador, iNumero, iFactorial = 1;
	
	printf("Ingresa el n%cmero para hallar el factorial: ",163);
	
	scanf("%d",&iNumero);
	
	if(iNumero < 0){
	
		printf("\nERROR. El n%cmero debe ser positivo ",163);
	
	}else{
		
		for(iContador = 1; iContador <= iNumero; iContador++){
		
			iFactorial *= iContador;
		
		}//fin for
		
		printf("\nEl factorial de tu n%cmero %d es: %d",163,iNumero,iFactorial);
		
	}//fin if-esle

	return 0;
	
}//fin int main


