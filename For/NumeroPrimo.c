//Determinar si un numero es primo o no 

#include <stdio.h>
int main(){
	
	int iNumero, i, iContador = 0;
	
	printf("Ingresa un n%cmero: ",163);
	
	scanf("%d",&iNumero);
	
	for(i = 1; i <= iNumero; i++){
		
		if(iNumero % i == 0){
			
			iContador++;
			
		}//fin if 
		
	}//fin del for
	
	if(iContador > 2){
		
		printf("El n%cmero %d es compuesto \n",163,iNumero);
		
	}else{
		
		printf("El n%cmero  %d es Primo \n",163,iNumero);
		
	}//fin if-esle
	
	return 0;
	
}//fin int main
