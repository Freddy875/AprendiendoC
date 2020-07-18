/*
Sumar 1-2+3-4...n

impares(+)
pares (-)

iSumaPares   = -2-4-6...
iSumaImpares = 1+3+5...

iSuma = iSumaPares + iSumaImpares
*/

#include <stdio.h>
int main(void){
	
	int iNumero, iContador = 0, iSuma = 0, iSumaPares = 0, iSumaImpares = 0, iNegativo;
	
	printf("Ingresa el total de n%cmeros a sumar: ",163);
	
	scanf("%d",&iNumero);
	
	if(iNumero <= 0){
		
		printf("ERROR. El n%cmero debe ser positivo y diferente a cero",163);
		
	}else{
		
		while(iContador <= iNumero){
		
		if(iContador % 2 == 0){
		
			iNegativo = iContador * (-1);
			
			iSumaPares += iNegativo;
			
		}else{
				
			iSumaImpares += iContador;	
			
		}//fin if-else
		
		
		iContador++;
		
		}//fin while
		
		iSuma = iSumaPares + iSumaImpares; 
		
		printf("\nLa suma total es: %d",iSuma);
		
	}//fin if-else
	
	
	return 0;
	
}//fin int main


