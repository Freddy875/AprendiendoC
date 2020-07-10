//SiONO 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){
	
	char cRespuesta[2];
	char cAfirmativo1[2] = "Si";
		
	printf("%cQuieres continuar%c SI/NO ",168,63);
	
	gets(cRespuesta);
	
	if(strcmp(cRespuesta,cAfirmativo1) == 0){
		
		printf("\n%s",cRespuesta);
		
	}else{
		
		printf("\n%s",cRespuesta);
		
		printf("\nGracias vuelva pronto");
				
	}//fin if-else
	
	return 0;
	
}//fin int main
