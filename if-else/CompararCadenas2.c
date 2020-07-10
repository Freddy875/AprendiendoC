	//Comparar cadenas

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char cCadena1[20], cCadena2[20];
	
	printf("Ingresa la primera cadena: ");
	
	gets(cCadena1);
	
	printf("\nIngresa la segunda cadena: ");
	
	gets(cCadena2);
	
	if(strcmp(cCadena1,cCadena2) == 0){
		
		printf("\nAmbos nombres son iguales. %s y %s",cCadena1,cCadena2);
		
	}else{
		
		printf("\nAmbos nombre NO son iguales. %s y %s",cCadena1,cCadena2);
		
	}//fin if-else
	
	printf("\n");
	
	system("PAUSE");
	
	return 0;
	
}//fin int main
			
