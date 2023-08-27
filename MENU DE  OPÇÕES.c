#include <stdio.h>

int main (){

	int op;
	
	printf("Seja bem-vindo \n");
	printf("Escolha uma opçao \n");
	printf("digite 1 para adicionar o produto \n");
	printf("digite 2 para atualizar o produto \n");
	printf("digite 3 para remover o produto \n");
	scanf ("%d", &op);
	
	switch (op){
		case 1:
			printf ("Você adicionou o produto \n");
			break;
		case 2:
			printf ("Você atualizou o produto \n");
			break;
		case 3:
			printf ("Você removeu o produto \n");
			break;
		default:
			printf("Opçao invalida, tente novamente");
			break;
	}
	
}
