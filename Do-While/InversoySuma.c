/*
Al ingresar un número entero desde teclado diferente de cero 
Lo multiplica por menos uno 
y lo hace varias veces hasta que se ingresa un número 
mayor de -10 o menor de 10
Y al final muestra la suma de todos los numeros ingresados  
*/

#include <stdio.h>
int main(void){
	
	int iNumero,
		iSuma = 0;
		
	do{
		
		printf("\nIngresa un n%cmero entero: ",163);
		
		scanf("%d",&iNumero);
		
		if(iNumero == 0){
			
			printf("\nERROR.El cero es ni positivo ni negativo");
		}//fin if
		
		
		iNumero *= (-1);
		
		printf("\nEl inverso de tu n%cmero es: %d",163,iNumero);
		
		/*
		printf("\nEl inverso de tu n%cmero es: %d",163,-iNumero);
		*/
		
		iSuma += iNumero;
		
		//iSuma = iSuma + iNumero;
		
	}while(iNumero >= -10 && iNumero <= 10);//fin do-while
	
	printf("\nEl resultado de la suma de todos los n%cmeros es: %d",163,iSuma);
	
	return 0;
	
}//fin int main


