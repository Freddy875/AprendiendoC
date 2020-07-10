/*
Prueba de Divisivilidad 2
Si el denominador es 0 NO se puede realizar la operación 
*/

#include <stdio.h>
int main(){
	
	int iNum1,iNum2;
	
	printf("Ingresa el primer valor: ");
	
	scanf("%d",&iNum1);
	
	printf("\nIngresa el segundo valor: ");
	
	scanf("%d",&iNum2);
	
	if(iNum2 == 0 ) {
	
		printf("\nERROR.No se puede dividir un entre 0");
		
	
	}else {
		
		printf("\nM%cxico",130);
		
		printf("\nEl resultado de la divisi%cn es: %d",162,iNum1/iNum2);
		
	}//fin if-esle
	
	return 0;
	
}//fin int main
