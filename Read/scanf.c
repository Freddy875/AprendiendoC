#include <stdio.h>
#define PI 3.1416

int main(void){
	
	int iRadio;
	
	float fLongitud,fArea;
	
	printf("Introduce el radio del c%crculo (entero): ",161);
	
	scanf("%d",&iRadio);
	
	fLongitud = 2 * PI * iRadio;
	
	fArea = PI * iRadio * iRadio;
	
	printf("\nLa longitud de la circuenferencia vale: %.2f"
	,fLongitud);
	
	printf("\nEl %crea del c%crculo vale %.2f"
	,160,161,fArea);
	
	return 0;
	
}//fin int main


