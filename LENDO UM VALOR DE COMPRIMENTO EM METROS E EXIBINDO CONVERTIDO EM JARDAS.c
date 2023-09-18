#include <stdio.h>

int main (){
	
	float m, j;
	printf("Lendo um valor de comprimento em metros e exibindo convertido em jardas \n");
	printf("Digite o valor de comprimento em metros: ");
	scanf("%f", &m);
	
	j = m / 0.91 ;
	
	printf("O valor em jardas eh igual a %.2f jardas \n", j);
	
	return 0;
}
