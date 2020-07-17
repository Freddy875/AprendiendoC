//Prueba de divisivilidad

#include <stdio.h>
int main(){
	
	int iNum1,iNum2;
	
	printf("Ingresa el primer valor: ");
	
	scanf("%d",&iNum1);
	
	printf("\nIngresa el segundo valor: ");
	
	scanf("%d",&iNum2);
	
	if(iNum1 % iNum2 == 0 ) {
	
		printf("\nEl n%cmero %d es divisible ente el n%cmero %d",163,iNum1,163,iNum2);
		
	
	}else{
		
		printf("\nEl n%cmero %d NO es divisible ente el n%cmero %d",163,iNum1,163,iNum2);
		
	}//fin if-esle
	
	return 0;
	
}//fin int main
