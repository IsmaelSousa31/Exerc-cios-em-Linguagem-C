#include <stdio.h>

int main (){
	
	int n1,n2, maior, menorn;
	
	n1 = 1;
	
	printf("Maior e menor de 10 numeros lidos \n");
	printf("Digite um numero para inicializar as variaveis: ");
	scanf("%d", &n2);
	
	menorn = maior = n2;
	
	while(n1 <= 10){
		printf("Digite um numero: ");
		scanf("%d", &n2);
		
		if(n2 <= menorn){
			menorn = n2;
		}
		
		if(n2 > maior){
			maior = n2;
		}
	
		n1++;		
	}
	
	printf("O maior numero: %d \n", maior);
	printf("O menor numero: %d \n", menorn);
	
	return 0;
}
