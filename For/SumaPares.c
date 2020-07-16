//Suma todos los números pares
#include <stdio.h>
int main(){

	int iContador, iParo, iSuma = 0 ;
	
	printf("Ingresa hasta que n%cmero quieres sumar: ",163);
	
	scanf("%d",&iParo);
	
	if(iParo <= 0 ){
		
		printf("ERROR. El n%cmero debe ser positivo y diferente de cero",163);
		
	}else{
	
		for(iContador = 0; iContador <= iParo; iContador++){
		
		if(iContador % 2 == 0){
			
			printf("\n%d + %d = %d",iSuma,iContador, iSuma = iSuma + iContador);		
			
		}else{
			
			//No hacer nada
			
		}//fin if-else
		
	}//fin for
		
	}//fin if-esle

	printf("\nAl final la suma de todos los n%cmeros pares es: %d",163,iSuma);
			
	return 0;
	
}//fin int main


