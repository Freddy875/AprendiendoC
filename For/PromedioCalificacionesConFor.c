/*
Promedio de 3 calificaciones con un for

Promedio de las calificaciones finales 55%
Calificación del examen final 30%
Calificacion del trabajo final 15%

*/


#include <stdio.h>
int main(){
	
	int iContador;
	float fCalificaciones[iContador],
	      fExamenParcial,
	      fExamenFinal,
	      fTrabajoFinal,
	      fCalificacionFinal;
	      
	for(iContador = 1; iContador <= 3; iContador++ ){
		
		printf("\nIngresa la calificaci%cn n%cmero %d: ",162,163,iContador);
		
		scanf("%f",&fCalificaciones[iContador]);
		
		switch(iContador){
			
			case 1:
				
				fExamenParcial = fCalificaciones[iContador] * 0.55;
				
			break;//case 1
			
			case 2:
			
				fExamenFinal = fCalificaciones[iContador] * 0.30;
			
			break;//case 2
			
			case 3:
				
				fTrabajoFinal = fCalificaciones[iContador] * 0.15;
				
			break;//case 3
			
			
		}//fin switch-case
		
		fCalificacionFinal = (fExamenParcial + fExamenFinal + fTrabajoFinal);
		
	}//fin for

	for(iContador = 1; iContador <= 3; iContador++ ){
		
		printf("\nLa calificaci%cn n%cmero %d es : %.2f",162,163,iContador,fCalificaciones[iContador]);
		
	}//fin for
	
	for(iContador = 1; iContador <= 3; iContador++ ){
		
		switch(iContador){
			
			case 1:
			
				printf("\nEl promedi%c  del examen parcial es: %.2f",162,fExamenParcial);
			
			break;//case 1
			
			case 2:
				
				printf("\nEl promedi%c del examen final es: %.2f",162,fExamenFinal);
				
			break;//case 2
			
			case 3:
				
				printf("\nEl promedi%c del trabajo final es: %.2f",162,fTrabajoFinal);

				
			break;//case 3
		
			
		}//fin switch-case
		
	}//fin for
	
	
	printf("\nY la calificaci%cn final es: %.2f",162,fCalificacionFinal);
	
	return 0;
	
}//fin int main

