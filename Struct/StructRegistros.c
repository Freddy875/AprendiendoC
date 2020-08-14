#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct persona{
		//int ID = 0
		char nombre[20];
		int edad;
		char ciudad[20];
	}persona[20];
	
int i, numRegistros = 0, numBuscar;



//void AgregarPersona(persona.nombre, persona.edad, persona.ciudad );
void AgregarPersona(int numRegistros);

void MostrarRegistros(void);

//void MostrarRegistros(int numRegistros);

//void BuscarRegistro();

void BuscarRegistro(int numBuscar);

int main()
{
	int opcion;
		
	
	
	do{
		
	printf("%cQu%c deseas hacer? \n",168,130);
	printf("1.- Agregar una persona \n");
	printf("2.- Mostrar todos los registros \n");
	printf("3.- Buscar los registros \n");
	printf("4.- Salir\n");
	scanf("%d",&opcion);
	system("cls");
	
	switch(opcion){
		case 1: 
				
			printf("1.- Agregar una persona\n");	

			printf("%cCu%cntas personas deseas insertar. M%cximo 20? \n",168,160,160);
			
			scanf("%d",&numRegistros);
	
				if(numRegistros == 0){
		
				printf("ERROR. El numero de registros no puede ser 0");
	
				}else if(numRegistros > 20){
	
				printf("ERROR. El numero de Registro supera la cantidad maxima que es 20\n");
	
				}else{
	
				AgregarPersona(numRegistros);
				//printf("La persona fue agregada exitosamente\n");
			
				//printf("La persona %s , %d, %c fue agregada exitosamente\n", persona[i].nombre, persona[i].edad, persona[i].ciudad);
				printf("Presiona una tecla cualquiera para continuar\n");
				//Si te preguntas cual es cualquiera puede ser esc, ctrl o PgUp, posdata la tecla Tab no te da cerveza Tab
				getchar();
					
			}//fin del if-else
		
		break;
		
		case 2:
			
			printf("2.- Mostrar todos los registros\n");
			
			if (numRegistros == 0){
				
				printf("ERROR. No hay registros para mostrar\n");
				
				printf("Primero utiliza la funcion 1.- Agregar una persona\n");
				
				printf("Presiona una tecla cualquiera para continuar\n");
			
				//Si te preguntas cual es cualquiera puede ser esc, ctrl o PgUp, posdata la tecla Tab no te da cerveza Tab
			
				getchar();
				
			}else{
			
			MostrarRegistros();
			
			printf("Presiona una tecla cualquiera para continuar\n");
			
			//Si te preguntas cual es cualquiera puede ser esc, ctrl o PgUp, posdata la tecla Tab no te da cerveza Tab
			
			getchar();
				
			}
			
		break;
		
		case 3:
			
			printf("3.- Buscar los registros\n");
			
			printf("Ingresa el n%cmero del elemento que quieres buscar \n",163);
			
			scanf("%d", numBuscar);
			
			if(numBuscar == 0){
				
				printf("ERROR. No existe un valor con el numero de registro %d\n", numBuscar);
				
			}else if(numBuscar > 20 ){
				
				printf("ERROR. No existe un valor con el numero de registro %d\n", numBuscar);
				
				printf("El numero de Registro supera la cantidad maxima que es 20\n");	
			
			}else{
				
				BuscarRegistro(numBuscar);
				
				printf("Presiona una tecla cualquiera para continuar\n");
			
				//Si te preguntas cual es cualquiera puede ser esc, ctrl o PgUp, posdata la tecla Tab no te da cerveza Tab
			
				getchar();
				
			}//fin if-else			

		break;
		
		case 4:
				
				printf("Gracias vuelva pronto");
								
				exit(0);
				
		break;
		
		default:
			
			printf("Opci%cn No valida \n",162);
		
	}//fin switch
	
		
	}while (opcion != 4); //fin do-while
	
	
	
	return 0;
}//fin int main 

void AgregarPersona(int numRegistros){
		
		for(i = 0; i < numRegistros; i++ ){
			
		printf("Persona %d\n", i+1 );
		
		puts("Ingresa el nombre de la persona:");
		
		fflush(stdin);
		
		fgets(persona[i].nombre, 60 , stdin);
    	
		puts("Ingresa la edad de la persona:");
		
		scanf("%d", &persona[i].edad);
		
		getchar();
    	
		puts("Ingresa la ciudad de la persona:");
		
		fflush(stdin);
		
		fgets(persona[i].ciudad, 20 , stdin);
		
		}//fin del for
			
}//fin Agregar persona

void MostrarRegistros(){
	
	for(i = 0; i < numRegistros; i++ ){
	
		printf("\t Persona %d \n  \t Nombre:%s \n, \t Edad:%d \n, \tCiudad:%s\n", i+1, persona[i].nombre, persona[i].edad, persona[i].ciudad);		
			
	}//fin del for
	
}//fin MostrarRegistros

void BuscarRegistro(numBuscar){
		
	for(i = 0; i < numRegistros; i++ ){
		
		if(numBuscar == i+1 ){
			
			printf("La persona que buscas es:\n");
			
			printf("\t Persona %d \n  \t Nombre:%s \n, \t Edad:%d \n, \tCiudad:%s\n", i+1, persona[i].nombre, persona[i].edad, persona[i].ciudad);
			
		}else{
			
			//No hacer nada 
			
		}//fin if-else		
			
	}//fin del for
	
}//fin Buscar Registro


