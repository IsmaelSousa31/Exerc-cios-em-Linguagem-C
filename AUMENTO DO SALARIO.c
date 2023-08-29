#include <stdio.h>

int main (){
	
	float sal, nsal;
	
	printf("Digite o salario atual do funcionario: \n");
	scanf("%f", &sal);
	
	nsal = (25 * sal) / 100;
	sal = sal + nsal;
	
	printf ("O novo salario do funcionario com o aumento sera de R$ %.2f \n", sal);
	
	return 0;
}
