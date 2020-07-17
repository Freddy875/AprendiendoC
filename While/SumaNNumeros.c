//Suma de n Números

#include <stdio.h>
int main(void){
	
	int iContador = 0, iNumero, iSuma = 0;	
	
	printf("Ingresa el total de n%cmeros a sumar: ",163);
	
	scanf("%d",&iNumero);
	
	if(iNumero <= 0){
		
		printf("ERROR. El n%cmero debe ser positivo y mayor a cero",163);
		
	}else{
		
		
		while(iContador <= iNumero){
		
			iSuma += iContador;
			
			iContador++;
			
		}//fin while	
		
	}//fin if-else
	
	printf("\nLa suma es: %d",iSuma);
	
	return 0;
	
}//fin int main


