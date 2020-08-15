#include <stdio.h>
#define num 10

int main(void){
	
	const int iConstante = 32;
	int iVariable = 12;
	
	printf("Valor de constante: %d\n",iConstante);
	printf("Valor de variable: %d\n",iVariable);
	printf("Valor del marco: %d\n",num);
	
	printf("\n\nCambiando valores...\n\n");
	
	//iConstante = 10;
	iVariable = 0;
	#define num 300
	
	//printf("Nuevo valor de constante: %d\n",iConstante);
	printf("Nuevo valor de variable: %d\n",iVariable);
	printf("nuevo valor de marco: %d\n",num);
	return 0;
	
}//fin int main


