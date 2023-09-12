#include <stdio.h>

int main (){
	
	float n1;
	
	printf("imprimindo a quinta parte de um numero digitado pelo usuario \n");
	printf("Digite um numero para n1: \n");
	scanf("%f", &n1);
	
	n1 = n1 / 5;
	
	printf("A quinta parte do valor digitado eh = %f", n1);
	
	return 0;
}
