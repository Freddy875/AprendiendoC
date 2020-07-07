//Cajero automatico con un saldo inicial de $1000.00

#include <stdio.h>
int main(){
	
	int iOpcion;
	
	float fSaldoInicial = 1000.00, 
	      fRetiro = 0.0,
	      fDeposito = 0.0;
	
	printf("\tBienvenido a su Cajero Virtual");
	
	printf("\n1. Depositar dinero a la cuenta");
	
	printf("\n2. Retirar dinero de la cuenta");
	
	printf("\n3. Salir");
	
	printf("\nIngresa la opci%cn de lo que quieres hacer: ",162);
	
	scanf("%d",&iOpcion);
	
	system("cls");
	
	switch(iOpcion){
		
		case 1:
			
			printf("\n1. Ingresar dinero en la cuenta");
			
			printf("\n%cC%canto dinero deseas depositar%c ",168,163,63);
			
			scanf("%f",&fDeposito);
			
			fSaldoInicial = fSaldoInicial + fDeposito;
			
			printf("\nOperaci%cn exitosa",162);
				
			printf("\nAhora queda %c%.2f en tu cuenta",36,fSaldoInicial);
			
			fflush(stdin);
						
		break;//1
		
		case 2:
			
			printf("\n2. Retirar dinero de la cuenta");
			
			printf("\n%cC%canto dinero deseas retirar%c ",168,163,63);
			
			scanf("%f",&fRetiro);
			
			if(fRetiro > fSaldoInicial){
				
				printf("\nSaldos insuficientes");
				
				printf("\nActualmente cuentas con %c%.2f",36,fSaldoInicial);
				
			}else{
				
				fSaldoInicial = fSaldoInicial - fRetiro;
				
				printf("\nOperaci%cn exitosa",162);
				
				printf("\nAhora queda %c%.2f en tu cuenta",36,fSaldoInicial);
				
			}//fin del if-else

		fflush(stdin);
			
		break;//2
		
		case 3:
			
			printf("\n3. Salir");
			
			printf("\nGracias vuelva pronto");
			
		break;//3
		
		default:
			
			printf("\nOpci%cn NO valida",162);
				
		
	}//fin del switch
	
	fflush(stdin);
	
	return 0;
	
}//fin int main
