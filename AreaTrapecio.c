//Calcular las áreas de un trapecio
#include <stdio.h>
int main(){
	
	float fBaseMayor = 0,
	      fBaseMenor = 0,
		  fArea = 0,
		  fAltura = 0,
		  fPrimeraParte = 0,
		  fSegundaParte = 0;
	
	printf("Ingresa la base mayor: ");
	
	scanf("%f",&fBaseMayor);
	
	printf("\nIngresa la base menor: ");
	
	scanf("%f",&fBaseMenor);

	printf("\nIngresa la altura: ");

	scanf("%f",&fAltura);
	
	//Primera parte
	
	fPrimeraParte = fBaseMayor + fBaseMenor;
	
	printf("\n La suma de las bases es: %.2f",fPrimeraParte);
	
	//Segunda parte
	
	fSegundaParte = (fBaseMayor + fBaseMenor)/2;
	
	printf("\n La suma de las bases dividida entre dos es: %.2f",fSegundaParte);
	
	fArea = ((fBaseMayor + fBaseMenor)/2)*fAltura;
	
	printf("\n El %crea del trapecio se calcula ((%.2f + %.2f)/2)x%.2f=%.2f",160,fBaseMayor,fBaseMenor,fAltura,fArea);
	
	return 0;
	
}//fin int main
