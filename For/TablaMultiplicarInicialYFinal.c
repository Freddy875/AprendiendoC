//Tablas de Multiplicar Inicial y Final

#include <stdio.h>
int main(){
	
	int iMultiplicando, iMultiplicador,iProducto,iNumeroInicial,iNumeroFinal;
	
	printf("Este programa te muestra la tabla de multiplicar de un n%cmero que ingreses con un valor de inicio y un valor final ",163);
	
	printf("\n%cQu%c n%cmero quieres multiplicar%c ",168,130,163,63);
	
	scanf("%d",&iMultiplicando);
	
	printf("\n%cCon qu%c n%cmero quieres inicial%c ",168,130,163,63);
	
	scanf("%d",&iNumeroInicial);
	
	printf("\n%cHasta que n%cmero quieres terminar%c ",168,163,63);
	
	scanf("%d",&iNumeroFinal);
	
	if(iNumeroInicial > iNumeroFinal){
		
		printf("ERROR. El n%cmero inicial debe ser menor al n%cmero final",163,163);
		
	}else{
		
		for(iMultiplicador = iNumeroInicial; iMultiplicador <= iNumeroFinal; iMultiplicador++){
		
		iProducto = iMultiplicando * iMultiplicador;
		
		printf("\n%d x %d = %d",iMultiplicando,iMultiplicador,iProducto);
		
	    }//fin del for

		
	}//fin if-else
		
	return 0;
	
}//fin int main
