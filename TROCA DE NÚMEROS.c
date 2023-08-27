#include <stdio.h>

int main (){
	int n1,n2,n3;
	
	printf("Troca de valores \n");
	printf("Digite um valor para n1 \n");
	scanf("%d", &n1);
	
	printf("Digite um valor para n2 \n");
	scanf("%d", &n2);
	printf("Os valores digitados foram: %d. %d. \n ", n1, n2);
	n3 = n1;
	n1 = n2;
	n2 = n3;
	
	printf("Com as inversao os valores ficarao da seguinte forma: %d. %d. \n", n1, n2);
	
	
}
