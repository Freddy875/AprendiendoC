//Hacer un bucle for que impirma las lestras May�sculas del alfabeto con el codigo ASCII

#include <stdio.h>
int main(void){
	
	char cUpper; //cUpper es para las letras may�sculas y proviene del ingl�s
	
	printf("Letras May%csculas del alfabeto",163);
	
	for(cUpper = 65; cUpper <= 90; cUpper++){
		
		
		printf("\n%c",cUpper);
		
	}//fin for
	
	return 0;
	
}//fin int main

