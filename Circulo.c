//Comentario Simple
/*
Author: Fernando Sánchez Mejia
Fecha: 13-02-2020
Descripciopn: 
*/
#include <stdio.h> //Libreria 

#include <math.h>


int main (){ //funcion principal 

	//Declaración de variables 
	
	int iRadio; //Asignacion de valores 
	
	float fLongitud, fArea, fRadioCuadrado ;  //Declaración de valoriables 
	
	const float PI = 3.1416; //Declaración de constante
	
	//Pedir datos a usuario
	
	printf("Dame el radio del c%crculo que deseas calcular: ", 161);
	
	scanf("%d", &iRadio);
	
	fRadioCuadrado = pow(iRadio,2);
	
	fLongitud = (2 * PI ) * iRadio;
	
	fArea = (PI * fRadioCuadrado); 
	
	printf("\n El valor de radio es: %d y al cuadrado es igual a %0.0f", iRadio, fRadioCuadrado);
	
	printf("\n La longitud del c%crculo con radio %d es: %0.2f\n", 161, iRadio, fLongitud);
	
	printf("\n El %crea del c%crculo con radio %d es: %0.2f\n ", 160, 161, iRadio, fArea);

	/*-------------------------------------------------*/
	
	printf("\n/------------------------------------------/\n");
	
	int iRaiz;
	
	printf("\nDame un n%cmero para calcular raiz cuadrada: ", 163);
	
	scanf("%d", &iRaiz);
		
	printf("\n La raiz cuadrada del n%cmero %d es: %0.2f", 163, iRaiz, sqrt(iRaiz));
	
	printf("\n/------------------------------------------/\n");
	
	int iNum1, iNum2;
	
	printf("\nDame un n%cmero para sumar con otro numero: ", 163);
	
	scanf("%d", &iNum1);
	
	printf("\nDame un n%cmero para sumar con otro numero: ", 163);
	
	scanf("%d", &iNum2);
	
	printf("\n El resultado de la sumar: %d + %d = %d", iNum1,iNum2,iNum1+iNum2);
	
	printf("\n/------------------------------------------/\n");
	
	int iNum3, iNum4;
	
	printf("\nDame un n%cmero para restar con otro numero: ", 163);
	
	scanf("%d", &iNum3);
	
	printf("\nDame un n%cmero para restar con otro numero: ", 163);
	
	scanf("%d", &iNum4);
	
	printf("\n El resultado de la restar: %d - %d = %d", iNum3,iNum4,iNum3-iNum4);
	
	return 0;
	
}//fin int main 
