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

#include "DatosLibros.h"


/*
Archivo de cabecer para subrutinas 
de utilidades
*/

int main(void){
	
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
	

