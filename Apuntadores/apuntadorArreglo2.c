#include <stdio.h>

char strA[80] = "Cadena1";

char strB[80];

int iContador;

char *cPunteroA; /*Un apuntador de tipo caracter*/

char *cPunteroB; /*Otro apuntador de tipo caracter*/

int main(void){
	
	/*puts(strA); Muestra la cadena strA*/
	
	cPunteroA = strA; /*Apunta cPunteroA a la cadena strA*/
	
	/*puts(cPunteroA); Muestra a donde apunta cPunteroA*/
	
	cPunteroB = strB; /*Apunta cPunteroB a la cadena strB*/
	
	putchar('\n'); /*Dejamos una linea en blanco*/
	
	iContador = 0;
	
	while(*cPunteroA != '\0'){ /*Linea A (ver texto)*/
		
		*cPunteroB++ = *cPunteroA++; /*Linea B (ver texto)*/
		
		printf("\ncPunteroB apunta a: %p",&cPunteroB + iContador);
		
		printf("\n");
		
		puts(strB); /*Muestra strB en la pnatalla*/
		
		iContador++;
		
	}//fin while
	
	*cPunteroB = '\0'; /*Linea C (ver texto)*/
	
	printf("\n");
	
	puts("La cadena completa dice: ");
	
	printf("\n");
	
	puts(strB); /*Muestra strB en la pantalla*/
	
	return 0;
	
}//fin int main

