#include <stdio.h>

int main (){
	
	float l, m;
	printf("Lendo um valor de volume em litros e exibindo convertido em metros cubicos \n");
	printf("Digite o valor de volume em litros: ");
	scanf("%f", &l);
	
	m = l / 1000;
	
	printf("O valor em metros cubicos eh igual a %f metros cubicos \n", m);
	
	return 0;
}
