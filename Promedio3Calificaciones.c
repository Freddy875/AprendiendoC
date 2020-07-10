//Promedio3Calificaciones
#include <stdio.h>

//Promedio de las calificaciones finales 55%
//Calificación del examen final 30%
//Calificacion del trabajo final 15%

int main(){
	
	float fCal1 = 0,
		  fCal2 = 0,
		  fCal3 = 0,
		  fCalFinal = 0;
	
	printf("Ingresa la calificaci%cn de los examenes parciales: ",162);
	
	scanf("%f",&fCal1);
	
	printf("\nIngresa la calificaci%cn del examen final: ",162);
	
	scanf("%f",&fCal2);

	printf("\nIngresa la calificaci%cn del trabajo final: ",162);
	
	scanf("%f",&fCal3);
	
	fCal1 = fCal1 * 0.55;
	
	fCal2 = fCal2 * 0.30;
	
	fCal3 = fCal3 * 0.15;
	
	fCalFinal = fCal1 + fCal2 +fCal3;
	
	printf("\nEl porcentaje de los examenes parciales es de : %.2f",fCal1);
	
	printf("\nEl porcentaje del examen final es de: %.2f",fCal2);
	
	printf("\nEl porcentaje del trabajo final es de: %.2f",fCal3);
	
	printf("\nY la calificaci%cn final es la suma de %.2f + %.2f + %.2f = %.2f",162,fCal1,fCal2,fCal3,fCalFinal);
	
	return 0;
	
}//fin int main
