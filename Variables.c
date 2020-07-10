#include <stdio.h> //Libreria

#define PI 3.1416 //Marco

int y = 5 ; //Variable global

int main (){
	
	int x = 10; //Variable global 
	
	int suma1 = 0;
	
	float suma2 = 0;
	
	suma1 = PI + x;
	
	suma2 = PI + x;
	
	printf("La suma en entero es: %d\n", suma1);
	
	printf("Y la suma en real es: %f\n", suma2);
	
	printf("La suma con solo dos decimales es: %.2f\n", suma2);
	
	printf("La suma con solo tres decimales es: %.3f\n", suma2);
	
	return 0;
	
}//fin int main
