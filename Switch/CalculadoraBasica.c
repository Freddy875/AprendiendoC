//Calculadora basica

#include <stdio.h>
int main(){
	
	float fNumero1 = 0.0,
		  fNumero2 = 0.0,
		  fTotal = 0.0;
	
	//+,-,*,/, o %
	char cOperacion;	
	
	printf("Introduce el primer n%cmero: ",163);
	
	scanf("%f",&fNumero1);
	
	printf("\nIntroduce el signo de la operaci%cn (+,-,*,/,%): ",162);
	
	scanf("%c",&cOperacion);
	
	//gets(cOperacion);
	
	printf("\nIntroduce el segundo n%cmero: ",163);
	
	scanf("%f",&fNumero2);
	
	
	
	switch(cOperacion){
		
		case '+':
			
			fTotal = fNumero1 + fNumero2;
			
			printf("\nEl resultado de la suma %.2f + %.2f = %.2f",fNumero1,fNumero2,fTotal);
			
		break;//+
		
		case '-':
			
			fTotal = fNumero1 - fNumero2;
			
			printf("\nEl resultado de la resta %.2f - %.2f = %.2f",fNumero1,fNumero2,fTotal);
			
		break;//-
		
		case '*':
			
			fTotal = fNumero1 * fNumero2;
			
			printf("\nEl resultado de la multiplicaci%cn %.2f x %.2f = %.2f",162,fNumero1,fNumero2,fTotal);
			
		break;//*
		
		case '/':
			
			if (fNumero2 == 0){
				
				printf("\nERROR.No se puede dividir un entre 0");
				
			}else{
				
				fTotal = fNumero1 / fNumero2;
				
				printf("\nEl resultado dividir %.2f / %.2f = %.2f",fNumero1,fNumero2,fTotal);
				
			}//fin if-else
		
		break;// /(División)
		
		/*
		case '%':
			
			if (fNumero2 == 0){
				
				printf("\nERROR.No se puede dividir un entre 0");
				
			}else{
				
				
				
				fTotal = fNumero1 % fNumero2;
				
				printf("\nEl resultado dividir %.2f / %.2f = %.2f",fNumero1,fNumero2,fNumero1/fNumero2);
				
				printf("\nY el resultado del residuo es: %.2f",fTotal);
				
			}//fin if-else
			
		break;// % 
		*/
		
		default: 
		
			printf("\nOpci%cn NO valida",162);
			
			
	}//fin del switch
	
	return 0;
	
}//fin int main
