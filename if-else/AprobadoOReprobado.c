/*
Pureba si un alumno aprueba o repureba un examen
Se aprueba si la nota es mayor a 7.5
*/

#include <stdio.h>
int main(){
	
	float fNota;
	
	printf("Ingresa la nota del alumno: ");
	
	scanf("%f",&fNota);
	
	if(fNota > 7.5){
		
		puts("\nEl alumno esta aprobado");
		
		printf("\nCon la calificaci%cn de %.2f",162,fNota);
	
	}else{
	
		puts("\nEl alumno esta reprobado");
		
		printf("\nCon la calificaci%cn de %.2f",162,fNota);
	
	}//fin if-else
	
	return 0;
	
}//fin int main
