//BulceDoWhile Primeros 10 Números

#include <stdio.h>
int main(){
	
	int iNumero = 1;
	
	/*
	do{
		
		printf("\nN%cmero %d",163,iNumero);	
		
		iNumero++;
		
	}while(iNumero <= 10);
	*/
	
	/*
	do{
		
		printf("\nN%cmero %d",163,iNumero);	
		
		iNumero += 1;
		
	}while(iNumero <= 10);
	*/
	
	do{
		
		printf("\nN%cmero %d",163,iNumero);	
		
		iNumero = iNumero + 1;
		
	}while(iNumero <= 10);
	
	return 0;
	
}//fin int main
