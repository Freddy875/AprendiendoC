#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int *iPuntero,
		iContador,
		iNumeroX,
		iNumeroY;

	printf("Ingresa el tama%co del arreglo: ",164);
	
	scanf("%d",&iNumeroX);
	
	iPuntero = (int*) malloc(iNumeroX * sizeof(int));
	
	printf("\nDirecci%cn de memoria reservada: ",162);
	
	for(iContador = 0; iContador < iNumeroX; iContador++){
		
		printf("\n%u\t%p\n", *iPuntero + iContador, &iPuntero + iContador);
		
	}//fin for
	
	printf("\nIngresa el nuevo tama%co del arreglo: ",164);
	
	scanf("%d",&iNumeroY);
			
	iPuntero = realloc(iPuntero, iNumeroY * sizeof(int));
	
	printf("\nNueva direcci%cn de memoria reservada: ",162);
	
	for(iContador = 0; iContador < iNumeroY; iContador++){
		
		printf("\n%u\t%p\n", *iPuntero + iContador, &iPuntero + iContador);
		
	}//fin for
	
	return 0;
	
}//fin int main

