//SiONO 5

#include <stdio.h>
#include <stdlib.h>
#include <string.h>	

int main(){

	char sRespuesta[2];
	
	char sAfirmativo1[2] = "SI";
	
	char sAfirmativo2[2] = "Si";
	
	char sAfirmativo3[2] = "si";
	
	char sNegativo1[2] = "NO";
	
	char sNegativo2[2] = "No";
	
	char sNegativo3[2] = "no"; 
	
	printf("%cQuieres continuar%c (SI/NO) ",168,63);
	
	//scanf("%s",&sRespuesta);
	
	gets(sRespuesta);
	
	if(strcmp(sRespuesta,sAfirmativo1) == 0){
		
		printf("\n%s",sRespuesta);
		
		printf("\nAfirmativa");
		
	}else if(strcmp(sRespuesta,sAfirmativo2) == 0){
		
		printf("\n%s",sRespuesta);
		
		printf("\nAfirmativa");
		
	}else if(strcmp(sRespuesta,sAfirmativo3) == 0){
	
		printf("\n%s",sRespuesta);
		
		printf("\nAfirmativa");
		
	}else if(strcmp(sRespuesta,sNegativo1) == 0){
	
		printf("\n%s",sRespuesta);
		
		printf("\nNegativa");
	
	}else if(strcmp(sRespuesta,sNegativo2) == 0){
		
		printf("\n%s",sRespuesta);
		
		printf("\nNegativa");
	
	}else if(strcmp(sRespuesta,sNegativo3) == 0){
		
		printf("\n%s",sRespuesta);
		
		printf("\nNegativa");
	
	}else{
	
		printf("Opci%cn NO Valida",162);
	
	}//fin if-else
	
	return 0;
	
}//fin int main


