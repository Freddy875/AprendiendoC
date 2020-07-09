//Area de un circulo

#include <stdio.h>
#include <math.h>
#define PI 3.1416

int main(){

	float fArea, fRadio;
	
	printf("Este programa calcula el %crea de un circulo",160);
	
	printf("\nIngresa el radio del circulo: ");
	
	scanf("%f",&fRadio);
	
	if(fRadio <= 0){
		
		printf("ERROR. El radio no puede ser cero o negativo");
		
	}else{
		
		fArea = PI * pow(fRadio,2);
	
		printf("El %crea de tu circulo es: %.2f",160,fArea);
		
	}//fin del if-else
	
	return 0;
	
}//fin int main
