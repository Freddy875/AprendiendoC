//El mayor de tres numeros

#include <stdio.h>
int main(){
	
	int iNum1, iNum2, iNum3;
	
	printf("Ingresa el primer valor: ");
	
	scanf("%d",&iNum1);
	
	printf("\nIngresa el segundo valor: ");
	
	scanf("%d",&iNum2);
	
	printf("\nIngresa el tercer valor: ");
	
	scanf("%d",&iNum3);
	
	if(iNum1 == iNum2 && iNum1 == iNum3) {
		
		printf("\n%d, %d y %d. Los tres valores son iguales",iNum1,iNum2,iNum3);
		
	}else if(iNum1 == iNum2 && iNum1 > iNum3) {
		
		printf("\n%d y %d son iguales y mayores que %d",iNum1,iNum2,iNum3);
		
	}else if(iNum1 == iNum3 && iNum1 > iNum2) {
		
		printf("\n%d y %d son iguales y mayores que %d",iNum1,iNum3,iNum2);
	
	}else if (iNum2 == iNum3 && iNum2 > iNum1){
		
		printf("\n%d y %d son iguales y mayores que %d",iNum2,iNum3,iNum1);
		
	}else if (iNum1 > iNum2 && iNum1 > iNum3){
		
		printf("\n%d es mayor que %d y %d",iNum1,iNum2,iNum3);
		
	}else if (iNum2 > iNum1 && iNum2 > iNum3){
		
		printf("\n%d es mayor que %d y %d",iNum2,iNum1,iNum3);
		
	}else{
		
		printf("%d es mayor que %d y %d",iNum3,iNum1,iNum2);
	
	}//fin if else
	
	return 0;
	
}//fin int main
