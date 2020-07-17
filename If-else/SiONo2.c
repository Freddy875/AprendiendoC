//SiONo2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>	

int main(){

	char sRespuesta[2];
	
	//char sAfirmativo1[2] = "SI";
	
	//char sAfirmativo2[2] = "Si";
	
	char sAfirmativo3[2] = "si";
	
	printf("%cQuieres continuar%c SI/NO ",168,63);
	
	gets(sRespuesta);
	
	//printf("\n%s",sRespuesta);
	
	//printf("\n");
	
	//system("PAUSE");
	
	if(strcmp(sRespuesta,"SI") == 0){
		
		printf("\n%s",sRespuesta);
		
		printf("\nAfirmativo");
		
	}else if(strcmp(sRespuesta,"Si") == 0){
		
		printf("\n%s",sRespuesta);
		
		printf("\nAfirmativo");
		
	}else if(strcmp(sRespuesta,sAfirmativo3) == 0){
	
		printf("\n%s",sRespuesta);
		
		printf("\nAfirmativo");
		
	}else{
	
		printf("\n%s",sRespuesta);
		
		printf("\nGracias vuelva pronto");
	
	}//fin if-else
	
	return 0;
	
}//fin int main


