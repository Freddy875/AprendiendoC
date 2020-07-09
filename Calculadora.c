/*
Este programa usa un menú para que el usuario 
Seleccione de las operaciones de 
1. Suma
2. Resta
3. División
4. Multiplicación 
5. Potencia 
6. Raíz Cuadrada
*/

#include <stdio.h>
#include  <math.h>
#include <windows.h>

int main(){
	//Declaracion de Variables 
	
	int opcion;
	
	float n1, n2, resultado ;
	
	do{
	
		system("pause");
	
		system("cls"); //Limpiar Pantalla
	
		printf("Elige una opci%cn \n", 162);
	
		printf("\t 1.- Suma\n");
	
		printf("\t 2.- Resta\n");
	
		printf("\t 3.- Divisi%cn \n",162);
	
		printf("\t 4.- Multiplicaci%cn \n",162);
	
		printf("\t 5.- Potencia \n");
	
		printf("\t 6.- Ra%cz Cuadrada \n", 161);
	
		printf("\t 7.- Salir \n");
	
		scanf("%d",&opcion);
	
		system("cls");
	
		
		if (opcion==6){
			
			printf("\n Dame el primer valor: ");
	
			scanf("%f", &n1);
	
		}else if(opcion>=7){
	
		}else{
			printf("\n Dame el primer valor: ");
	
			scanf("%f", &n1);
	
			printf("\n Dame el segundo valor: ");
	
			scanf("%f", &n2);
	
		}//fin if-else
		
		switch (opcion)
	
		{
			case 1: 
			
			printf("\t 1.- Suma\n");
			
				resultado = n1 + n2;
	
				printf("%f \n", resultado);
			
			break; 
			
			case 2:
				
				printf("\t 2.- Resta\n");
			
				resultado = n1 - n2;
	
				printf("%f \n", resultado);
			
			break;
			
			case 3:
				
				printf("\t 3.- Divisi%cn \n",162);
				
				if(n2==0){
	
					printf("La operaci%cn entre 0 no esta definida \n", 162);
	
				}else{
	
					resultado = n1/n2;
	
					printf("%f \n", resultado);
	
				}//fin if-else
			
			break; 
			
			case 4: 
			
				printf("\t 4.- Multiplicaci%cn \n",162);
	
				resultado = n1 * n2 ;
	
				printf("%f \n", resultado);
			
			break;
	
			case 5:
				
				printf("\t 5.- Potencia \n");
					
				resultado = pow(n1,n2);
	
				printf("%f \n", resultado);
	
			break;
			
			case 6:
				
				printf("\t 6.- Ra%cz Cuadrada \n", 161);
					
				if(n1 < 0){
					
					printf("La ra%cz cuadrada de un n%cmero negativo no esta definido\n", 161, 163);
					
				}else{
					
					resultado = sqrt(n1);
					
					printf("%f \n", resultado);
					
				}//fin if-else
				
			break;
			
			case 7: 
				
				printf("\t 7.- Salir \n");
				
				exit(0);
			
			break;
			
			default:
				
				printf("Opci%cn No valida\n",162);
				
		}//fin switch
		
	}while (opcion != 7);
	
	return 0;
	
}//fin int main 
