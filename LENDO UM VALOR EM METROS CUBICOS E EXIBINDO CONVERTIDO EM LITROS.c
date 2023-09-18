#include <stdio.h>

int main (){
	
	float l, m;
	printf("Lendo um valor de volume em metros cubicos m3 e exibindo convertido em litros \n");
	printf("Digite o valor de volume em metros cubicos m3: ");
	scanf("%f", &m);
	
	l = 1000 * m;
	
	printf("O valor em litros eh igual a %.2f litros \n", l);
	
	return 0;
}
