/*
¿Quieres continuar? (Si/No)

Si ingresa que si se repite el ciclo y se aumenta en uno el contador
Si ingresa que no se termina el ciclo

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>	

int main(void){
	
	char sRespuesta[2];
	
	int iIteracion = 0;
	
	do{
		
		fflush(stdin);
		
		printf("\nN%cmero de iteraci%cn: %d",163,162,iIteracion);
		
		printf("\n%cQuieres continuar? (SI/NO) ",168);
	
		gets(sRespuesta);
		
		iIteracion++;
		
	}while(strcmp(sRespuesta, "Si") == 0 || strcmp(sRespuesta,"si") == 0 || strcmp(sRespuesta,"SI") == 0 ||
	 
	 strcmp(sRespuesta,"s") == 0 || strcmp(sRespuesta,"S") == 0 );//fin do-while;
	
	printf("\nHaz salido despu%cs de %d iteraciones ",130,iIteracion);
	
	return 0;
	
}//fin int main
