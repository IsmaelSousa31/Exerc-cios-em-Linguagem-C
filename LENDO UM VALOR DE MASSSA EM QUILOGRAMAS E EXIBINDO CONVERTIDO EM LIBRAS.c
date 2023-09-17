#include <stdio.h>

int main (){
	
	float k, l;
	printf("Lendo um valor de massa em quilogramas e exibindo convertido em libras \n");
	printf("Digite o valor de massa em quilogramas: ");
	scanf("%f", &k);
	
	l = k / 0.45;
	
	printf("O valor em libras eh igual a %.2f libras \n", l);
	
	return 0;
}
