#include <stdio.h>
//#include <stdlib.h>

float fNumA,fNumB;

int main(void){
	
	printf("Dame el primer n%cmero: \n",163);
	
	scanf("%f",&fNumA);
	
	printf("Valor inicial de a = %.2f\n",fNumA);
	
	fNumB=++fNumA;
	
	printf("Valor de b en el momento de hacer la operaci%cn ++a = %.2f\n"
	,162
	,fNumB);
	
	printf("Valor de a desp%ces de hacer ++a = %.2f\n"
	,163
	,fNumA);
	
	printf("Valor inicial de a = %.2f\n",fNumA);
	
	fNumB = fNumA++;
	
	printf("Valor de b en el momento de hacer la operaci%cn a++ = %.2f\n"
	,162
	,fNumB);
	
	printf("Valor de a desp%ces de hacer a++ = %.2f\n"
	,163
	,fNumA);
	
	printf("Valor inicial de a = %.2f\n",fNumA);
	
	fNumB = --fNumA;
	
	printf("Valor de b en el momento de hacer la operaci%cn --a = %.2f\n"
	,162
	,fNumB);
	
	printf("Valor de a desp%ces de hacer --a = %.2f\n"
	,163
	,fNumA);
	
	printf("Valor inicial de a = %.2f\n",fNumA);
	
	fNumB = fNumA--;
	
	printf("Valor de b en el momento de hacer la operaci%cn a-- = %.2f\n"
	,162
	,fNumB);
	
	printf("Valor de a desp%ces de hacer a-- = %.2f\n"
	,163
	,fNumA);
	
	return 0;
	
}//fin int main


