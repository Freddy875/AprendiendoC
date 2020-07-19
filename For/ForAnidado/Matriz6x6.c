//Matriz de 6x6 rellena de numeros del 1 al 36
#include <stdio.h>
int main(void){
	
	int x,y,z = 1;
	
	printf("\nMatriz 6x6\n");
	
	for(x = 0; x <= 5; x++){
		
		for(y = 0; y <= 5; y++){
			
			printf("[%d]\t",z);
			
			z++;
			
		}//fin for
		
		printf("\n");
		
	}//fin for
	
	getchar();
		
	return 0;
	
}//fin int main

