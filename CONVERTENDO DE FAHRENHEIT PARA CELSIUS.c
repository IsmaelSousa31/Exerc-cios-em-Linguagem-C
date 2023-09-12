#include <stdio.h>

int main (){
	
	float F,C;
	
	printf("Convertendo de Fahrenheit para Celsius \n");
	printf("Digite a temperatura em Fahrenheit: \n");
	scanf("%f", &F);
	
	C = 5.0 * (F - 32.0) / 9.0;
	
	printf("O resultado da conversao de Fahrenheit para Celsius eh = %f", C);
	
	return 0;
	
}
