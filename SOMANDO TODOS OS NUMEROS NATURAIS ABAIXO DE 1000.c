#include <stdio.h>

int main (){
	
	int n2,n3, s;
	int n1 = 1;
	
	do{
		n2 = n1 % 3;
		n3 = n1 % 5;
		
		if((n2 == 0)&&(n3 == 0)){
			printf(" %d ", n1);
			s = s + n1;
		}
		n1++;
	}while(n1 <= 1000);
	
	printf(" \n");
	printf("A soma de todos os numeros naturais que sao multiplos de 3 e 5 eh igual a: %d", s);
	
	return 0;
}
