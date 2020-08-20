#include <stdio.h>
#include <stdlib.h>

char cCaracter = '@';
int iEntero = 2;
float fReal = 20.00;
double dDoble = 400.12345;

int main(void){
	
	printf("Caracter / Entero = %d\n",cCaracter/iEntero);
	//Caracter pasa a Entero o char pasa a int
	printf("Float * Double = %e\n",fReal * dDoble);
	//Real pasa a Doble o Float pasa a Double
	printf("Double + Entero = %f\n",dDoble + iEntero);
	//Entero pasa a Doble o Int pasa a Double
	//printf("Float + Entero = %d\n",dDoble + iEntero); 
	//Error Runtime
	
	printf("(Char / Entero) + (Float * Double) * (Double + Entero) = %f\n"
	,(cCaracter/iEntero) + (fReal * dDoble) * (dDoble + iEntero));
	
	return 0;
	
}//fin int main


