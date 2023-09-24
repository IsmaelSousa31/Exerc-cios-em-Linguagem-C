#include <stdio.h>

int main (){
	
	int n, nmenos, nmais;
	
	printf("Antecessesor e o sucessor de um numero \n");
	printf("Digite um numero \n");
	scanf("%d", &n);
	
	nmais = n + 1;
	nmenos = n - 1;
	
	printf("O sucessor do numero digitado: %d \n", nmais);
	printf("O antecessor do numero digitado: %d \n", nmenos);
	
	return 0;
}
