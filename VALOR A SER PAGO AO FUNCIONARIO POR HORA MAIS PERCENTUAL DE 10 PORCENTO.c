#include <stdio.h>

int main (){
	
	float horat, numh, cal, valorp;
	
	printf ("Digite o valor da hora trabalhada: \n");
	scanf("%f", &horat);
	
	printf ("Digite o numero de horas trabalhadas no mes: \n");
	scanf("%f", &numh);
	
	cal = (horat * numh);
	valorp = ((cal * 10) / 100) + cal;
	
	printf ("O valor a ser pago ao funcionario sera de: R$ %.2f \n", valorp);
	
	return 0;
	
}
