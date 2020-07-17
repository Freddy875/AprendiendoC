//SiONo 4

#include <stdio.h>
#include <stdlib.h>
#include <string.h>	

int main(){

	char sRespuesta[2];
	
	printf("%cQuieres continuar%c (SI/NO) ",168,63);
	
	//scanf("%s",&sRespuesta);
	
	gets(sRespuesta);
	
	if(strcmp(sRespuesta,"SI") == 0){
		
		printf("\n%s",sRespuesta);
		
		printf("\nAfirmativa");
		
	}else if(strcmp(sRespuesta,"Si") == 0){
		
		printf("\n%s",sRespuesta);
		
		printf("\nAfirmativa");
		
	}else if(strcmp(sRespuesta,"si") == 0){
	
		printf("\n%s",sRespuesta);
		
		printf("\nAfirmativa");
		
	}else if(strcmp(sRespuesta,"NO")){
	
		printf("\n%s",sRespuesta);
		
		printf("\nNegativa");
	
	}else if(strcmp(sRespuesta,"No")){
		
		printf("\n%s",sRespuesta);
		
		printf("\nNegativa");
	
	}else if(strcmp(sRespuesta,"no")){
		
		printf("\n%s",sRespuesta);
		
		printf("\nNegativa");
	
	}else{
	
		printf("Opci%cn NO Valida",162);
	
	}//fin if-else
	
	return 0;
	
}//fin int main


