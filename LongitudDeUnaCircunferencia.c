//Calcular la longitud de una circunferencia 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1416

int main(){
	
	int iOpcion;
	
	float fDiametro,
		  fRadio,
		  fLongitud;
	
	char sRespuesta[2]; 
	/*
	sRespuesta es para evaluar si el usuario quiere intentar otra opción
	Con un Si o No 
	Si ingresa si o alguna de sus variantes el programa se repite 
	Si no el programa se termina  
	*/
	do{
		
	printf("\nEste programa te ayuda calcular la longitud de una circunferencia");
	
	printf("\nExisten dos formas de calcular la longitur de una circunferencia");
	
	printf("\n1. Por su di%cmetro",160);
	
	printf("\n2. Por su radio");
	
	printf("\n3. Salir");
	
	printf("\nSelecciona una opci%cn: " ,162);
	
	scanf("%d",&iOpcion);
	
	system("cls");
	
	system("pause");
	
	
		
		switch(iOpcion){
			
			case 1:
				
				printf("\n1. Por su di%cmetro",160);
				
				printf("\nIngresa el di%cmetro del c%crculo: ",160,161);
				
				scanf("%f",&fDiametro);
				
				if(fDiametro <= 0){
					
					printf("\nERROR. El di%cmetro debe ser positivo y distinto de cero",160);
					
					exit(0);
					
				}else{
					
					printf("\nLa f%crmula es: L = PI x d",162);
					
					printf("\nDonde: \n L = Longitud");
					
					printf("\nPI = %.4f",PI);
					
					printf("\nd = diametro");
					
					fLongitud = PI * fDiametro;
					
					printf("\nLa longitud de la circunferencia es: %.4f * %.2f = %.2f",PI,fDiametro,fLongitud);
					
					printf("\n");
					
					system("pause");
					
				}//fin if-esle
			
			break;//case 1
			
			case 2:
				
				printf("\n2. Por su radio");
				
				printf("\nIngresa el radio del c%crculo: ",161);
				
				scanf("%f",&fRadio);
				
				if(fRadio <= 0){
					
					printf("\nERROR. El radio debe ser positivo y distinto de cero");
					
					exit(0);
					
				}else{
					
					printf("\nLa f%crmula es: L = 2 x PI x r",162);
					
					printf("\nDonde: \n L = Longitud");
					
					printf("\nPI = %.4f",PI);
					
					printf("\nr = radio");
					
					//Multiplicamos por 2 porque el radio es la mitad de la longitud el circulo
					
					printf("Multiplicamos por 2 porque el radio es la mitad de la longitud el c%crculo",161);
					
					fLongitud = 2 * PI * fRadio;
					
					printf("\nLa longitud de la circunferencia es: %.4f x 2 x %.2f = %.2f",PI,fRadio,fLongitud);
					
					printf("\n");
					
					system("pause");
					
				}//fin if-else
			
			break;//case 2
			
			case 3:
				
				printf("\n3. Salir");
				
				printf("\nGracias vuelve pronto");
				
			break;//case 3
			
			default:
				
				printf("\nOpci%cn NO Valida",161);
				
				exit(0);
			
		}//fin switch - case
		
		printf("\n%cQuieres hacer otra operaci%cn? (SI/NO): ",168,162);
		
		scanf("%s",&sRespuesta);
		
		//gets(sRespuesta);
		
	}while(strcmp(sRespuesta, "Si") == 0 || strcmp(sRespuesta,"si") == 0 || strcmp(sRespuesta,"SI") == 0 ||
	 
	 strcmp(sRespuesta,"s") == 0 || strcmp(sRespuesta,"S") == 0 ); //fin do while
	
	fflush(stdin);
	
	return 0;
	
}//fin int main
