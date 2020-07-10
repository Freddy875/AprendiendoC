//Suma de los primeros n números

#include <stdio.h>
int main(){

	int iContador, iNumero, iSuma=0;
	
	printf("Ingresa cuantos numeros quieres sumar: ");
	
	scanf("%d",&iNumero);

	iContador = 0;
	
	printf("\nIteraci%cn |\tResultado ",162);
	
	while(iContador <= iNumero){
		
		//printf("\n%d",iSuma);
		
		//iSuma += iContador;
		
		iContador++;	
		
		printf("\n\t%d |\t%d ",iContador,iSuma+=iContador);	
		
	}//fin del while 
	
		
	return 0;
	
}//fin int main

