#include <stdio.h>
#include <stdlib.h>

int Cantidad(){
	
	int iCantidad;
	
	printf("N%cmeros que deseas guardar: " ,163);
	
	scanf("%d",&iCantidad);
	
	return iCantidad;
	
}//fin int cantidad

void leerNumeros(int iCantidad, float *fNumeros){
	
	int iContador;
	
	for(iContador = 0; iContador < iCantidad; iContador++){
		
		printf("\nN%cmero %d: ",163, iContador + 1 );
		
		scanf("%f",&fNumeros[iContador]);
		
	}//fin for
	
}//fin leerNumeros

void imprimirNumeros(int iCantidad, float *fNumeros){
	
	int iContador;
	
	for(iContador = 0; iContador < iCantidad; iContador++){
		
		printf("\nN%cmero %d : %.2f",163,iContador + 1, fNumeros[iContador]);
		
	}//fin for
	
}

int main(void){
	
	int iCantidad = Cantidad();
		
	/*(cast-type*)calloc(n,element-size);*/
	
	float *fNumeros = (float*) calloc(iCantidad, sizeof(float));
	/*Inicializa a 0 la memoria reservada*/
	leerNumeros(iCantidad,fNumeros);
	
	imprimirNumeros(iCantidad,fNumeros);
	
	free(fNumeros);
	
	return EXIT_SUCCESS;
	
}//fin int main


