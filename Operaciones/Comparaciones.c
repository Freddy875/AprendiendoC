#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	
	int iNumX,
		iNumY,
		iNumZ;
	/*
	Para ser usadas en la condicion 
	y resultado de la expresion
	 */
	
	char cLetraT; 
	/*Guarda resultado de la expresion*/
	
	iNumX = 9;
	iNumY = 7;
	
	//Operador Ternario
	iNumZ = (iNumX < iNumY) ? iNumX:iNumY;
	/*Guarda el menor entre iNumX e iNumY  en iNumZ*/
	
	printf("El menor entre %d y %d es %d\n"
	,iNumX
	,iNumY
	,iNumZ);
	//Muestra el resultado de la expresion condicional
	
	cLetraT = (iNumX % 2 == 0) ? 'p':'i'; 
	//Muestra 'p' en cLetraT, sino muestra 'o'
	
	printf("%d es %s\n",iNumX,(cLetraT == 'p')? "par":"impar");
	
	//Muesta si iNumX es par o impar
	
	iNumX = 10; //Reescribimos el valor de iNumX
	
	printf("%d es %s\n",iNumX,(iNumX % 2 ==0 )? "par":"impar");	
	
	return 0;
	
}//fin int main


