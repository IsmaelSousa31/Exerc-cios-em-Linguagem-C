#include <stdio.h>

int main (){
	
	float h, m;
	
	printf("Lendo uma area em metros quadrados e exibindo convertido em hectares \n");
	printf("Digite a area em metros quadrados:");
	scanf("%f", &m);
	
	h = m * 0.0001;
	
	printf("A area em hectares eh igual a %f hectares", h);
	
	return 0;
}
