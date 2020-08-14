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
	
	char sCodigo[10];
	
	char sTitulo[50];
	
	char sAutor[50];

}libro; //fin struct biblioteca 

int main(void){ //Inicio

	system("cls"); //Limpiar pantalla

	struct biblioteca libro3; 
	
	//Ingresa los datos de registro del libro
	
	fflush(stdin);
	
	printf("\nIngresa el codigo del libro: ");
	
	fgets(libro3.sCodigo,10,stdin);
	
	//scanf("%d",&libro.iCodigo);
	
	fflush(stdin);
	
	printf("\nIngresa el t%ctulo del libro: ",161);
		
	fgets(libro3.sTitulo,50,stdin);
	
	//scanf("%s",libro.sTitulo);
	
	fflush(stdin);
	
	printf("\nIngresa el nombre del autor: ");
	
	fgets(libro3.sAutor,50,stdin);
	
	//scanf("%s",libro.sAutor);
	
	//Imprime el registro
	
	printf("\nRegistro: \n%s \n%s \n%s\n",
	libro3.sCodigo,libro3.sTitulo,libro3.sAutor);
	
	return 0;
	
}//fin int main


