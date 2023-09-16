#include <stdio.h>

int main (){
	
	float k, m;
	
	printf("Lendo a distancia em quilometro/hora  e convertendo para milhas \n");
	printf("Digite a distancia em quilometro/hora:");
	scanf("%f", &k);
	
	m = k / 1.61 ;
	
	printf("O resultado da conversao eh = %f", m);
	
	return 0;
}
