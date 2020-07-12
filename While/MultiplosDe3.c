//Multiplos de 3 desde el 1 hasta n
 
#include <stdio.h>
int main(){
	
	int iTotalNumeros, iContador;
	
	printf("Este programa te muestra que n%cmeros son multiplos de 3",163);
	
	printf("\nIngresa el total de n%cmeros a comprobar: ",163);
	
	scanf("%d",&iTotalNumeros);
	
	if(iTotalNumeros <= 0){
		
		printf("\nERROR.El n%cmero debe ser positivo y mayor a cero",162);
		
	}else{
		
		iContador = 1;
	
		while(iContador <= iTotalNumeros){
		
			if(iContador % 3 == 0){
			
				printf("\n%d Este es multiplo",iContador);
			
			}else{
			
				printf("\n%d",iContador);	
			
			}//fin if
		
			iContador++;
		
		}//fin while
		
	}//fin if-else
	
	return 0; 	
	
}//fin int main
