//Serie de Fibonacci Parte 1

#include <stdio.h>
#include <stdlib.h>

int main(void){

	int x = 0, y = 1, z = 1, iContador1 = 0, iContador2 = 0, iParo;
	
	printf("Este programa imprime la Seria de Fibonacci");

	printf("\nDesde el 0 hasta el n%cmero que le indiques",163);
	
	printf("\n%cCu%cntos n%cmeros quieres? ",168,160,163);
	
	scanf("%d",&iParo);
	
	if(iParo <= 0){
		
		printf("ERROR. El n%cmero debe ser positivo y mayor a cero",163);	
		
	}else if(iParo == 1){
		
		printf("\nN%cmero\t|Fibonacci",163);
	
		printf("\n%d\t|%d",++iContador1,x);
		
	}else if(iParo == 2){
	
		printf("\nN%cmero\t|Fibonacci",163);
		
		printf("\n%d\t|%d",iContador1,x);
		
		printf("\n%d\t|%d",++iContador1,y);
	
	}else{
		
		iContador1 = iContador2;
		
		iContador2++;
		
		printf("\nN%cmero\t|Fibonacci",163);
		
		printf("\n%d\t|%d",iContador2,x);
		
		printf("\n%d\t|%d",++iContador2,y);
		
		
		for(iContador1 = 0; iContador1 < iParo-2; iContador1++){
			
			z = x +y;
			
			iContador2++;
						
			printf("\n%d\t|%d",iContador2,z);
			
			x = y;
			
			y = z;
			
		}//fin for
		
		getchar();
		
	}//fin if-esle
	
	
	return 0;
	
}//fin int main


