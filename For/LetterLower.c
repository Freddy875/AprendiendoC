//Hacer un bucle for que impirma las lestras min�sculas del alfabeto con el codigo ASCII

#include <stdio.h>
int main(void){
	
	char cLower; //cLower es para las letras min�sculas y proviene del ingl�s
	
	printf("Letras May%csculas del alfabeto",163);
	
	for(cLower = 97; cLower <= 122; cLower++){
		
		
		printf("\n%c",cLower);
		
	}//fin for
	
	return 0;
	
}//fin int main

