/*
Convierte centimetro a pulgadas 
Y pulgadas a centimetros	 
*/

#include <stdio.h>
#include <string.h>
int main(void){
	
	float fCentimetros, fPulgadas, fValor;
	
	char sUnidad[12];
	
	printf("Este programa convierte cent%cmetros a pulgadas",161);
	
	printf("\nO de pulgadas a cent%cmetros",161);
	
	printf("\nIngresa las unidades: (p = pulgadas o c = cent%cmetros): ",161);
	
	gets(sUnidad);
	
	printf("\nIngresa un n%cmero: ",163);
	
	scanf("%f",&fValor);
	
	if(fValor <= 0){
		
		printf("ERROR. El n%cmero debe ser positivo y diferente de cero",162);
		
	}else{
	
	
		if(
		 strcmp(sUnidad,"p") == 0 
	  || strcmp(sUnidad,"P") == 0 
	  || strcmp(sUnidad,"pulgadas") == 0
	  || strcmp(sUnidad,"Pulgadas") == 0
	  || strcmp(sUnidad,"PULGADAS") == 0
	  ){
			
			fCentimetros = fValor * 2.54;
			
			printf("\nDe pulgadas a cent%cmetros",161);
			
			printf("\n%.2f pulgadas equivale a %.2f cent%cmetros",fValor,fCentimetros,161);
			
		}else if(
			 strcmp(sUnidad,"c") == 0
		  || strcmp(sUnidad,"C") == 0
		  || strcmp(sUnidad,"centimetros") == 0
		  || strcmp(sUnidad,"Centimetros") == 0
		  || strcmp(sUnidad,"CENTIMETROS") == 0
	
		){
	
			fPulgadas = fValor/2.54;
			
			printf("\nDe cent%cmetros a pulgadas",161);
			
			printf("\n%.2f cent%cmetros equivale a %.2f pulgadas",fValor,161,fPulgadas);
			
		}else if(
			strcmp(sUnidad,"p") != 0 
			|| strcmp(sUnidad,"P") != 0 
	  		|| strcmp(sUnidad,"pulgadas") != 0
	  		|| strcmp(sUnidad,"Pulgadas") != 0
	  		|| strcmp(sUnidad,"PULGADAS") != 0
	  		|| strcmp(sUnidad,"c") != 0
		  	|| strcmp(sUnidad,"C") != 0
		  	|| strcmp(sUnidad,"centimetros") != 0
		  	|| strcmp(sUnidad,"Centimetros") != 0
		  	|| strcmp(sUnidad,"CENTIMETROS") != 0
	
		){
		
			printf("\nOpci%cn NO Valida",162);
		
		}else{
		
			printf("\nFin del programa");
		
		}//fin if-else
		
	}//fin if-else
	
	return 0;
	
}//fin int main


