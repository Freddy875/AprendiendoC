#include <stdio.h>
#include <string.h>

struct datos{
	
	char cNombre[25]; /*Nombre*/
	
	char cApellido[25]; /*Apellido*/
	
	int iEdad; /*Edad*/

	float fSalario; /*Salario*/	
	
};//fin struct

struct datos misDatos; /*Definimos misDatos del tipo |:%estructura datos*/

void mostrarNombre(struct datos *p); /*Prototipo de la funcion*/

int main(void){
	
	struct datos *stringPuntero; /*Un apuntador a una estructura del tipo datos*/
	
	stringPuntero = &misDatos; /*Apuntamos el apuntador a misDatos*/
	
	strcpy(misDatos.cApellido,"Fulanito");
	
	strcpy(misDatos.cNombre,"Cosme");
	
	printf("\n%s",misDatos.cNombre);
	
	printf("\n%s",misDatos.cApellido);
	
	misDatos.iEdad = 45;
	
	mostrarNombre(stringPuntero); /*Llamamos a la funcion pasandole el puntero*/
	
	return 0;
	
}//fin int main

void mostrarNombre(struct tag *p){
		
		printf("\n%s ", p --> cNombre); /*p apunta a una estructura*/
		
		printf("\n%s ", p --> cApellido);
		
		printf("\n%d " ,p --> edad);
		
}


