#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Tamanio de nombre + 1. */

#define MAX_NAME_SIZE 256

int main(void){
	
	char *cName = malloc(MAX_NAME_SIZE);
	if (cName == NULL){
		
		printf("No mamory\n");
		
		return 1;
		
	}//fin if
	
	/* Ask user for name. */
	
	printf("Nombre completo: ");
	
	/* Get the name, with size limit. */
	
	fgets(cName, MAX_NAME_SIZE, stdin);
	
	/* Remove trailing newline, if there. */
	
	if((strlen(cName) > 0) && (cName[strlen (cName) - 1] == '\n')){
		
		cName[strlen (cName) - 1] == '\0';
		
	}//fin if 
	
	/* Say hello. */
	
	printf("Hola %s.\n",cName);
	
	/* Free memory and exit. */

	free(cName);
	
	return 0;
	
}//fin int main


