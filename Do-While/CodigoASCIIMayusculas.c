//Hacer un bucle do while que impirma las lestras Mayúsculas del alfabeto con el codigo ASCII

#include <stdio.h>
int main(void){
	
	char cLetra = 65;
	
	printf("Letras May%csculas del alfabeto",163);
	
	do{
		
		printf("\n%c",cLetra);
		
		cLetra++;
		
	}while(cLetra <= 90);//fin do-while
		
	return 0;
	
}//fin int main

