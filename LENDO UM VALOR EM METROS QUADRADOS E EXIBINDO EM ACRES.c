#include <stdio.h>

int main (){
	
	float a, m;
	
	printf("Lendo uma area em metros quadrados e exibindo convertido em acres \n");
	printf("Digite a area em metros quadrados: ");
	scanf("%f", &m);
	
	a = m * 0.000247;
	
	printf("A area em acres eh igual a %f acres", a);
	
	return 0;
}
