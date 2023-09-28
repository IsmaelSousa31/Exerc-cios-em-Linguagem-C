#include <stdio.h>

int main (){
	
	int n1,n2,n4,n5, n11;
	int n3 = 0;
	printf("Digite um numero: \n");
	scanf("%d", &n1);
	
	printf("Digite um numero: \n");
	scanf("%d", &n2);
	
	n11 = n1;
	
	if(n1 <= n2){
	do{
		n3 = n1 % 2;
		if(n3 == 0){
			printf(" %d ", n1);
			n4 = n4 + n1;
		}
		else if(n3 == 1){
			printf(" %d ", n1);
			n5 = n5 * n1;
		}
		n1++;
	}while(n1 <= n2);
	}
	
	n1 = n11;
	
	if(n2 <= n1){
	do{
		n3 = n2 % 2;
		if(n3 == 0){
			printf(" %d ", n2);
			n4 = n4 + n2;
		}
		else if(n3 == 1){
			printf(" %d ", n2);
			n5 = n5 * n2;
		}
		n2++;
	}while(n2 <= n1);
	}
	
	printf("\n");
	printf("\n A soma dos numeros pares eh: %d", n4);
	printf("\n A multiplicacao dos numeros impares eh: %d \n", n5);
	
	return 0;
	
}
