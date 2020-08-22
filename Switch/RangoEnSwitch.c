#include <stdio.h>
int main(void){

	int iNumero1;
	
	printf("\nDame un n%cmero entre 0 al 99,999: ",163);
	
	scanf("%d",&iNumero1);
	
	switch(iNumero1){
		
		case 0 ... 9:
		
			printf("\nTu n%cmero %d tiene una cifra"
			,163,iNumero1);
		
		break;//fin case 0...9
		
		case 10 ... 99:
			
			printf("\nTu n%cmero %d tiene dos cifras"
			,163,iNumero1);
			
		break;//fin case 10...99
		
		case 100 ... 999:
			
			printf("\nTu n%cmero %d tiene tres cifras"
			,163,iNumero1);
			
		break;//fin case 100...9999
		
		case 1000 ... 9999:
			
			printf("\nTu n%cmero %d tiene cuatro cifras"
			,163,iNumero1);
			
		break;//fin case 1000...9999
		
		case 10000 ... 99999:
			
			printf("\nTu n%cmero %d tiene cinco cifras"
			,163,iNumero1,160);
			
		break;//fin case 10000...99999
		
		default:
			
			printf("Opci%cn NO Valida",162);
		
	}//fin switch-case
	
	return 0;
	
}//fin int main


