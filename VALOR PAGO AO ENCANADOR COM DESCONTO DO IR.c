#include <stdio.h>

int main (){
	
	float diaria = 30;
	float dias, vl;
	float ir = 8;
	
	ir = (ir * diaria) / 100;
	diaria = diaria - ir;
	
	printf("Digite a quantidade de dias trabalhados pelo encanador: \n");
	scanf("%f", &dias);
	
	vl = diaria * dias;
	
	printf("Quantia liquida que sera paga ao encanador: R$ %.2f \n", vl);
	
	return 0;
}
