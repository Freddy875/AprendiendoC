//Hipotenusa de un triangulo
#include <stdio.h>
#include <math.h>
int main(){
		
	float fHipotenusaCuadrado = 0, 
	fHipotenusa = 0, 
	fCatetoOpuesto = 0,
	fCatetoAdyacente = 0, 
	fCatetoCuadrado1 = 0,
	fCatetoCuadrado2 = 0;
	
	printf("Digite el primer cateto: \n");
	
	scanf("%f",&fCatetoOpuesto);
	
	printf("Digite el segundo cateto: \n");
	
	scanf("%f",&fCatetoAdyacente);	
	
	fCatetoCuadrado1 = pow(fCatetoOpuesto,2);
	
	fCatetoCuadrado2 = pow(fCatetoAdyacente,2);
	
	fHipotenusaCuadrado = fCatetoCuadrado1 + fCatetoCuadrado2;
	
	fHipotenusa = sqrt(fHipotenusaCuadrado);
	
	printf("El resultado de elevar %.2f al cuadrado es: %.2f\n",fCatetoOpuesto,fCatetoCuadrado1);
	
	printf("El resultado de elevar %.2f al cuadrado es: %.2f\n",fCatetoAdyacente,fCatetoCuadrado2);
	
	printf("El resultado de la suma de los catetos es: %.2f\n",fHipotenusaCuadrado);
		
	printf("Y el resultado de la ra%cz cuadrada de la hipotenusa es: %.2f",161,fHipotenusa);
		
	return 0;
	
}//fin int main
