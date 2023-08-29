#include <stdio.h>

int main (){
	
	float vt = 780000.00 ;
	float g1,g2,g3;
	
	g1 = (vt * 46) / 100;
	g2 = (vt * 32) / 100;
	g3 = (vt - g1) - g2;
	
	printf ("A divisao do premio ficara da seguinte forma: \n");
	printf("O primeiro ganhador recebera a quantia de R$ %.2f \n", g1);
	printf("O segundo ganhador recebera a quantia de R$ %.2f \n", g2);
	printf("O terceiro ganhador recebera a quantia de R$ %.2f \n", g3);
	
	return 0;
}
