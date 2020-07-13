//Sentencia Switch con Vocales

#include <stdio.h>
int main(){

	char cVocal;
	
	printf("Ingresa una letra vocal: ");
	
	scanf("%c",&cVocal);

	switch(cVocal){
		
		case 'a':
		case 'A':
			
			printf("\nEsta es la letra %c",cVocal);	
			
		break;//a
	
		case 'e':
		case 'E':
	
			printf("\nEsta la letra %c",cVocal);
			
		break;//e
		
		case 'i':
		case 'I':
			
			printf("\nEsta es la letra %c",cVocal);
			
		break;//i
		
		case 'o':
		case 'O':
			
			printf("\nEsta es la letra %c",cVocal);
			
		break;//o
		
		case 'u':
		case 'U':
			
			printf("\nEsta es la letra %c",cVocal);
			
		break;//u
		
		default: 
		
			printf("\nOpci%cn NO valida",162);
		
			//	printf("\nUsted ingreso %c",cVocal);
		
	}//fin del switch
	
	return 0;
	
}//fin int main
