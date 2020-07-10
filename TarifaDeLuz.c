/*
Visualizar la tarifa de luz según el gasto de corriente eléctrica
Para un gasto menor de 1.000 Kw la tarifa es de 1.2
Entre 1.000 y 1.850 Kw es de 1.0
Y mayor de 1.850 Kw es de 0.9
*/
#include <stdio.h>

#define PI 3.1416
#define TARIFA1 1.2
#define TARIFA2 1.0
#define TARIFA3 0.9

int main(){
	
	float fGasto = 0;	
	
	//printf("El valor de PI es: %f",PI);
	
	printf("Ingrese el total de gastos de energ%ca: ",161);
	
	scanf("%f",&fGasto);
	
	if(fGasto < 1000){

		printf("\nLa tasa a pagar es de: %.2f",TARIFA1);
			
	}else if(fGasto >= 1000 && fGasto <= 1850){
		
		printf("\nLa tasa a pagar es de: %.2f",TARIFA2);
	
	}else{
		
		printf("\nLa tasa a pagar es de: %.2f",TARIFA3 );
		
	}
		
	return 0;
	
}//fin int main
