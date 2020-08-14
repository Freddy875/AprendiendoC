#include <stdio.h>
#include <stdlib.h>

struct datos{
	
	char cNombre[60];
		
}persona; //fin struct datos

void AgregarPersona(struct datos *persona.nombre);

int main(void){
	
	AgregarPersona();
		
}//fin int main

void AgregarPersona(){
	
	printf("\n");
	
	puts("Ingresa el nombre completo de la persona");
	
	fflush(stdin);
	
	fgets(persona.nombre,60,stdin);
	
	printf("\nEl nombre de la persona es: ", persona.nombre);
	
}//fin void AgregarPersona
