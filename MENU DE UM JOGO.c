
#include <stdio.h>

int main (){

	int op;
	
	printf("Bem vindo ao jogo \n");
	printf("selecione uma opçao \n");
	printf("digite 1 para iniciar um novo jogo \n");
	printf("digite 2 carregar jogo salvo \n");
	printf("digite 3 sair \n");
	scanf ("%d", &op);
	
	switch (op){
		case 1:
			printf ("Iniciando um novo jogo \n");
			break;
		case 2:
			printf ("Carregando seu jogo \n");
			break;
		case 3:
			printf ("Saindo... \n");
			break;
		default:
			printf("Opçao invalida, tente novamente");
			break;
	}
	
}
