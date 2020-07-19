/*
goto

Hace el inverso de un numero
Y lo repite mientras el numero 
sea mayor o igual de -10 
y menor o igual de 10
Despues hace la suma de todos 
los numeros ingresados
pero esto se lo delega al goto
para hacer la suma 

*/
#include <stdio.h>
int main(void){
	
	int iNumero,iSuma = 0;
	
	do{
		
		printf("\nIngresa un n%cmero entero: ",163);
		
		scanf("%d",&iNumero);
		
		if(iNumero == 0){
			
			printf("\nERROR.El cero NO es ni positivo ni negativo");
		
			printf("\nPor lo tanto el cero no tiene inverso");
			
			goto imprimirResultado;
			
		}//fin if
		
		printf("\nEl inverso de tu n%cmero es: %d",163,-iNumero);
		
		iSuma += iNumero;
		
	}while(iNumero >= -10 && iNumero <= 10); //fin do-while
	
	imprimirResultado:
	printf("\nEl resultado de la suma de todos los n%cmeros es: %d",163,iSuma);
	
	return 0;
	
}//fin int main


