#include <stdio.h>
//#include <stdlib.h>

int main(void){

	//Probamos el convertir un tipo de dato a otro tipo 
	
	printf("2 == 2 devuelve %d que implica verdadero\n"
	,2 == 2);
	printf("'A' == 'a' devuelve %d que implica falso\n"
	,'A' == 'a');
	printf("2 != 2 devuelve %d que implica falso\n"
	,2 != 2);
	printf("'A' != 'a' devuelve %d que implica verdadero\n"
	,'A' != 'a');
	printf("'a' > 'b' devuelve %d que implica falso\n"
	,'a' > 'b');
	printf("'b' > 'a' devuelve %d que implica verdadero\n"
	,'b' > 'a');
	printf("'1' >= '1' devuelve %d que implica verdadero\n"
	,'1' >= '1');
	printf("4 >= 5 devuelve %d que implica falso\n"
	,4 >= 5);
	printf("'Z' < 'a' devuelve %d que implica verdadero\n"
	,'Z' < 'a');
	printf("'A' < 'B' devuelve %d que implica verdadero\n"
	,'A' < 'B');
	printf("6 <= 6 devuelve %d que implica verdadero\n"
	,6 <= 6);
	printf("8 <= 7 devuelve %d que implica falso\n"
	,8 <= 7);
		
	return 0;
	
}//fin int main


