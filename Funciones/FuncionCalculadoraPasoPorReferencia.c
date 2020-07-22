/*
Este programa usa un menu para que el usuario 
Seleccione de las operaciones de 
1. Suma
2. Resta
3. Division
4. Multiplicacion 
5. Potencia 
6. Raiz Cuadrada
7. Salir

Usamos funciones para realizar las operaciones
*/

#include <stdio.h>
#include <math.h>
#include <windows.h>

float sumar(float *fNumeroX, float *fNumeroY);

float restar(float *fNumeroX, float *fNumeroY);

float multiplicar(float *fNumeroX, float *fNumeroY);

float dividir(float *fNumeroX, float *fNumeroY);

float potencia(float *fNumeroX, float *fNumeroY);

float raizCuadrada(float *fNumeroX);

int main(void){
	
	float fNumeroX,fNumeroY;
	
	int iOpcion;
	
	do{
		
		system("pause");
	
		system("cls"); //Limpiar Pantalla
	
		printf("Elige una opci%cn \n", 162);
	
		printf("\t 1.- Suma\n");
	
		printf("\t 2.- Resta\n");

		printf("\t 3.- Multiplicaci%cn \n",162);
	
		printf("\t 4.- Divisi%cn \n",162);
	
		printf("\t 5.- Potencia \n");
	
		printf("\t 6.- Ra%cz Cuadrada \n", 161);
	
		printf("\t 7.- Salir \n");
	
		scanf("%d",&iOpcion);
	
		system("cls");
		
		if (iOpcion == 6){
			
			printf("\n Dame el primer valor: ");
	
			scanf("%f", &fNumeroX);
	
		}else if(iOpcion > 7 || iOpcion <= 0 ){
			
			goto OpcionNoValida;
	
		}else if (iOpcion == 7){
			
			goto Salir;
			
		}else{
		
			printf("\n Dame el primer valor: ");
	
			scanf("%f", &fNumeroX);
	
			printf("\n Dame el segundo valor: ");
	
			scanf("%f", &fNumeroY);
	
		}//fin if-else
		
		switch (iOpcion){
			
			case 1: 
			
			printf("\t 1.- Suma\n");
			
			printf("%.2f + %.2f = %.2f \n",
			fNumeroX,fNumeroY, sumar(&fNumeroX,&fNumeroY));
			
			break;//case 1
			
			case 2:
				
				printf("\t 2.- Resta\n");
			
				printf("%.2f - %.2f = %.2f \n",
				fNumeroX,fNumeroY,restar(&fNumeroX,&fNumeroY));
			
			break;//case 2
			
			case 3:
				
				printf("\t 3.- Multiplicaci%cn \n",162);
	
				printf("%.2f x %.2f = %.2f \n",
				fNumeroX,fNumeroY,multiplicar(&fNumeroX,&fNumeroY));
						
			break;//case 3
			
			case 4: 
			
				printf("\t 4.- Divisi%cn \n",162);
				
				if(fNumeroY == 0){
	
					printf("La operaci%cn entre 0 no esta definida \n", 162);
	
				}else{
	
					printf("%.2f / %.2f = %.2f \n",
					fNumeroX,fNumeroY,dividir(&fNumeroX,&fNumeroY));
	
				}//fin if-else
	
			break;//case 4
	
			case 5:
				
				printf("\t 5.- Potencia \n");
	
				printf("%.2f elevado a la %.2f potencia es igual a %.2f \n"
				,fNumeroX,fNumeroY,potencia(&fNumeroX,&fNumeroY));
	
			break;//case 5
			
			case 6:
				
				printf("\t 6.- Ra%cz Cuadrada \n", 161);
					
				if(fNumeroX < 0){
					
					printf("La ra%cz cuadrada de un n%cmero negativo no esta definido\n"
					, 161, 163);
					
				}else{
				
					printf("La ra%cz cuadrada de %.2f es igual a %.2f \n"
					,161,fNumeroX, raizCuadrada(&fNumeroX));
					
				}//fin if-else
				
			break;//case 6
			
			case 7: 
			
				Salir:
				
				printf("\t 7.- Salir \n");
				
				printf("\t \nGracias vuelve pronto");
				
				exit(0);
			
			break;
			
			default:
				
				OpcionNoValida:
				
				printf("Opci%cn No valida\n",162);
				
		}//fin switch
		
	}while(iOpcion != 7); //fin del do-while
	
	return 0;
	
}//fin int main

float sumar(float *fNumeroX, float *fNumeroY){
	
	return *fNumeroX + *fNumeroY;
	
}//fin float sumar 

float restar(float *fNumeroX, float *fNumeroY){
	
	return *fNumeroX - *fNumeroY;
	
}//fin float restar

float multiplicar(float *fNumeroX, float *fNumeroY){
	
	return *fNumeroX * (*fNumeroY);
	
}//fin float multiplicar 

float dividir(float *fNumeroX, float *fNumeroY){
	
	return *fNumeroX / *fNumeroY;
	
}//fin float dividir

float potencia(float *fNumeroX, float *fNumeroY){
	
	return pow(*fNumeroX,*fNumeroY);
	
}//fin float potencia

float raizCuadrada(float *fNumeroX){
	
	return sqrt(*fNumeroX);
	
}//fin float raizCuadrada
