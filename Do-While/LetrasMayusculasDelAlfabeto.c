//Hacer un bucle do while que impirma las lestras Mayúsculas del alfabeto

#include <stdio.h>
int main(void){
	
	char cLetra = 'A';
	
	printf("Letras May%csculas del alfabeto",163);
	
	do{
		
		printf("\n%c",cLetra);
		
		cLetra++;
		
	}while(cLetra <= 'Z');//fin do-while
		
	return 0;
	
}//fin int main

