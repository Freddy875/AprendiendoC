#include <stdio.h>

/*
Programa que indica si la fecha es correcta
o incorrecta, ingresando desde el teclado
el dia, mes y anio
*/

int main(void){
	
	int iDia,iMes,iAnio;
		
	printf("\nEste programa te indica si una fecha es correcta o incorrecta");
	
	printf("\n");
	
	system("pause");
	
	system("cls");
	
	printf("\nIngresa el d%ca: ",161);
	
	scanf("%d",&iDia);
	
	printf("\nIngresa el mes: ");
	
	scanf("%d",&iMes);
	
	printf("\nIngresa el a%co: ",164);
	
	scanf("%d",&iAnio);
	
	if(iAnio > 0){
		
		switch(iMes){
		
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
			
				if((iDia>=1) && (iDia<=31)){
				
					printf("\nFecha correcta");
				
					printf("\nLa fecha es: %d/%d/%d"
					,iDia,iMes,iAnio);
				
				}else{
				
					printf("\nFecha Incorrecta");
					
					printf("\nPara estos meses los d%cas debe estar entre 1 a 31"
					,161);
				
				}//fin if-else
			
			break;
			/*
			Este caso es para los meses de
			Enero, Marzo, Mayo, Julio, Agosto, Octubre, Diciembre
			Que tiene 31 dias 
			*/
		
			case 2:
			
				if(iAnio%4 == 0){
				
					printf("\nEs a%co bisiesto",164);
				
						if((iDia>=1) && (iDia<=29)){
					
							printf("\nFecha correcta");
					
							printf("\nLa fecha es: %d/%d/%d"
							,iDia,iMes,iAnio);
					
						}else{
					
							printf("\nFecha incorrecta");
						
							printf("\nComo es a%co bisiesto los d%cas debe estar entre 1 a 29"
							,164,161);
					
						}//fin if-else
			
				}else{
				
					printf("\nNO es a%co bisiesto",164);
				
						if((iDia>=1) && (iDia<=28)){
					
							printf("\nFecha correcta");
					
							printf("\nLa fecha es: %d/%d/%d"
							,iDia,iMes,iAnio);
					
						}else{
					
							printf("\nFecha incorrecta");
							
							printf("\nComo no es a%o bisieste los d%cas deben estar entre 1 a 28"
							,164,161);
					
						}//fin if-else
				
				}//fin if else
			
			break;
			/*
			Este caso es para el mes de Febrero 
			que dependiendo del anio puede tener
			entre 28 o 29 dias si es anio bisiesto
			*/
		
			case 4:
			case 6:
			case 9:
			case 11:
			
				if((iDia>=1) && (iDia<=30)){
				
					printf("\nFecha correcta");
				
					printf("\nLa fecha es: %d/%d/%d"
					,iDia,iMes,iAnio);
				
				}else{
				
					printf("\nFecha incorrecta");
					
					printf("\nPara estos meses los d%cas debe estar entre 1 a 30"
					,161);
				
		
				}//fin if-else
		
			break;
			/*
			Este caso es para los meses de 
			Abril, Junio, Septiembre, Noviembre
			Que tiene 30 dias 
			*/
		
			default:
			
				printf("\nFecha incorrecta");
				
				printf("\nEl mes debe estar entre 1 a 12");
	
		}//fin switch case
		
	}else{
		
		printf("\nERROR. \nLa fecha debe ser mayor que cero");
		
	}//fin if-else
	
	return 0;
	
}//fin int main


