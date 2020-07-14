/* 
Bucle for:
	Sintaxis:
		for (inicializacion; condicion; incremento/decremento){
			instrucciones;
		}
	Mostrar los primeros 10 números
*/

#include <stdio.h>
int main(){
	
	int iContador, iInicio, iFinal;
	
	printf("\nDe manera ascendente");
	
	for(iContador = 0; iContador <= 10; iContador++){
		
		printf("\n%d",iContador);
		
	}//fin del for acendente
	
	printf("\n");
	
	system("pause");
	
	printf("\nDe manera descendente");
	
	for(iContador = 10; iContador >= 0; iContador--){
		
		printf("\n%d",iContador);
		
	}//fin del for desendente
	
	printf("\n");
	
	system("pause");
	
	return 0;
	
}//fin int main
