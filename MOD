//Calcular el modulo
#include <stdio.h>

int main(){
	
	int iNum1 = 0,
		  iNum2 = 0,
		  iResiduo = 0,
		  iRes = 0;
		  
	printf("Ingresa el primero valor: ");
	
	scanf("%d",&iNum1);
	
	printf("\nIngresa el segundo valor: ");
	
	scanf("%d",&iNum2);
	
	iRes = iNum1/iNum2;
	
	iResiduo = (iNum1 % iNum2);
	
	printf("\nEl resultado de la divisi%cn es: %d",162,iRes);
	
	printf("\nY el resultado del residuo es: %d",iResiduo);
	
	return 0;
	
}//fin int main
