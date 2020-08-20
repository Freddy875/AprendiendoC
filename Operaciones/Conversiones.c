#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int iNumX = 4;
	float iNumY = 2.2;
	float iNumZ; //Resultado real
	int iNumU; //Resultado entero

	//Probamos el convertir un tipo de dato a otro tipo 
	
	iNumZ = iNumX + iNumY;//Conversion implicita sin pedir datos
	
	printf("%d + %2.1f = %2.1f\n",iNumX,iNumY,iNumZ);
	
	iNumU = iNumX + iNumY; //Conversion implicita con pedida de datos
	
	printf("%d + %2.1f = %d\n",iNumX,iNumY,iNumU);
	
	iNumU = iNumX + (int)iNumY; //Conversion explicita
	
	printf("%d + %2.1f = %d\n",iNumX,iNumY,iNumU);
	
	//Conversion explicita mediante funciones 
	
	printf("Cadena: \"%s\" a punto flotante: %10.2f\n"
	,"12345.50",atof("12345.50")); //atof
	
	printf("Cadena: \"%s\" a entero: %d\n"
	,"12345",atoi("12345"));
	
	printf("Cadena: \"%s\" a largo (long): %ld\n"
	,"123456789012345",atol("123456789012345"));
	
	return 0;
	
}//fin int main


