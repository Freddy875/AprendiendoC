#include <stdio.h>

int iArreglo[] = {1,230,17,14,-5,1000,21};

char cArreglo[6] = {'A','B','C','D'};

int *iPuntero;

char *cPuntero;

int iContador;

int main(void){
	
	iPuntero = &iArreglo[0]; /*Apuntamos al arreglo entero*/
	
	cPuntero = &cArreglo[0]; /*Apuntamos al arreglo caracteres*/

	printf("\n");
	
	for(iContador = 0; iContador < 7; iContador++){
		
		printf("\nMi arreglo[%d] = %d",iContador,iArreglo[iContador]);
		
		/*printf("\niPuntero + %d = %d",iContador,*(iPuntero + iContador));*/
		
		printf("\niPuntero + %d = %d",iContador, *iPuntero++);
		
		printf("\niPuntero apunta a: %p",&iPuntero + iContador);
		
	}//fin for
	
	for(iContador = 0; iContador < 4; iContador++){
		
		printf("\nMi arreglo[%d] = %d",iContador,cArreglo[iContador]);
		
		printf("\ncPuntero + %d = %c",iContador,*(cPuntero + iContador));
		
		printf("\ncPuntero apunta a: %p",&cPuntero + iContador);
		
	}//fin for
	
	return 0;
	
}//fin int main


