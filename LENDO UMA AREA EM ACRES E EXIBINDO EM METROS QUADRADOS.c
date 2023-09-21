#include <stdio.h>

int main (){
	
	float a, m;
	
	printf("Lendo uma area em acres e exibindo convertido em metros quadrados \n");
	printf("Digite a area em acres:");
	scanf("%f", &a);
	
	m = a * 4048.58;
	
	printf("A area em metros quadrados eh igual a %f metros quadrados", m);
	
	return 0;
}
