#include <stdio.h>

int main (){
	
	float m, k;
	
	printf("Lendo a distancia em milhas e convertendo para quilometro/hora \n");
	printf("Digite a distancia em milhas: ");
	scanf("%f", &m);
	
	k = 1.61 * m;
	
	printf("O resultado da conversao eh = %f", k);
	
	return 0;
}
