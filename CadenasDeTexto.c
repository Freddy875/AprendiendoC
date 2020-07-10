//Cadenas de Texto

#include <stdio.h>
#include <string.h>
int main(){
	
	char cCadena1[50],cCadena2[50];
	int iNumeroCaracteres,iOpcion;

	printf("%cQu%c deseas hacer?",168,130);
	
	printf("\n1. Concatenar cadenas");
	
	printf("\n2. Conocer la lognitud de cadenas");
	
	printf("\n3. Conocer si las cadenas son iguales");
	
	printf("\nIngresa la opci%cn que quieres hacer: ",162);
	
	scanf("%d",&iOpcion);
	
	switch(iOpcion){
		
		case 1:
			
			printf("\n1. Concatenar cadenas");
			
			printf("\nIngresa la primera cadena(50): ");
			
			scanf("%s",&cCadena1);
			
			printf("\nIngresa la segunda cadena(50): ");
			
			scanf("%s",&cCadena2);
			
			//strcat significa String Concatenate
	
			printf("\nLa Cadena 1 es: %s",cCadena1);
	
			printf("\nLa Cadena 2 es: %s",cCadena2);
	
			printf("\nConcatenando: %s",strcat(cCadena1,cCadena2));
	
		break;//1 strcat
		
		case 2:
			
			printf("\n2. Conocer la lognitud de cadenas");
			
			printf("\nIngresa la primera cadena(50): ");
			
			scanf("%s",&cCadena1);
			
			printf("\nIngresa la segunda cadena(50): ");
			
			scanf("%s",&cCadena2);
			
			//strlen sisgnifica String Length
			
			iNumeroCaracteres = strlen(cCadena1);
	
			printf("\nLa Cadena 1 tiene %d caracteres",iNumeroCaracteres);
	
			iNumeroCaracteres = strlen(cCadena2);
	
			printf("\nLa Cadena 2 tiene %d caracteres",iNumeroCaracteres);
				
		break;//2 strlen
		
		case 3:
			
			printf("\n3. Conocer si las cadenas son iguales");
			
			printf("\nIngresa la primera cadena(50): ");
			
			scanf("%s",&cCadena1);
			
			printf("\nIngresa la segunda cadena(50): ");
			
			scanf("%s",&cCadena2);
			
			if(strcmp(cCadena1,cCadena2) == 0){
		
				printf("\nLa Cadena 1 %s",cCadena1);
				
				printf("\nLa Cadena 2 %s",cCadena2);
				
				printf("\nSon igules");
		
			}else{
		
				printf("\nLa Cadena 1: %s",cCadena1);
				
				printf("\nLa Cadena 2: %s",cCadena2);
				
				printf("\nNO Son igules");
		
			}//fin if-else
			
		break;//3 strcmp
		
		default:
			
			printf("Opci%cn NO valida",162);
		
	}//fin del switch
		
	return 0;
	
}//fin int main
