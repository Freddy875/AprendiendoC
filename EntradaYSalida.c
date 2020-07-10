#include <stdio.h>

int main(){
	
	int numero = 10; 
	
	float flotante = 15.5;
	
	char caracter = 'e';
	
	printf("El valor del entero es %d,\n el del flotante es %.1f,\n y el caracter es %c\n", numero,flotante,caracter);
	
	int iNumero2;
	
	float flotante2;
	
	char letra;
	
	char nombre[50];
	
	char nombreCompleto[150];
	
	printf("Digite su nombre completo: ");
	
	gets(nombreCompleto);
	
	printf("Su nombre competo es %s",nombreCompleto);
	
	printf("\n");

	printf("Digita un valor entero: ");
	
	scanf("%d",&iNumero2);
	
	printf("El valor del entero es: %d\n",iNumero2);
	
	printf("Digita un valor flotante: ");
	
	scanf("%f",&flotante2);
	
	printf("El valor del flotante es: %f\n",flotante2);
	
	/*
	
	printf("Digite el valor de una letra: ");
	
	scanf("%c",&letra);
	
	printf("El valor de la letra es: %c\n",letra);

	printf("Digite su nombre: ");
	
	scanf("%s", &nombre);
	
	printf("Su nombre es %s",nombre);
	
	*/
	
	return 0;
}//fin int main
