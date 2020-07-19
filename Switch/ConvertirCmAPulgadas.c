/*
Convierte centimetro a pulgadas 
Y pulgadas a centimetros 
*/

#include <stdio.h>
#include <string.h>

int main(void){
	
	float fCentimetros, fPulgadas, fValor;
	
	char cUnidad;
	
	printf("Este programa convierte cent%cmetros a pulgadas",161);
	
	printf("\nO de pulgadas a cent%cmetros",161);
	
	printf("\nIngresa las unidades: (p = pulgadas o c = cent%cmetros): ",161);
	
	//gets(sUnidad);
	
	scanf("%c",&cUnidad);
	
	printf("\nIngresa un n%cmero: ",163);
	
	scanf("%f",&fValor);
	
	if(fValor <= 0){
		
		printf("ERROR. El n%cmero debe ser positivo y diferente de cero",162);
		
	}else{
		
		switch(cUnidad){
		
		case 'p':
		case 'P':
			
			fCentimetros = fValor * 2.54;
			
			printf("\nDe pulgadas a cent%cmetros",161);
			
			printf("\n%.2f pulgadas equivale a %.2f cent%cmetros",fValor,fCentimetros,161);
			
		break; //case p o case P
		
		case 'c':
		case 'C':
		
			fPulgadas = fValor/2.54;
			
			printf("\nDe cent%cmetros a pulgadas",161);
			
			printf("\n%.2f cent%cmetros equivale a %.2f pulgadas",fValor,161,fPulgadas);
			
		
		break; //case c o case C
		
		default:
			
			printf("\nOpci%cn NO Valida",162);
			
		}//fin switch-case
	
	}//fin if-esle
	
	return 0;
	
}//fin int main


