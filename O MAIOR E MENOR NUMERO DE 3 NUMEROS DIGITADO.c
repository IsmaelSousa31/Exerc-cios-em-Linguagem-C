#include <stdio.h>

int main (){
	
	int n1,n2,n3;
	
	printf("Digite um numero: ");
	scanf("%d", &n1);
	
	printf("Digite um numero: ");
	scanf("%d", &n2);
	
	printf("Digite um numero: ");
	scanf("%d", &n3);
	
	if(( n1 > n2 )&&(n2 > n3)){
		printf("O numero %d eh o maior e o %d eh o menor numero  \n", n1,n3);
	}
	else{
		if (( n1 > n3 )&&(n3 > n2)){
		printf("O numero %d eh o maior e o %d eh o menor numero  \n", n1,n2);
	}
	}
	
	if(( n2 > n1 )&&(n1 > n3)){
		printf("O numero %d eh o maior e o %d eh o menor numero  \n", n2,n3);
	}
	else{
		if (( n2 > n3 )&&(n3 > n1)){
		printf("O numero %d eh o maior e o %d eh o menor numero  \n", n2,n1);
	}
	}
		
	if(( n3 > n1 )&&(n1 > n2)){
		printf("O numero %d eh o maior e o %d eh o menor numero  \n", n3,n2);
	}
	else{
		if (( n3 > n2 )&&(n2 > n1)){
		printf("O numero %d eh o maior e o %d eh o menor numero  \n", n3,n1);
	}
	}
	
	if(( n1 == n2 )&&(n2 == n3)){
		printf("Todos os numeros sao iguais  \n", n1,n3);
	}	
	
	if(( n1 > n2 )&&(n2 == n3)){
		printf("O numero %d eh o maior e o %d eh o menor numero  \n", n1,n3);
	}

	
	if(( n2 > n1 )&&(n1 == n3)){
		printf("O numero %d eh o maior e o %d eh o menor numero  \n", n2,n3);
	}

	
	if(( n3 > n1 )&&(n1 == n2)){
		printf("O numero %d eh o maior e o %d eh o menor numero  \n", n3,n2);
	}

	return 0;
}
