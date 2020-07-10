//El mayor de tres numeros

#include <stdio.h>
int main(){
	
	float fNum1, fNum2, fNum3;
	
	printf("Ingresa el primer valor: ");
	
	scanf("%f",&fNum1);
	
	printf("\nIngresa el segundo valor: ");
	
	scanf("%f",&fNum2);
	
	printf("\nIngresa el tercer valor: ");
	
	scanf("%f",&fNum3);
	
	if(fNum1 == fNum2 && fNum1 == fNum3) {
		
		//En este caso validamos que los tres números sean iguales
		
		printf("\n%.2f, %.2f y %.2f. Los tres valores son iguales",fNum1,fNum2,fNum3);
		
	}else if(fNum1 == fNum2 && fNum1 > fNum3) {
		
		/* En este caso validamos que el primer y segundo número 
		sean iguales y que sean mayores al tercero */
		
		printf("\n%.2f y %.2f son iguales y mayores que %.2f",fNum1,fNum2,fNum3);
		
	}else if(fNum1 == fNum3 && fNum1 > fNum2) {
		
		/* En este caso validamos que el primer y el tercer número 
		sean iguales y mayores que el segundo */
		
		printf("\n%.2f y %.2f son iguales y mayores que %.2f",fNum1,fNum3,fNum2);
	
	}else if (fNum2 == fNum3 && fNum2 > fNum1){
		
		/* En este caso validamos que el segundo y el tercer número
		sean iguales y mayores que el primero */
		
		printf("\n%.2f y %.2f son iguales y mayores que %.2f",fNum2,fNum3,fNum1);
		
	}else if (fNum1 > fNum2 && fNum1 > fNum3){ 
		
		/* A partir de este punto ya vemos que ninguno de los números sean iguales
		Y validamos que el el primer número sea el mayor de los tres */
		
		printf("\n%.2f es mayor que %.2f y %.2f",fNum1,fNum2,fNum3);
		
	}else if (fNum2 > fNum1 && fNum2 > fNum3){
		
		/*Aquí validamos que el segundo número sea el mayor de los tres */
		
		printf("\n%.2f es mayor que %.2f y %.2f",fNum2,fNum1,fNum3);
		
	}else{
		
		/* Por descarte, eneste último validamos que el tercer 
		número sea el mayor de los tres */
		
		printf("%.2f es mayor que %.2f y %.2f",fNum3,fNum1,fNum2);
	
	}//fin if else
	
	return 0;
	
}//fin int main
