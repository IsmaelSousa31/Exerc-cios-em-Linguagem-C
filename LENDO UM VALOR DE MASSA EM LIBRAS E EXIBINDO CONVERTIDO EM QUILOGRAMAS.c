#include <stdio.h>

int main (){
	
	float k, l;
	printf("Lendo um valor de massa em libras e exibindo convertido em quilogramas \n");
	printf("Digite o valor de massa em libras: ");
	scanf("%f", &l);
	
	k = l * 0.45;
	
	printf("O valor em quilogramas eh igual a %.2f quilogramas \n", k);
	
	return 0;
}
