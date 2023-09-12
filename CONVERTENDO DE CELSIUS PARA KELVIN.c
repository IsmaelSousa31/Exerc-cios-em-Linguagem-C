#include <stdio.h>

int main (){
	
	float C,K;
	
	printf("Convertendo de Celsius para Kelvin \n");
	printf("Digite a temperatura em Celsius: \n");
	scanf("%f", &C);
	
	K = C + 273.15;
	
	printf("O resultado da conversao de Celsius para Kelvin eh = %.2f", K);
	
	return 0;
	
}
