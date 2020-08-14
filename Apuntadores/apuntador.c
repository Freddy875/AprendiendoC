/*
Operador de direccion: &
Para obtener la direccion de una variable
Para poder almacenar la direccion hara falta 
una variablde de tipo puntero con el mismo tipo
de sintaxis
*/

/*
Operador de indirección: *
Para acceder al dato almacenado en una direccion 
Realiza la funcion opuesta al operador &
*/

#include <stdio.h>

int iNumeroJ, iNumeroK;

int *iPuntero;

int main(void){
	
	iNumeroJ = 10;
	
	iNumeroK = 200;
	
	iPuntero = &iNumeroK;
	
	printf("\n");
	
	printf("j tiene el valor: %d y esta alojado en: %p\n",iNumeroJ,&iNumeroJ);
	
	/*void apuntador generico*/
	
	printf("k tiene el valor: %d y esta alojado en: %p\n"
	,iNumeroK,(void *)&iNumeroK);
	
	/*printf("k tiene el valor: %d y esta alojado en: %p\n",k,&k);*/
	
	printf("iPunetro tiene el valor: %p y esta alojado en: %p\n",
	iPuntero,&iPuntero);
	
	printf("El valor entero al que apunta iPuntero es: %d\n",*iPuntero);
	
	return 0;
	
}//fin int main
	

