#include <stdio.h>

int main (){
	
	float K,C;
	
	printf("Convertendo de Kelvin para Celsius \n");
	printf("Digite a temperatura em Kelvin: \n");
	scanf("%f", &K);
	
	C = K - 273.15;
	
	printf("O resultado da conversao de Kelvin para Celsius eh = %.2f", C);
	
	return 0;
	
}
