//Sentencia Switch

#include <stdio.h>
int main(){

	int iNumero;
	
	printf("Ingresa un numero entre (1-3): ");
	
	scanf("%d",&iNumero);

	switch(iNumero){
		
		case 1:
			
			printf("\nEste es el n%cmero %d",163,iNumero);	
			
		break;//1
	
		case 2:
	
			printf("\nEste es el n%cmero %d",163,iNumero);
			
		break;//2
		
		case 3:
			
			printf("\nEste es el n%cmero %d",163,iNumero);
			
		break;//3
		
		default: 
		
			printf("\nOpci%cn NO valida",162);
			
			//printf("\nTu ingresaste %d",iNumero);
		
		
	}//fin del switch
	
	return 0;
	
}//fin int main	
