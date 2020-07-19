//Edad con el operador ternario

#include <stdio.h>
int main(void){
	
	int iEdad;
	
	printf("Introduce tu edad: ");
	
	scanf("%d",&iEdad);
	
	iEdad >= 18 ? printf("\nTienes %d a%cos. Eres mayor de edad",iEdad,164) :
		
		printf("\nTienes %d a%cos. Eres menor de edad",iEdad,164);
	
	return 0;
	
}//fin int main


