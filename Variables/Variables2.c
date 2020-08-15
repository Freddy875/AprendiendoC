#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float fNumA,fNumB,fNumC,fNumD,fNumE;
int iNumA,iNumB;


int main(void){

	system("cls");
		
	printf("\nDame el primer n%cmero: ",163);
	scanf("%f",&fNumA);
	
	iNumA = fNumA;
	
	printf("\nDame el segundo n%cmero: ",163);
	scanf("%f",&fNumB);
	
	iNumB = fNumB;
	
	printf("Suma\n");
		
		fNumC = fNumA + fNumB;//Suma o adicion
		printf("\t%.2f + %.2f = %.2f\n",fNumA,fNumB,fNumC);
		
	printf("Resta\n");
	
		fNumC = fNumA - fNumB;
		printf("\t%.2f - %.2f = %.2f\n",fNumA,fNumB,fNumC);
		
	printf("Multiplicaci%cn\n",162);
	
		fNumC = fNumA * fNumB;
		printf("\t%.2f * %.2f = %.2f\n",fNumA,fNumB,fNumC);
		
	printf("Divisi%cn\n",162);
	
		fNumC = fNumA/fNumB;
		printf("\t%.2f / %.2f = %.2f\n",fNumA,fNumB,fNumC);
	
	printf("M%cdulo\n",162);
	
		fNumC = iNumA%iNumB;
		printf("\tEl m%cdulo de %d/%d es %.2f\n"
		,162,iNumA,iNumB,fNumC);

	printf("Ra%cz Cuadrada del primer n%cmero\n",161,163);
	
		fNumC = sqrt(fNumA);
		
		printf("\tLa ra%cz cuadrada de %.2f es %.2f\n"
		,161,fNumC,fNumA);

	printf("Ra%cz Cuadrada del segundo n%cmero\n",161,163);
	
		fNumC = sqrt(fNumB);
		
		printf("\tLa ra%cz cuadrada de %.2f es %.2f\n"
		,161,fNumC,fNumB);

	printf("Potencia\n");
	
		fNumC = pow(fNumB,fNumA);//Potencia
		
		printf("\tEl N%cmero %.2f elevado a la potencia %.2f es %.2f\n"
		,163
		,fNumB
		,fNumA		
		,fNumC);
		
	fNumC = fNumA/(fNumB*(fNumB+fNumB));
	
	fNumD = fNumA/fNumB*(fNumB+fNumB);	
	
	printf("\tEl Resultado de %.2f/(%.2f*(%.2f+%.2f)) es %.2f\n"
	,fNumA
	,fNumB
	,fNumB
	,fNumB
	,fNumC);
	
	printf("\tEl Resultado de %.2f/%.2f*(%.2f+%.2f) es %.2f\n"
	,fNumA
	,fNumB
	,fNumB
	,fNumB
	,fNumD);
	
	
	return 0;
	
}//fin int main


