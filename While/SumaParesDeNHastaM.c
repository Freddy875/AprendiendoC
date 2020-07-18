//Sumar pares desde n hasta m

#include <stdio.h>
int main(void){
	
	int iNumeroInicial, iNumeroFinal, iSuma;
	
	printf("Ingresa con que n%cmero quieres iniciar: ",163);
	
	scanf("%d",&iNumeroInicial);
	
	printf("\nIngresa con que n%cmero quieres terminar: ",163);
	
	scanf("%d",&iNumeroFinal);
	
	if(iNumeroInicial >= iNumeroFinal){
		
		printf("\nERROR. El n%cmero inicial debe ser menor o diferente al n%cmero final",163,163);
		
	}else{
		
		while(iNumeroInicial <= iNumeroFinal){
			
			if(iNumeroInicial % 2 == 0){
				
				iSuma += iNumeroInicial;
				
				//printf("\n%d",iNumeroInicial);
				
			}else{
				
				//No hacer nada
				
			}//fin if-else
			
			iNumeroInicial++;
			
		}//fin while
		
	}//fin if-esle
	
	printf("\nLa suma total es: %d",iSuma);
	
	return 0;
	
}//fin int main


