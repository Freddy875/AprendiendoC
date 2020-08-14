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

struct biblioteca{
	
	int iCodigo;
	
	char sTitulo[20];
	
	char sAutor[20];

}libro; //fin struct biblioteca 

/*
struct biblioteca libro = {0};
Define libro con el tipo de dato libro
*/


int main(void){ //Inicio

	system("cls"); //Limpiar pantalla
	
	printf("\nIngresa el codigo del libro: ");
	
	scanf("%d",&libro.iCodigo);
	
	printf("\nIngresa el t%ctulo del libro: ",161);
	
	//gets(libro.sTitulo);
	
	scanf("%s",libro.sTitulo);
	
	printf("\nIngresa el nombre del autor: ");
	
	//gets(libro.sAutor);
	
	scanf("%s",libro.sAutor);
	
	//Imprime el registro
	
	printf("\nRegistro: \n%d \n%s \n%s",
	libro.iCodigo,libro.sTitulo,libro.sAutor);
	
	return 0;
	
}//fin int main


