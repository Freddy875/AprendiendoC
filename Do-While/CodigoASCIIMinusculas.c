//Hacer un bucle do while que impirma las lestras Minúsculas del alfabeto con el codigo ASCII

#include <stdio.h>
int main(void){
	
	char cLetra = 97;
	
	printf("Letras Min%csculas del alfabeto",163);
	
	do{
		
		printf("\n%c",cLetra);
		
		cLetra++;
		
	}while(cLetra <= 122);//fin do-while
		
	return 0;
	
}//fin int main

