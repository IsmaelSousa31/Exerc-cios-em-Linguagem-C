#include <stdio.h>

int main (){
	
	int n1, n2, n3, maior; 
	int qvz = 0;
	
	printf("Digite uma quantidade de numeros que deseja ler: \n");
	scanf("%d", &n1);
	
	do{
		printf("Digite um numero: \n");
		scanf("%d", &n2);
		
		if(n2 > maior){
			maior = n2;
			qvz = 0;
		}
		
		if(n2 == maior){
			qvz++;
		}
		
		n3++;
		
	}while(n3 < n1);
	
	printf("O maior numero eh: %d \n", maior);
	printf("A quantidade de vezes que o maior numero foi lido eh: %d \n", qvz);
	
	return 0;
}
