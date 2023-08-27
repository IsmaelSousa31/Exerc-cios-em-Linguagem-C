#include <stdio.h>

int main (){

	int n1;
	
	printf("Digite um numero de 1 a 7 para representar um  dia na semana: \n");
	scanf("%d", &n1);
	
	switch (n1){
		case 1:
			printf("Segunda-feira \n");
			break ;
		case 2:
			printf("Terça-feira \n");
			break ;
		case 3:
			printf("Quarta-feira \n");
			break ;
		case 4:
			printf("Quinta-feira \n");
			break ;
		case 5:
			printf("Sexta-feira \n");
			break ;
		case 6:
			printf("Sabado \n");
			break ;
		case 7:
			printf("Domingo \n");
			break ;
		default: 
			printf("Caractere digitado incorretamente \n");
			break ;
			
	}
	
}
