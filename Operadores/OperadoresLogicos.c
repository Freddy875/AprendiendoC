#include <stdio.h>
//#include <stdlib.h>

int main(void){
	
	printf("!(1 != 1) devulve %d que implica verdadero\n"
	,!(1 != 1));
	printf("!(1 == 1) devulve %d que implica falso\n"
	,!(1 == 1));
	printf("1 == 1 && 2 == 2 devuelve %d que implica verdadero\n"
	,1 == 1 && 2 == 2);
	printf("1 == 1 && 2 == 3 devuelve %d que implica falso\n"
	,1 == 1 && 2 == 3);
	printf("1 == 1 || 2 == 3 devuleve %d que implica verdadero\n"
	,1 == 1 || 2 == 3);
	printf("1 != 1 || 2 == 3 devuelve %d que implica falso\n"
	,1 != 1 || 2 == 3);
	printf("1 >= 1 || 2 <= 3 devuelve %d que implica verdadero\n"
	,1 >= 1 || 2 <= 3);
	printf("1 >= 1 || 2 >= 3 devuelve %d que implica verdadero\n"
	,1 >= 1 || 2 >= 3);
	printf("'A' == 'A' devuelve %d que implica verdadero\n"
	,('A' == 'A'));
	printf("'A' > 'B' devuelve %d que implica falso\n"
	,('A' > 'B'));
	printf("'A' < 'B' devuelve %d que implica verdadero\n"
	,('A' < 'B'));
	printf("'a' > 'A' devuelve %d que implica verdadero\n"
	,('a' > 'A'));
	printf("'a' < 'A' devuleve %d que implica falso\n"
	,('a' < 'A'));
	
	
	return 0;
	
}//fin int main


