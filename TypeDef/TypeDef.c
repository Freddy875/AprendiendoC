#include <stdio.h>
#include <stdlib.h>

//Definicion de nuevso tipso de datos 
typedef short int iEnteroCorto; 
//Crea tipo de dato enteros cortos
typedef float fReal;
//CRea tipo de dato de punto flotante de simple presicion
typedef char cFreddy; 
//Crea tipo de dato caracter
//Uso de nuevos tipos de datos 

iEnteroCorto iX;
fReal fY;
cFreddy cLetra; 

int main(void){
	
	iX = 32;
	
	fY = 22.2;
	
	cLetra = '@';
	
	printf("Entero Corto: %d\nReal: %0.3f\nLetra: %c"
	,iX
	,fY
	,cLetra);
	
	return 0;
	
}//fin int main

