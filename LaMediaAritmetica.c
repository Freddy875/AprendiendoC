//Calcular la media aritmetica de 3 números
#include <stdio.h>
int main(){
	
	float fNum1,fNum2,fNum3,fRes;
	
	printf("Calcular la media aritmetica de 3 n%cmeros\n",163);
	
	printf("\nIngresa el primer n%cmero: ",163);
	
	scanf("%f",&fNum1);
	
	printf("\nIngresa el segundo n%cmero: ",163);
	
	scanf("%f",&fNum2);
	
	printf("\nIngresa el tercer n%cmero: ",163);
	
	scanf("%f",&fNum3);
	
	fRes = (fNum1 + fNum2 + fNum3)/3;
	
	printf("\nLa suma de los tres n%cmeros es: %.2f\n",163,fNum1+fNum2+fNum3); 

	printf("\nY el resultado de la media es: %.2f\n",fRes);
		
	return 0;
	
}//fin int main
