//Seria Fibonacci Parte 2

#include <stdio.h>
int main(){
	
	int iNumero, i = 0, j = 0 ,x = 0, y = 1, z = 1;
	
	printf("Este programa imprime la Seria de Fibonacci");

	printf("\nDesde el 0 hasta el n%cmero que le indiques",163);
	
	printf("\n%cCu%cntos n%cmeros quieres? ",168,160,163);
	
	scanf("%d",&iNumero);
	
	if(iNumero <= 0 ){
		
		printf("ERROR. El n%cmero debe ser positivo y mayor a cero",163);
		
	}else{
		
		iNumero--; //Le reducimos en uno la cantidad para que empiece en 0
	
		j = i;
	
		j++;
	
		printf("\nN%cmero\t|Fibonacci",163);
	
		printf("\n%d\t|%d",j,x);
	
		for(i = 1; i <= iNumero; i++){

			j++;	

			printf("\n%d\t|%d",j,z);
		
			z = x + y;
		
			x = y;
		
			y = z;
				
		}//fin for
		
		getchar();
		
	}//fin if esle

	return 0;
	
}//fin int main
