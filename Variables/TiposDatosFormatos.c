#include <stdio.h>
#include <stdlib.h>

int main(void){

	//Caracteres
	char caracter = 'A';
	printf("Caracter: %c \n",caracter);
	printf("Caracter en decimal: %d \n",caracter);
	printf("Caracter en decimal: %i \n",caracter);
	printf("Caracter en octal: %o \n",caracter);
	printf("Caracter en hexadecimal: %x \n",caracter);
	
	system("pause");
	
	//Numeros enteros
	short corto = 10;
	printf("Entero corto: %i \n",corto);
	printf("Entero corto: %d \n",corto);
	printf("Entero corto en octal: %o \n",corto);
	printf("Entero corto en hexadecimal: %x \n",corto);
	
	system("pause");
	
	int entero = -10000;
	printf("N%cmero entero corto: %i \n",163,entero);
	
	system("pause");
	
	//Numeros enteros largos
	
	signed long largo = 9999999;
	printf("Entero largo: %ld \n",largo);
	printf("Entero largo: %li \n",largo);
	
	system("pause");
	
	//Numeros reales cortos
	float realCorto = 25.244696;
	printf("N%cmero reales cortos: %f \n",163,realCorto);
	printf("N%cmero reales cortos: %e \n",163,realCorto);//formato cientifico
	printf("N%cmero reales cortos: %g \n",163,realCorto);//redondeo
	
	system("pause");
	
	//Numero reales largos
	double realLargo = 22.1635423423455423233553;
	printf("N%cmero reales largos: %lf \n",163,realLargo);
	printf("N%cmero reales largos: %.2lf \n",163,realLargo);
	printf("N%cmero reales largos: %.10lf \n",163,realLargo);
	
	return 0;
	
}//fin int main


