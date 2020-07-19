//Edad 

#include <stdio.h>
int main(void){
	
	int iEdad;
	
	printf("Introduce tu edad: ");
	
	scanf("%d",&iEdad);
	
	if(iEdad > 17 && iEdad < 35){
		
		printf("\nTienes %d a%cos, eres mayor de edad",iEdad,164);	
		
	}else if(iEdad < 17){
		
		printf("\nTienes %d a%cos, eres menor de edad",iEdad,164);	
		
	}else if (iEdad >= 35){
		
		printf("\nTienes %d a%cos, eres un chavo-ruco",iEdad,164);	
		
	}else{
		
		printf("\nTienes %d a%cos",iEdad,164);
		
	}//fin if-else	
	
	return 0;
	
}//fin int main


