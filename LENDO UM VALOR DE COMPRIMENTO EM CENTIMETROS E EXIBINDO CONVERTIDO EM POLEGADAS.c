#include <stdio.h>

int main (){
	
	float c, p;
	
	printf("Lendo um valor de comprimento em centimetros e exibindo convertido em polegadas: \n");
	printf("Digite o valor de comprimento em centimetros: ");
	scanf("%f", &c);
	
	p = c / 2.54;
	
	printf("O valor em polegadas eh igual a %.2f polegadas", p);
	
	return 0;
}
