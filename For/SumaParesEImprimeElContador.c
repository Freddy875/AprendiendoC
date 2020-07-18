//Suma de los numeros pares y al final impirme el valor final del contador 

#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int x = 0,y = 1,iContador1;
	
	printf("\nPares");
		
	for(iContador1 = 1; iContador1 <=5; iContador1++){
		
		x = iContador1 + y;
		
		printf("\n%d",x);
		
		y++;
		
	}//fin for
	
	printf("\nValor final: %d",iContador1);
	
	printf("\nInpares");
	
	int a = 0,b = 1,iContador2;
	
	for(iContador2 = 0; iContador2 <=5; iContador2++){
		
		a = iContador2 + b;
		
		printf("\n%d",a);
		
		b++;
		
	}//fin for
	
	printf("\nValor final: %d",iContador2);
	
	getchar();
	
	return 0;
	
}//fin int main
