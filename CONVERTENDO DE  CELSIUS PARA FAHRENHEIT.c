#include <stdio.h>

int main (){
	
	float C,F;
	
	printf("Convertendo de Celsius para Fahrenheit \n");
	printf("Digite a temperatura em celsius: \n");
	scanf("%f", &C);
	
	F = C * (9.0/5.0) + 32.0;
	
	printf("O resultado da conversao de Celsius para Fahrenheit eh = %f", F);
	
	return 0;
	
}
