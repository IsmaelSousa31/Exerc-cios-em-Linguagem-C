#include <stdio.h>

int main (){
	
	float r, g;
	
	printf("Lendo um angulo em radiano e convertendo para graus: \n");
	printf("Digite o valor do angulo em radiano: ");
	scanf("%f", &r);
	
	g = r * 180 / 3.14;
	
	printf("O angulo em graus eh igual a %.2f graus", g);
	
	return 0;
}
