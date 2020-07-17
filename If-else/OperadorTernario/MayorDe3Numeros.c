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
		
		//En este caso validamos que los tres números sean iguales
		
		printf("\n%d, %d y %d. Los tres valores son iguales",iNum1,iNum2,iNum3);
		
	}else if(iNum1 == iNum2 && iNum1 > iNum3) {
		
		/* En este caso validamos que el primer y segundo número 
		sean iguales y que sean mayores al tercero */
		
		printf("\n%d y %d son iguales y mayores que %d",iNum1,iNum2,iNum3);
		
	}else if(iNum1 == iNum3 && iNum1 > iNum2) {
		
		/* En este caso validamos que el primer y el tercer número 
		sean iguales y mayores que el segundo */
		
		printf("\n%d y %d son iguales y mayores que %d",iNum1,iNum3,iNum2);
	
	}else if (iNum2 == iNum3 && iNum2 > iNum1){
		
		/* En este caso validamos que el segundo y el tercer número
		sean iguales y mayores que el primero */
		
		printf("\n%d y %d son iguales y mayores que %d",iNum2,iNum3,iNum1);
		
	}else if (iNum1 > iNum2 && iNum1 > iNum3){ 
		
		/* A partir de este punto ya vemos que ninguno de los números sean iguales
		Y validamos que el el primer número sea el mayor de los tres */
		
		printf("\n%d es mayor que %d y %d",iNum1,iNum2,iNum3);
		
	}else if (iNum2 > iNum1 && iNum2 > iNum3){
		
		/*Aquí validamos que el segundo número sea el mayor de los tres */
		
		printf("\n%d es mayor que %d y %d",iNum2,iNum1,iNum3);
		
	}else{
		
		/* Por descarte, eneste último validamos que el tercer 
		número sea el mayor de los tres */
		
		printf("%d es mayor que %d y %d",iNum3,iNum1,iNum2);
	
	}//fin if else
	
	return 0;
	
}//fin int main
