#include <stdio.h>
int main(void){

	int iNum1,
		iNum2,
		iNum3;

	//Probamos el convertir un tipo de dato a otro tipo 
	
	printf("\nDame el primer n%cmero (entero): ",163);
	
	scanf("%d", &iNum1);
	
	printf("\nDame el segundo n%cmero (entero): ",163);
	
	scanf("%d", &iNum2);
	
	printf("\nDame el tercer n%cmero (entero): ",163);
	
	scanf("%d", &iNum3);
	
	if(iNum1 > iNum2 && iNum2 > iNum3 || 
		iNum1 > iNum2 && iNum1 > iNum3){
		
		printf("\n\t%d es mayor que %d y %d\n"
		,iNum1,iNum2,iNum3);
		
	}else if(iNum1 < iNum2){
		
		printf("\n\t%d es mayor que %d \n"
		,iNum2,iNum1);
		
	}else{
		
		printf("\n\t %d y %d son iguales\n"
		,iNum1,iNum2);
		
	}//fin if-else
	
	return 0;
	
}//fin int main


