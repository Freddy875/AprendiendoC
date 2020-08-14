#include <stdio.h>
#include <stdlib.h>


int main(void){
	
	struct datos{
		
		int iEdad;
		char sNombre[60];
		char sCiudad[20];
		
	}persona[20]; //fin struct datos-persona
	//Array de struct con datos  para 20 personas
	
	int iNumeroRegistros,
		iContador,
		iNumero;
	
	printf("%cCu%cntos registros deseas?: ",168,160);
	
	scanf("%d", &iNumeroRegistros);
	
	getchar();
	
	for(iContador = 0; 
	iContador < iNumeroRegistros;
	iContador++){
		
		printf("Registro: %d",iContador+1);
		
		printf("\n");
		
		puts("Nombre: ");
		
		fflush(stdin);
		
		fgets(persona[iContador].sNombre,60,stdin);
		
		puts("Edad: ");
		
		scanf("%d",&persona[iContador].iEdad);
		
		getchar();
		
		puts("Ciudad: ");
		
		fflush(stdin);
		
		fgets(persona[iContador].sCiudad,20,stdin);
		
	}//fin for 
	
 	for(iContador = 0;
	iContador < iNumeroRegistros;
	iContador++){
		
		printf("\nRegistro: %d\n\tNombre: %s\n\tEdad: %d\n\tCiudad: %s"
		,iContador + 1
		,persona[iContador].sNombre
		,persona[iContador].iEdad
		,persona[iContador].sCiudad);
		
		getchar();
		
	}//fin for
	
	return 0;
	
}//fin int main


