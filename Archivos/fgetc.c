/*
Lee un caracter a la vez del archivo que esta siendo señalado con un puntero.

char fgetc(FILE *archivo)
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	FILE *archivo;
	char cCaracter;
	
	archivo = fopen("gente.txt","r");
	
	if(archivo == NULL ){
		
		printf("\nERROR. Problema de apertura del archivo.\n\n");
		
	}else{
		
		printf("\nEl contenido del archivo de prueba es: \n\n");
		
		while((cCaracter = fgetc(archivo)) != EOF);
			
			printf("%c",cCaracter);
		
	}//fin if-else
	
	fclose(archivo);
	
	return 0;
	
}//fin int main

