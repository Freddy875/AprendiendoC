//Tabla de Multiplicar de 5

#include <stdio.h>
int main(){
	
	int iMultiplicando = 5, iMultiplicador,iProducto;
	
	for(iMultiplicador = 0; iMultiplicador <= 10; iMultiplicador++){
		
		iProducto = iMultiplicando * iMultiplicador;
		
		printf("\n%d x %d = %d",iMultiplicando,iMultiplicador,iProducto);
		
	}//fin for
	
	return 0;
	
}//fin int main
