#include <stdio.h>
#include <stdlib.h>

int Cantidad(){
	
	int iCantidad;
	
	printf("N%cmeros que deseas guardar: " ,163);
	
	scanf("%d",&iCantidad);
	
	return iCantidad;
	
}//fin int cantidad

void leerNumeros(int iCantidad, int *iNumeros){
	
	int iContador;
	
	for(iContador = 0; iContador < iCantidad; iContador++){
		
		printf("\nN%cmero %d: ",163, iContador + 1 );
		
		scanf("%d",&iNumeros[iContador]);
		
	}//fin for
	
}//fin leerNumeros

void imprimirNumeros(int iCantidad, int *iNumeros){
	
	int iContador;
	
	for(iContador = 0; iContador < iCantidad; iContador++){
		
		printf("\nN%cmero %d : %d",163,iContador + 1, iNumeros[iContador]);
		
	}//fin for
	
}

int main(void){
	
	int iCantidad = Cantidad();
		
	/*(cast-type*)calloc(n,element-size);*/
	
	int *iNumeros = (int*) malloc(iCantidad * sizeof(int));
	
	leerNumeros(iCantidad,iNumeros);
	
	imprimirNumeros(iCantidad,iNumeros);
	
	free(iNumeros);
	
	return 0;
	
}//fin int main


