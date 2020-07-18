//Imprimir un matriz con filas y columnas de 10 x 5

#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int iFilas, iColumnas, iNumero = 0;
	
	for(iFilas = 1; iFilas <= 10; iFilas++){
		
		for(iColumnas = 1; iColumnas <= 5; iColumnas++){
			
			printf("%d\t",iNumero);
			
			iNumero++;
			
		}//fin for
		
		printf("\n");
		
	}//fin for
	
	getchar();
	
	return 0;
	
}//fin int main
