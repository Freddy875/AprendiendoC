#include <stdio.h>
#include <limits.h>

int main(void){
	
	printf("Limites de tipo enteros\n");
	printf("*\n");
	printf("CHAR_BIT\n");
	printf("N%cmero de bits en un byte: %d\n",CHAR_BIT);
	printf("N%cmero m%cximo de bytes en un car%ccter multibyte: %d\n"
	,163
	,160
	,160
	,MB_LEN_MAX);
	printf("*\n");
	printf("Car%ccter con signo\n",160);
	printf("M%cnimo: %d\n",160,CHAR_MIN);
	printf("M%cximo: %d\n",161,CHAR_MAX);
	
	printf("*\n");
	printf("Car%ccter sin signo\n",160);
	printf("M%cnimo: 0\n",160);
	//printf("M%cnimo: %u\n",160,UCHAR_MIN);
	printf("M%cximo: %u\n",161,UCHAR_MAX);
	
	printf("*\n");
	printf("Short int con signo\n");
	printf("M%cnimo: %hi\n",160,SHRT_MIN);
	printf("M%cximo: %hi\n",161,SHRT_MAX);
	
	printf("*\n");
	printf("Short int sin signo\n");
	printf("M%cnimo: 0\n",160);
	//printf("M%cnimo: %u\n",160,USHRT_MIN);
	printf("M%cximo: %u\n",161,USHRT_MAX);
	
	printf("*\n");
	printf("Long int con signo\n");
	printf("M%cnimo: %li\n",160,LONG_MIN);
	printf("M%cximo: %li\n",161,LONG_MAX);
	
	printf("*\n");
	printf("Long int sin signo\n");
	printf("M%cnimo: 0\n",160);
	//printf("M%cnimo: %lu\n",160,ULONG_MIN);
	printf("M%cximo: %lu\n",161,ULONG_MAX);
	
	//Aqui se hizo un cambio 
	
	return 0;
	
}//fin int main

