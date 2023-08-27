#include <stdio.h>

int main (){
	
	float preco = 0.00;
	int porc = 00;
	float valor = 0.00;
	
	printf("Seja bem-vindo, primeiro digite o valor do produto que deseja: \n");
	scanf("%f", &preco);
	
	printf("Digite o percentual do produto: \n");
	scanf("%d", &porc);
	
	valor= (preco * porc)/100;
	valor = valor + preco;
	
	printf("O Valor do produto mais o percentual igual a: R$ %.2f. \n", valor);
	
	
}
