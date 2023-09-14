#include <stdio.h>

int main (){
	
	float m, k;
	
	printf("Convertendo a velocidade de metros/segundo para quilometro/hora \n");
	printf("Digite a velocidade em m/s : ");
	scanf("%f", &m);
	
	k = m * 3.6;
	
	printf("O resultado da conversao eh = %f", k);
	
	return 0;
}
