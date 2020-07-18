//Matriz de 5x5 con coordenadas

#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int x,y;
	
	printf("\nMatriz de 5x5 con Coordenadas\n");
	
	for(x = 0; x <= 5; x++){
		
		for(y = 0; y <= 5; y++){
			
			printf("[%d]\t",x+y);
			
		}//fin for
		
		printf("\n");
		
	}//fin for
	
	getchar();
	
	return 0;
	
}//fin int main


