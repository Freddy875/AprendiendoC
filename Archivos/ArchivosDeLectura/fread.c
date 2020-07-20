/*
size_t fread (void * ptr, size_t size, zise_t count, FILE * stream);

Esta funcion lee un bloque  de un "stream" de datos
Efectua la lectura de un arreglo de elementos "count",
cada uno de los cuales tiene un tamanio definido por "size"
Luego los guarda en un bloque de memoria especifica por "prt" 
El indicador de posicion de la cadena de caracteres avanza 
hasta leer la totalidad de bytes...

PARAMETROS: 
ptr: Puntero a un bloque de memoria con un tamanio maximo de (size*count) bytes.
size: Tamanio de bytes de cada elemento(de los que voy que leer)
count: Numero de elementos 
stream: Puntero a objetos FILE, que se especifica la cadena de entreada 
*/

#include <stdio.h>
#include <stdlib.h>
int main(void){
	
	
	
	printf("Hola Mundo");
	
	return 0;
	
}//fin int main


