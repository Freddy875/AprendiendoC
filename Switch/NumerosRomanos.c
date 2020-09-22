//Numeros Romanos

#include <stdio.h>
int main(){
	
	int iNumero, iUnidad, iDecena, iCentena, iMillar;
	
	printf("Ingresa un n%cmero(xxxx): ",163);
	
	scanf("%d",&iNumero);
	
	if(iNumero <= 0 || iNumero > 3000){
		
		printf("ERROR. El n%cmero debe ser positivo, mayor a 0 y menor a 3,000",163);
		
	}else{

		iUnidad = iNumero%10;
	
		iNumero = iNumero/10;
	
		iDecena = iNumero%10;
	
		iNumero = iNumero/10;
	
		iCentena = iNumero%10;
	
		iNumero = iNumero/10;
	
		iMillar = iNumero%10;
	
		iNumero = iNumero/10;
	
		switch(iMillar){
		
			case 1:
			
				printf("M");
			
			break;//1
		
			case 2:
			
				printf("MM");
			
			break;//2
		
			case 3:
			
				printf("MMM");
			
			break;//3
		
		
		}//fin del switch-iMillar
	
		switch(iCentena){
		
			case 1:
			
				printf("C");
			
			break;//1
		
			case 2:
			
				printf("CC");
			
			break;//2
		
			case 3:
			
				printf("CCC");
			
			break;//3
		
			case 4:
			
				printf("DC");
			
			break;//4
		
			case 5:
			
				printf("D");
			
			break;//5
		
			case 6:
		
				printf("DC");
		
			break;//6
		
			case 7:
			
				printf("DCC");
			
			break;//7
		
			case 8:
			
				printf("DCCC");
			
			break;//8
		
			case 9:
			
				printf("CM");
			
			break;//9
		
		}//fin del switch-iCentena

	
		switch(iDecena){
		
			case 1:
			
				printf("X");
		
			break;//1
		
			case 2:
			
				printf("XX");
		
			break;//2
		
			case 3:
			
				printf("XXX");
		
			break;//3
		
			case 4:
			
				printf("XL");
		
			break;//4
		
			case 5:
			
				printf("L");
		
			break;//5
		
			case 6:
			
				printf("LX");
		
			break;//6
		
			case 7:
			
				printf("LXX");
		
			break;//7
		
			case 8:
			
				printf("LXXX");
		
			break;//8
		
			case 9:
			
				printf("XC");
		
			break;//9
		
		}//fin del switch-iDecena
	
		
		switch(iUnidad){
		
			case 1:
			
				printf("I");
		
			break;//1
		
			case 2:
			
				printf("II");
		
			break;//2
		
			case 3:
			
				printf("III");
		
			break;//3
		
			case 4:
			
				printf("IV");
		
			break;//4
		
			case 5:
			
				printf("V");
		
			break;//5
		
			case 6:
			
				printf("VI");
		
			break;//6
		
			case 7:
			
				printf("VII");
		
			break;//7
		
			case 8:
			
				printf("VIII");
		
			break;//8
		
			case 9:
			
				printf("IX");
		
			break;//9
		
		}//fin del switch-iUnidad

		
	}//fin del if-else
	
	return 0;
	
}//fin int main
