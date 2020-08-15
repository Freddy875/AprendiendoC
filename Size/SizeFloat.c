#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void){
	
	printf("Limites de tipos flotantes\n");
	printf("*\n");
	printf("Float\n");
	printf("M%cnimo: %.2f\n",160,FLT_MIN);
	printf("M%cximo: %.2f\n",161,FLT_MAX);
	
	printf("*\n");
	printf("Double\n");
	printf("M%cnimo: %lf\n",160,DBL_MIN);
	printf("M%cximo: %lf\n",160,DBL_MAX);
	
	printf("*\n");
	printf("Long Double\n");
	printf("M%cnimo: %LF\n",160,LDBL_MIN);
	printf("M%cximo: %LF\n",160,LDBL_MAX);
	
	return 0;
	
}//fin int main


