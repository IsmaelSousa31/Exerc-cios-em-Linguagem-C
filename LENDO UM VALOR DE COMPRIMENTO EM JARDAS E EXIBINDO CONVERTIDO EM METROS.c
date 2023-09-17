#include <stdio.h>

int main (){
	
	float j, m;
	printf("Lendo um valor de comprimento em jardas e exibindo convertido em metros \n");
	printf("Digite o valor de comprimento em jardas: ");
	scanf("%f", &j);
	
	m = 0.91 * j;
	
	printf("O valor em metros eh igual a %.2f metros \n", m);
	
	return 0;
}
