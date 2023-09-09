#include <stdio.h>

int main (){
	
	float n1,q;
	
	printf("Lendo um numero real e elevando ao quadrado \n");
	printf("Digite um numero para n1: \n");
	scanf("%f", &n1);
	
	q = n1 * n1;
	
	printf("O resultado de %2.f elevado ao quadrado eh = %2.f", n1,q);
	
	return 0;
}
