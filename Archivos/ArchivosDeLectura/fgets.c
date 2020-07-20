/*
Lee cadenas de caracteres hasta n-1 caracteres 
O hasta que lea un salto de linea "\n"
o el final del archivo EOF
char *fgets(char *buffer, int tamanio, FILE *archivo);
*/

#include <stdio.h>
#include <stdlib.h>
int main(void){
	
	FILE *archivo;
	
	char sCaracteres[100];
	
	archivo = fopen("gente.txt","r");
	
	if(archivo == NULL){
		
		exit(1);
		
	}else{
		
		printf("\nEl contenido del archivo de prueba es: \n\n");
		
		while(feof(archivo) == 0){
			
			fgets(sCaracteres,100,archivo);
			
			printf("%s",sCaracteres);
			
		}//fin while
		
		getchar();
		
	}//fin if-else
	
	fclose(archivo);
	
	return 0;
	
}//fin int main


