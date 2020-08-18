#include <stdio.h> 
/*
Archivo de cabecera para subrutinas de
Entrada/Salida Input/Output
*/
/*#include <stdlib.h>
Archivo de cabecera para subrutinas
de utilidades
*/
#include <string.h> 
/*
Archivo de cabecer para funciones de cadena
*/
int main(void){

	char sSaludos[20] = "Hola"; //Define una variabla de cadena
	
	strcpy(sSaludos,"Buenos");//Asigna valor de cadena
	
	strcat(sSaludos," dias");
	
	strcat(sSaludos," usuario");
	
	printf("%s\n",sSaludos); //Muestra la nueva cadena 
	
	return 0;
	
}//fin int main


