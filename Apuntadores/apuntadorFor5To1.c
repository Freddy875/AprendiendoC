#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int iNumeroX,
		iNumeroY,
		iNumeroZ,
		iContador;
		
	int *iPuntero;
	
	iNumeroX = 0;
	
	iNumeroY = 1;
	
	iPuntero = &iNumeroZ;
	
	for(iContador = 0; iContador < 4; iContador++){
		
		iNumeroZ = iNumeroX + iNumeroY;
		
		printf("%d\n",iNumeroZ);
	
		printf("iPuntero tiene el valor: %d y esta alojado en: %p\n"
		,iNumeroZ,&iNumeroZ);
		
		printf("iPuntero tiene el valor: %p y esta alojado en: %p\n"
		,iPuntero,&iPuntero);
	
		printf("El valor entero al que apunta iPuntero es: %d\n"
		,*iPuntero);
		
		iNumeroX = iNumeroY;
		
		iNumeroY = iNumeroZ;
		
	}//fin for 
	
	getchar();
	
	return 0;
	
}//fin int main


