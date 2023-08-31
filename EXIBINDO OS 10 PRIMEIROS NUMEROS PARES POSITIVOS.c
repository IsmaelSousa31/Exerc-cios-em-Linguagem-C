#include <stdio.h>

int main (){
	
	int n,n1;
	
	printf("Exibindo os primeiros 10 numeros pares positivos \n");
	for (n=1; n<=20; n++){
		n1 = n % 2;
		if (n1 == 0){
			printf("%d \n", n);
		}
	}
}
