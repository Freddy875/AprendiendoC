//Comparar cadenas

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char cNombre1[20], cNombre2[20];
	
	printf("Ingresa el primer nombre: ");
	
	gets(cNombre1);
	
	printf("\nIngresa el segundo nombre: ");
	
	gets(cNombre2);
	
	if(strcmp(cNombre1,cNombre2) == 0){
		
		printf("\nAmbos nombres son iguales. %s y %s",cNombre1,cNombre2);
		
	}else{
		
		printf("\nAmbos nombre NO son iguales. %s y %s",cNombre1,cNombre2);
		
	}//fin if-else
	
	printf("\n");
	
	system("PAUSE");
	
	return 0;
	
}//fin int main
