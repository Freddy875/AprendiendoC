#include <stdio.h>
#include <stdlib.h>

int iNumCuenta;
float fPromedio;
char cNombre[10];


int main(void){
	
	printf("\nIngresa el n%cmero de cuenta: ",163);
	
	scanf("%d", &iNumCuenta);
	
	printf("\nIngresa el promedio: ");
	
	scanf("%f",&fPromedio);
	
	printf("\nIngresa el nombre: ");
	
	scanf("%s",cNombre);
	
	//Imprimir el resultado
	
	printf("\nAlumno: %d %0.3f %s\n",iNumCuenta,fPromedio,cNombre);
	
	return 0;
	
}//fin int main


