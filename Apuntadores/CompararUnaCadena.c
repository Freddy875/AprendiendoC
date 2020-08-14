#include <stdio.h>
#include <string.h>


int main(void){

	char *sCadena1 = "manzana";
	char *sCadena2 = "naranja";
	int iCompara;
	
	iCompara = strncmp(sCadena1,sCadena2,6);
	
	if(iCompara > 0){
		
		printf("sCadena1 %s es m%cs larga que sCadena2 %s",
		sCadena1,160,sCadena2);
		
	}else if(iCompara < 0){
	
		printf("sCadena2 %s es m%cs larga que sCadena1 %s",
		sCadena2,160,sCadena1);
	
	}else{
	
		printf("Las cadenas %s y %s son iguales"
		,sCadena1,sCadena2);
	
	}//fin if-else
	
	return (0);
	
}//fin int main


