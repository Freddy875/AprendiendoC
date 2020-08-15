#include <stdio.h>
int main(void){

	int iEntero = 32;
	short int iEnteroCorto = 32;
	long int iEnteroLargo = 32L;
	unsigned int uiEnteroSinSigno = 32U;
	float fReal = 12.8F;
	double dDoble = 12.8;
	long double dDobleLargo = 12.8L;
	float fNotacionCientifica = 4.5e-5;
	char cCaracter = 'A';
	char sCadena[10] = "Lenguaje C";
	
	printf("int: %d\n",iEntero);
	printf("short int: %hd\n",iEnteroCorto);
	printf("long int: %ld\n",iEnteroLargo);
	printf("unsigned int: %u\n",uiEnteroSinSigno);
	printf("float: %f\n",fReal);
	printf("float notaci%cn cient%cfica: %f\n"
	,162
	,161
	,fNotacionCientifica);
	printf("doble: %f\n",dDoble);
	printf("doble largo: %lf\n",dDobleLargo);
	printf("char: %c\n",cCaracter);
	printf("String: %s\n",sCadena);
	
	return 0;
	
}//fin int main

