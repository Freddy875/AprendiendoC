#include <stdio.h>
int main(void){

	int iEdad;
	
	char sNombre[20];
	
	printf("\nIntroduce nombre: ");
	
	scanf("%s",sNombre);
	
	printf("\nIntroduce edad: ");
	
	scanf("%d",&iEdad);
	
	printf("\nTu nombre es %s y tienes %d a%cos"
	,sNombre
	,iEdad
	,164);
	
	return 0;
	
}//fin int main

