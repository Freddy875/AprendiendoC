/*
Pureba si un alumno aprueba o repureba un examen
Se aprueba si la nota es mayor a 7.5
*/

#include <stdio.h>
int main(){
	
	float fNota;
	
	printf("Ingresa la nota del alumno: ");
	
	scanf("%f",&fNota);
	
	(fNota > 7.5) ? printf("\nEl alumno esta aprobado con una calificaci%cn de %.2f",162,fNota) : 
	
	printf("El alumno esta repobado con una calificaci%cn de %.2f",162,fNota);
	
	return 0;
	
}//fin int main
