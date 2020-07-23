/*
Este programa calcula el area de un circulo 
*/

#include <stdio.h>
#include <math.h>
#define PI 3.1416

int main(void){
	
	float fArea,fRadio;
	
	
	printf("\nIngresa el radio del c%crculo: ",161);

	scanf("%f",&fRadio);
	
	fArea = PI * pow(fRadio,2);
	
	printf("\nEl %crea del c%crculo con radio %.2f es: %.2f"
	,160,161,fRadio,fArea);
	
	return 0;
	
}//fin int main


