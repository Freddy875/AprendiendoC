/*
La sentencia while 

Sintaxis:

		while(condicion){
		
			instrucciones;
		
		}

Mostrar los pirmeros 10 numeros en pantalla en forma asendente 
*/

#include <stdio.h>
int main(){
	
	int iContador = 1;
	
	while(iContador <= 10 ){
		
		printf("%d\n",iContador);
				
		iContador++;
		
	}//fin while 	
	
	return 0;
	
}//fin int main
