#include <stdio.h>
#include <stdlib.h>

int main(void){

	int iNumero,
		iContador,
		*iPuntero,
		iSuma = 0;
	
	printf("N%cmero de elementos: ",163);
	
	scanf("%d",&iNumero);
	
	iPuntero = (int*) calloc(iNumero,sizeof(int));
	
	if(iPuntero == NULL){
		
		printf("\n%cError al reservar memoria!",173);
		
		exit(0);
		
	}//fin if
	
	
	
	for(iContador = 0; iContador < iNumero; iContador++){
	
		printf("\nIngresa el %d%c elementos a sumar: ",iContador + 1, 248);
		
		scanf("%d",iPuntero + iContador);
		
		iSuma += *(iPuntero + iContador);
		
	}//fin for
	
	printf("La suma = %d",iSuma);
	
	free(iPuntero);
	
	return 0;
	
}//fin int main


