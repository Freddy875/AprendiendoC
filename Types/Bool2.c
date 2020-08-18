#include <stdio.h>
#include <stdbool.h> 
//Booleanos

bool bEsAdolecente(int edad);

int main(void){
	
	bool bAdolecente  = bEsAdolecente(23);
	
	if(bAdolecente){
	
		printf("Nini\n");
		
	}else{
		
		printf("Consigue trabajo\n");
			
	}//fin if-else
		
	return 0;
	
}//fin int main

bool bEsAdolecente(int edad){
	
	if(edad <= 18){
		
		return true;
		
	}else{
		
		return false;
		
	}//fin if-else
	
}//fin bool
