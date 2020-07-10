//Operadores de Asignaión
#include <stdio.h>
int main(){
	
	int iNumero = 10;
	
	int iNumero1,iNumero2,iNumero3;
	
	iNumero1 = iNumero2 = iNumero3 = iNumero;
	
	printf("%d\n",iNumero);
	
	printf("%d,%d,%d\n",iNumero1,iNumero2,iNumero3);
	
	//Suma
	
	iNumero+=10; // iNumero = iNumero + 10
	
	printf("El nuevo valor del numero %d\n",iNumero);
	
	//Resta

	iNumero-=5; // iNumero = iNumero - 5
	
	printf("El nuevo valor del numero %d\n",iNumero);
	
	//Multiplicación
	
	iNumero*=2; // iNumero = iNumero * 2
	
	//División
	
	printf("El nuevo valor del numero %d\n",iNumero);
	
	iNumero/=3; // iNumero = iNumero / 3
	
	printf("El nuevo valor del numero %d",iNumero);
	
	return 0;
	
}//fin int main
