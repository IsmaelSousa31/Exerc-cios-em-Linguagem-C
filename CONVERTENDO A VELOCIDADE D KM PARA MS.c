#include <stdio.h>

int main (){
	
	float k, m;
	
	printf("Convertendo a velocidade de quilometro/hora para metros/segundo \n");
	printf("Digite a velocidade em km/h : ");
	scanf("%f", &k);
	
	m = k/3.6;
	
	printf("O resultado da conversao eh = %f", m);
	
	return 0;
}
