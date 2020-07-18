//Hacer un bucle for que impirma las lestras del alfabeto con el codigo ASCII

#include <stdio.h>
int main(void){
	
	char cUpper = 65, cLower = 97;
	
	int iUpper = 65 ,iLower = 97; //Usamos estos valores para recorrer su valor númerico en el código ASCII
	
	printf("\nCodigo ASCII\t|Letra Min%cscula\t|Codigo ASCII\t|Letra May%cscula",163,163);
	
	//Para cUpper e iUpper va desde 65 hasta 90
	
	
	/*
	for(cUpper = 65; cUpper <= 90; cUpper++){
	
		printf("\n%d\t\t|%c\t\t\t|%d\t\t|%c",iUpper,cUpper,iLower,cLower);
		
		cLower++;
		
		iUpper++;
		
		iLower++;
	
	}//fin for
	*/
	//Para cLower e iLower va desde 97 hasta 122
	
	/*
	for(cLower = 97; cLower <= 122; cLower++){
	
		printf("\n%d\t\t|%c\t\t\t|%d\t\t|%c",iUpper,cUpper,iLower,cLower);
		
		cUpper++;
		
		iUpper++;
		
		iLower++;
	
	}//fin for
	*/

	/*
	for(iUpper = 65; iUpper <= 90; iUpper++){
	
		printf("\n%d\t\t|%c\t\t\t|%d\t\t|%c",iUpper,cUpper,iLower,cLower);
		
		cLower++;
		
		cUpper++;
		
		iLower++;
	
	}//fin for
	*/

	for(iLower = 97; iLower <= 122; iLower++){
	
		printf("\n%d\t\t|%c\t\t\t|%d\t\t|%c",iUpper,cUpper,iLower,cLower);
		
		cUpper++;
		
		iUpper++;
		
		cLower++;
	
	}//fin for

	//Funciona con cualquiera de los ciclos for 
	
	return 0;
	
}//fin int main


