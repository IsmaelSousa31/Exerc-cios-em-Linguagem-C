#include <stdio.h>

int main (){
	
	int n;
	int r = 1;
	
	printf("Fatorial de um numero \n");
	printf("Digite um numero: \n");
	scanf("%d", &n);
	
	printf("O fatorial do numero %d = ", n);
	
	if ((n == 0)||(n == 1)){
		printf("1");
	}
	else
	while (n > 0){
		if (n > 0){
		printf("%d ", n);
		 if (n > 1){
		printf("x ");
		}
		r = r * n;
		n--;
		}
	}
	
	printf(" = %d", r);
}
