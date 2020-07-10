//Casteo

#include <stdio.h>
int main(){
	
	int iNum1=12.56;//Conversion implicita
	//El numero se muestra 12 porque fue definido como entero
	
	float fNum2;
	
	printf("El valor es: %d",iNum1);
	
	fNum2 = (float)iNum1;
	
	printf("\nAhora el valor es: %f",fNum2);
	
	return 0;
	
}//fin int main
