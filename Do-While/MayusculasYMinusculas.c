//Hacer un bucle do while que impirma las lestras del alfabeto con el codigo ASCII

#include <stdio.h>
int main(void){
	
	char cLetraMayus = 65, cLetraMinus = 97;
	
	/*
	cLetraMayus es para las letras may�sculas y empieza en 65 porque 
	en ese n�mero inicia en el codigo ASCII la letra A
	CLetraMinus es para las letras min�sculas y empieza en 97 porque
	en ese n�mero inicia en el codigo ASCII la letra a
	 */
	
	int iNumeroMayus = 65, iNumeroMinus = 97;
	
	/*
	iNumeroMayus nos servira como contador para los n�meros del codigo ASCII
	que representan a las may�sculas
	iNumeroMinus nos servira como contador para los n�meros del codigo ASCII
	que representan a las min�sculas
	*/
	
	printf("\nLetras del alfabeto",163);
	
	printf("\nCodigo ASCII\t|Letra Min%cscula\t|Codigo ASCII\t|Letra May%cscula",163,163);
	
	do{
		
		printf("\n%d\t\t|%c\t\t\t|%d\t\t|%c",iNumeroMayus,iNumeroMinus,cLetraMayus,cLetraMinus);
		
		cLetraMayus++;
		
		cLetraMinus++;
		
		iNumeroMayus++;
		
		iNumeroMinus++;
		
	}while(cLetraMayus <= 90 ||cLetraMinus <= 122 );//fin do-while
		
	return 0;
	
}//fin int main

