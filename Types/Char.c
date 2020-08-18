#include <stdio.h>

char cLetra; //Caracter de una posicion


int main(void){
	
	cLetra = 's'; //Asignacion de un valor 
	
	/*
	cLetra = '\'' //Asignacion de un valor
	El caracter blackslash \ es un caracter de escape
	*/	
	
	printf("La letra es %c.\nSu valor en ASCII es %d\n"
	,cLetra,cLetra);
	
	return 0;
	
}//fin int main


