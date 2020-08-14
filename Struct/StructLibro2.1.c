#include <stdio.h>
/*
Archivos de cabecera para subrutinas de E/S 
Input/OutPut
*/
#include <stdlib.h>

/*
Archivo de cabecer para subrutinas 
de utilidades
*/

#include <string.h>

struct biblioteca{
	
	char sCodigo[10];
	
	char sTitulo[50];
	
	char sAutor[50];

}libro2; //fin struct biblioteca 

void limpiar (char *cCadena){
	
	char *p;
	
	p = strchr(cCadena, '\n');
	
	if(p)
		*p = '\0';
	
}//fin void limpiar 

int main(void){
	
	
	system("cls"); //Limpiar pantalla

	struct biblioteca libro3; 
	
	//Ingresa los datos de registro del libro
	
	fflush(stdin);
	
	printf("\nIngresa el codigo del libro: ");
	
	fgets(libro2.sCodigo,10,stdin);
	
	//scanf("%d",&libro.iCodigo);
	
	fflush(stdin);
	
	printf("\nIngresa el t%ctulo del libro: ",161);
		
	fgets(libro2.sTitulo,50,stdin);
	
	limpiar(libro2.sTitulo);
	
	//scanf("%s",libro.sTitulo);
	
	fflush(stdin);
	
	printf("\nIngresa el nombre del autor: ");
	
	fgets(libro2.sAutor,50,stdin);
	
	//scanf("%s",libro.sAutor);
	
	//Imprime el registro
	
	printf("\nRegistro: \n%d \n%s \n%s\n"
	,atoi(libro2.sCodigo)
	,libro2.sTitulo
	,libro2.sAutor);
	
	return 0;

}//fin int main

