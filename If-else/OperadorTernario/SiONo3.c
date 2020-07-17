//SiONo 3

#include <stdio.h>
#include <stdlib.h>
#include <string.h>	

int main(){

	char sRespuesta[2];
	
	printf("%cQuieres continuar%c (SI/NO) ",168,63);
	
	gets(sRespuesta);
	
	if(strcmp(sRespuesta,"SI") == 0){
		
		printf("\n%s",sRespuesta);
		
		printf("\nAfirmativo");
		
	}else if(strcmp(sRespuesta,"Si") == 0){
		
		printf("\n%s",sRespuesta);
		
		printf("\nAfirmativo");
		
	}else if(strcmp(sRespuesta,"si") == 0){
	
		printf("\n%s",sRespuesta);
		
		printf("\nAfirmativo");
		
	}else{
	
		printf("\n%s",sRespuesta);
		
		printf("\nGracias vuelva pronto");
	
	}//fin if-else
	
	return 0;
	
}//fin int main


