#include <stdio.h>

int main (){
	
	float g, r;
	
	printf("Lendo um angulo em graus e convertendo para radianos: \n");
	printf("Digite o valor do angulo em graus: ");
	scanf("%f", &g);
	
	r = g * 3.14 / 180;
	
	printf("O angulo em radianos eh igual a %.2f radianos", r);
	
	return 0;
}
