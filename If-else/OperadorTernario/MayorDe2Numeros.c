//El mayor de dos números

#include <stdio.h>
int main(){
	
	float fNum1 = 0, fNum2 = 0;
	
	printf("Ingresa el primer n%cmero: ",163);
	
	scanf("%f",&fNum1);
	
	printf("\nIngresa el segundo n%cmero: ",163);
	
	scanf("%f",&fNum2);
	
	if(fNum1 == fNum2){
		
		printf("\nLos n%cmeros %.2f y %.2f son igules",163,fNum1,fNum2);
		
	}else if (fNum1 > fNum2 ){
	
		printf("\n %.2f es el mayor y %.2f es el menor",fNum1,fNum2);
	
	}else{
		
		printf("\n %.2f es el menor y %.2f es el mayor",fNum1,fNum2);
		
	}//fin if-else
	
	return 0;
	
}//fin int main
