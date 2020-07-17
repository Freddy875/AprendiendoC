//SioNo parte 6

#include <stdio.h>
#include <stdlib.h>
#include <string.h>	

int main(void){
	
	char sRespuesta[2];
	
	printf("%cQuieres continuar? (SI/NO) ",168);
	
	gets(sRespuesta);
	
	if(strcmp(sRespuesta,"Si") == 0 || strcmp(sRespuesta,"SI") == 0 || strcmp(sRespuesta,"si") == 0){
		
		printf("\n%s",sRespuesta);
		
		printf("\nAfirmativa");
		
	}else if(strcmp(sRespuesta,"No") == 0 || strcmp(sRespuesta,"NO") || strcmp(sRespuesta,"no") == 0){
		
		printf("\n%s",sRespuesta);
		
		printf("\nNegativa");
		
	}else{
		
		printf("Opci%cn NO Valida",162);
		
	}//fin if-else

	return 0;
	
}//fin int main

