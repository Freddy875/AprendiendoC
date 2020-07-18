//SiONo con Switch

#include <stdio.h>
#include <stdlib.h>
#include <string.h>	

int main(){
	
	char sRespuesta[2];
	
	printf("%cQuieres continuar%c (SI/NO) ",168,63);
	
	//char ("%s",&sRespuesta);
	
	gets(sRespuesta);
	
	switch(sRespuesta){
		
		case "SI":
		case "Si":
		case "si":
		
			printf("\n%s",Respuesta);
			
			printf("\nAfirmativa");
		
		break;//Si
		
		case "NO":
		case "No":
		case "no":
		
			printf("\n%s",Respuesta);
			
			printf("\nNegativa");
			
		break;//No
		
		default:
			
			printf("Opci%cn NO Valida",162);
		
	}//fin switch
	
	return 0;
	
}//fin int main

