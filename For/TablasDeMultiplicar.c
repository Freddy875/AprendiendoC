//Tablas de Multiplicar

#include <stdio.h>
int main(){
	
	int iMultiplicando, iMultiplicador,iProducto,iNumeroFinal;
	
	printf("Este programa te muetra la tabla de multiplicar de un n%cmero que ingreses hasta el n%cmero que quieras",163,163);
	
	printf("\n%cQu%c n%cmero quieres%c ",168,130,163,63);
	
	scanf("%d",&iMultiplicando);
	
	printf("\n%cHasta que n%cmero quieres%c ",168,163,63);
	
	scanf("%d",&iNumeroFinal);
	
	for(iMultiplicador = 0; iMultiplicador <= iNumeroFinal; iMultiplicador++){
		
		iProducto = iMultiplicando * iMultiplicador;
		
		printf("\n%d x %d = %d",iMultiplicando,iMultiplicador,iProducto);
		
	}//fin del for
	
	return 0;
	
}//fin int main
