//Matriz de 5 x 5

#include <stdio.h>
#include <stdlib.h>

int main(void){

	int x,y,iContador;
	
	printf("\nMatriz de 5x5");
	
	printf("\n");
	
	for(x = 1; x <= 5; x++){
		
		for(y = 1; y <=5; y++){
			
			printf("[%d,%d]",x,y);
			
		}
		
		printf("\n");
		
	}//fin for
	
	return 0;
	
}//fin int main


