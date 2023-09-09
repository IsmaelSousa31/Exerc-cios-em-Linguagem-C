#include <stdio.h>

int main (){
	
	int n1,n2,n3, r;
	printf("Somando 3 numeros inteiros \n");
	printf("Digite um numero para N1: ");
	scanf("%d", &n1);
	
	printf("Digite um numero para N2: ");
	scanf("%d", &n2);
	
	printf("Digite um numero para N3: ");
	scanf("%d", &n3);
	
	r = n1 + n2 + n3;
	
	printf("O resultado da soma de %d, %d e %d eh = %d", n1,n2,n3,r);
	
	return 0;
}
