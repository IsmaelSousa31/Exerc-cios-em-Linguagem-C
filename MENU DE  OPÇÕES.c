#include <stdio.h>

int main (){

	int op;
	
	printf("Seja bem-vindo \n");
	printf("Escolha uma op�ao \n");
	printf("digite 1 para adicionar o produto \n");
	printf("digite 2 para atualizar o produto \n");
	printf("digite 3 para remover o produto \n");
	scanf ("%d", &op);
	
	switch (op){
		case 1:
			printf ("Voc� adicionou o produto \n");
			break;
		case 2:
			printf ("Voc� atualizou o produto \n");
			break;
		case 3:
			printf ("Voc� removeu o produto \n");
			break;
		default:
			printf("Op�ao invalida, tente novamente");
			break;
	}
	
}
