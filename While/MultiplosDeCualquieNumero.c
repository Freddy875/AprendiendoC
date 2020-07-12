//Multiplos de cualquier número desde el 1 hasta n
 
#include <stdio.h>
int main(){
	
	int iTotalNumeros, iContador, iMultiplo;
	
	printf("Este programa te muestra que n%cmeros son multiplos del n%cmero que tu eligas",163,163);
	
	printf("\nIngresa el n%cmero del que quieres conocer sus multiplos: ",163);
	
	scanf("%d",&iMultiplo);
	
	printf("\nIngresa el total de n%cmeros a comprobar: ",163);
	
	scanf("%d",&iTotalNumeros);
	
	if(iTotalNumeros <= 0 && iMultiplo <= 0 ){
		
		printf("\nERROR.Ambos n%cmeros deben ser positivos y mayores a uno",162);
		
	}else{
		
		iContador = 1;
	
		while(iContador <= iTotalNumeros){
		
			if(iContador % iMultiplo == 0){
			
				printf("\n%d Este es multiplo",iContador);
			
			}else{
			
				printf("\n%d",iContador);	
			
			}//fin if
		
			iContador++;
			
		}//fin while
		
	}//fin if-else
	
	return 0; 	
	
}//fin int main
