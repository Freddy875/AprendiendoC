/*
Seleccionar un tipo de vehículo e indicar 
El peaje a pagar según un valor númerico

1. Turismo, peaje = $500.00
2. Autobus, peaje = $3000.00
3. Motocicleta, peaje = $300.00
Caso contrario Vehiculo no autorizado
*/

#include <stdio.h>
#include <stdlib.h>
#define TURISMO 500.00
#define AUTOBUS 3000.00
#define MOTO 300.00

int main(){
	
	int iOpcion;
	
	printf("Selecciona un veh%cculo y te digo cuanto es su peaje (1-3):",161);
	
	printf("\n1. Turismo");
	
	printf("\n2. Autobus");
	
	printf("\n3. Motocicleta");
	
	printf("\nIngresa el n%cmero: ",163);
	
	scanf("%d",&iOpcion);
	
	system("cls");
	
	switch(iOpcion){
		
		case 1:
			
			printf("\n1. Turismo");
			
			printf("\nEl peaje del turismo es: $%.2f",TURISMO);
			
		break;
		
		case 2:
			
			printf("\n2. Autobus");
			
			printf("\nEl peaje del Autobus es: $%.2f",AUTOBUS);
			
		break;
		
		case 3:
			
			printf("\n3. Motocicleta");
			
			printf("\nEl peaje de la motocilceta es: $%.2f",MOTO);
			
		break;
		
		default:
			
			printf("\nVeh%cculo NO autorizado",161);
		
	}//fin switch
	
	
	return 0;
	
}//fin int main
