/*Ingresa por teclado el nombre del usuario 
el sexo y su edad. Imprimir si el mayor de
edad cuando tiene mayor de 18 años*/

#include <stdio.h>
#include <string.h>
int main(){
	
	char cNombre[20];
	char cSexo[1];
	int iEdad;
	
	printf("Ingresa tu nombre: ");
	
	//scanf("%s",&cNombre);
	
	gets(cNombre);
	
	printf("\nIngresa tu sexo(M/F): ");
	
	//scanf("%c",&cSexo);
	
	gets(cSexo);
	
	printf("\nIngresa tu edad: ");
	
	scanf("%d",&iEdad);
	
	//Primero validamos el sexo
	
	if (strcmp(cSexo,"m") == 0){
		
		printf("\nEres Masculino");
		
	}else if (strcmp(cSexo,"M") == 0){
		
		printf("\nEres Masculino");
		
	}else if (strcmp(cSexo,"f") == 0){
		
		printf("\nEres Femenina");
		
	}else if (strcmp(cSexo,"F") == 0){
		
		printf("\nEres Femenina");
		
	}//fin if-else que valida el sexo
	
	
	//Ahora validamos la edad del usuario para saber si es mayor de edad
	
	
	if(iEdad >= 18){
		
		printf("\nEres mayor de edad");
		
	}else{
		
		printf("\nEres menor de edad");
		
	}//fin if-esle que valida la edad 
	
	return 0;
	
}//fin int main
