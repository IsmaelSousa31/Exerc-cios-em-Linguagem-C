#include <stdio.h>

int main (){
	
	int n;
	int s = 0;
	
	for (n=1; n<=100; n++){
		s = s + n;
	}
	
	printf("A soma dos numeros de 1 a 100 e: %d \n ", s);
}
