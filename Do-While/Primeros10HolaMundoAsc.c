/*
El bucle do-while

	Sintaxis: 
			
			do{
			
				instrucciones
			
			}while()
		
Mostrar los primeros 10 n�meros de manera ascendnete
*/

#include <stdio.h>
int main(void){
	
	int iContador = 0; 
	
			do{
			
				printf("\n%d. Hola Mundo ",iContador);
				
				iContador++;
			
			}while(iContador <= 10 ); //fin do-whie
	
	return 0;
	
}//fin int main


