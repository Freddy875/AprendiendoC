//Funcion recursiva Mutuo

#include <stdio.h>

void funcA(char cLetra);
void funcB(char cLetra);

int main(void){
	
	funcA('Z');
	
	return 0;
	
}//fin int main

void funcA(char cLetra){
	
	if(cLetra > 'A'){
			
		funcB(cLetra);
			
	}//fin if
	
	printf("%c , ",cLetra);
	
}//fin void funcA

void funcB(char cLetra){
	
	funcA(--cLetra);
	
}//fin funcB

