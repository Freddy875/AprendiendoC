/*
La sentencia while

Sintaxis: 
	
	while(codiciones){

		instrucciones
	
	}

Mostrar los primeros 10 números en la pantalla de manera ascendente

*/

#include <stdio.h>
int main(){

	int iNumero = 0 ;
	
	while(iNumero <= 10){

		printf("\n%d. Hola Mundo",iNumero);
	
		iNumero++; //Ascendnete
	
	}//fin while
	
	return 0;
	
}//fin int main


