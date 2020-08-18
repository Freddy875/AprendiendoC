#include <stdio.h>
//#include <stdlib.h>

int main(void){
	
	printf("!(1 != 1) devuelve %d que implica verdadero\n",!(1 != 1));
	printf("!(1 == 1) devuleve %d que implica falso\n",!(1 == 1));
	printf("1 == 1 && 2 == 2 devuelve %d que implica verdadero\n"
	,1 == 1 && 2 == 2);
	printf("1 == 1 && 2 == 3 devuelve %d que implica falso\n"
	,1 == 1 && 2 == 3);
	printf("1 == 1 || 2 == 3 devuelve %d que implica verdadero\n"
	,1 == 1 || 2 == 3);
	printf("1 != 1 || 2 == 3 devuelve %d que implica falso\n"
	,1 != 1 || 2 == 3);
	printf("1 >= 1 || 2 <= 3 devulve %d que implica verdadero\n"
	,1 >= 1 || 2 <= 3);
	printf("1 >= 1 || 2 >= 3 devuelve %d que implica verdadero\n",
	1 >= 1 || 2 >= 3);
	printf("'A' == 'A' devuelve %d que implica verdadero\n"
	,('A' == 'A'));
	
	
	
	return 0;
	
}//fin int main


