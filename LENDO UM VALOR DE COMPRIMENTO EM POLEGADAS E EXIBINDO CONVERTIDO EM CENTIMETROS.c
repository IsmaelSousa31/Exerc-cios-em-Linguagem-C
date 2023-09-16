#include <stdio.h>

int main (){
	
	float c, p;
	
	printf("Lendo um valor de comprimento em polegadas e exibindo convertido em centimetros: \n");
	printf("Digite o valor de comprimento em polegadas: ");
	scanf("%f", &p);
	
	c = p * 2.54;
	
	printf("O valor em centimetros eh igual a %.2f centimetros", c);
	
	return 0;
}
