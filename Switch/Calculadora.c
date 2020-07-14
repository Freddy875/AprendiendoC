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
	
	int iOpcion;
	
	float fNumero1, fNumero2, fResultado ;
	
	do{
	
		system("pause");
	
		system("cls"); //Limpiar Pantalla
		
		printf("\t Men%c\n",163);
	
		printf("\t 1.- Suma\n");
	
		printf("\t 2.- Resta\n");
	
		printf("\t 3.- Divisi%cn \n",162);
	
		printf("\t 4.- Multiplicaci%cn \n",162);
	
		printf("\t 5.- Potencia \n");
	
		printf("\t 6.- Ra%cz Cuadrada \n", 161);
	
		printf("\t 7.- Salir \n");
		
		printf("\nElige una opci%cn: ", 162);
	
		scanf("%d",&iOpcion);
	
		system("cls");
	
		
		if (iOpcion == 6){
			
			printf("\n Dame el primer valor: ");
	
			scanf("%f", &fNumero1);
	
		}else if(iOpcion>=7){
	
		}else{
			printf("\n Dame el primer valor: ");
	
			scanf("%f", &fNumero1);
	
			printf("\n Dame el segundo valor: ");
	
			scanf("%f", &fNumero2);
	
		}//fin if-else
		
		switch (iOpcion)
	
		{
			case 1: 
			
			printf("\t 1.- Suma\n");
			
				fResultado = fNumero1 + fNumero2;
	
				printf("%.2f + %.2f = %.2f \n", fNumero1,fNumero2,fResultado);
			
			break; 
			
			case 2:
				
				printf("\t 2.- Resta\n");
			
				fResultado = fNumero1 - fNumero2;
	
				printf("%.2f + %.2f = %.2f \n", fNumero1,fNumero2,fResultado);
			
			break;
			
			case 3:
				
				printf("\t 3.- Divisi%cn \n",162);
				
				if(fNumero2 == 0){
	
					printf("La operaci%cn entre 0 no esta definida \n", 162);
	
				}else{
	
					fResultado = fNumero1/fNumero2;
	
					printf("%.2f / %.2f = %.2f \n",fNumero1,fNumero2,fResultado);
	
				}//fin if-else
			
			break; 
			
			case 4: 
			
				printf("\t 4.- Multiplicaci%cn \n",162);
	
				fResultado = fNumero1 * fNumero2;
	
				printf("%.2f x %.2f = %.2f \n", fNumero1,fNumero2,fResultado);
			
			break;
	
			case 5:
				
				printf("\t 5.- Potencia \n");
					
				fResultado = pow(fNumero1,fNumero2);
	
				printf("%.2f elevado a la %.2f potencia es = %.2f \n",fNumero1,fNumero2,fResultado);
	
			break;
			
			case 6:
				
				printf("\t 6.- Ra%cz Cuadrada \n", 161);
					
				if(fNumero1 < 0){
					
					printf("La ra%cz cuadrada de un n%cmero negativo no esta definido\n", 161, 163);
					
				}else{
					
					fResultado = sqrt(fNumero1);
					
					printf("La ra%cz cuadrada de n%cmero %.2f es = %.2f \n",161,163,fNumero1,fResultado);
					
				}//fin if-else
				
			break;
			
			case 7: 
				
				printf("\t 7.- Salir \n");
				
				printf("\t Gracias vuelve pronto");
				
				exit(0);
			
			break;
			
			default:
				
				printf("Opci%cn No valida\n",162);
				
		}//fin switch
		
	}while (iOpcion != 7);
	
	return 0;
	
}//fin int main 
