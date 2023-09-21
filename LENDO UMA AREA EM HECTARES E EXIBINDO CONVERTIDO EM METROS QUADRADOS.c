#include <stdio.h>

int main (){
	
	float h, m;
	
	printf("Lendo uma area em hectares e exibindo convertido em metros quadrados \n");
	printf("Digite a area em hectares:");
	scanf("%f", &h);
	
	m = h * 10000;
	
	printf("A area em metros quadrados eh igual a %f metros quadrados", m);
	
	return 0;
}
