#include <stdio.h>
#include <stdlib.h>

#define STOP 'S'

int main(void){
	
	char cCaracter;
	
	while((cCaracter = getchar())!=STOP){
		
		putchar(cCaracter);
		
	}//fin while
	
	return 0;
	
}//fin int main


