#include <stdio.h>
#include <stdlib.h>

int iNumA = 2;
int iNumB = 4;
float fNumC;

int main(void){

	//Probamos el convertir un tipo de dato a otro tipo 

	fNumC = (float)iNumA + iNumB;
	
	printf("iNumC vale %2.2f\n",fNumC);
	
	return 0;
	
}//fin int main


