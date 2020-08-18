#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void){
	
	printf("Tama%co de datos b%csicos\n",164,160);
	printf("=========================\n");
    printf("Tipo\tTama%co en bytes\n",164);
    printf("====\t====================\n");
	printf("char\t%ld\n",sizeof(char));
	printf("string\t%ld\n",sizeof(char[50]));
	printf("int\t%ld\n",sizeof(int));
	printf("float\t%ld\n",sizeof(float));
	printf("double\t%ld\n",sizeof(double));
	
	return 0;
	
}//fin int main


