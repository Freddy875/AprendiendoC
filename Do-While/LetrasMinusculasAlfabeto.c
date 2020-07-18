//Hacer un bucle do while que impirma las lestras minúsculas del alfabeto

#include <stdio.h>
int main(void){
	
	char cLetra = 'a';
	
	printf("Letras min%csculas del alfabeto",163);
	
	do{
		
		printf("\n%c",cLetra);
		
		cLetra++;
		
	}while(cLetra <= 'z');//fin do-while
		
	return 0;
	
}//fin int main


