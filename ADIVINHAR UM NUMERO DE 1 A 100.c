#include <stdio.h>

int main (){
	
	int n = 1;
	 
	 printf(" Adivinhar um numero de 1 a 100 \n");
	 
	do {
		printf("Digite um numero de 1 a 100 \n");
		scanf("%d", &n);
		
		if (n < 58) {
		printf("O numero e maior, tente novamente \n");
		}
		else if (n > 58){
		printf("O numero e menor, tente novamente \n");
		}
		
	}while (n != 58);
	printf("Parabens voce adivinhou numero \n");
}
