#include <stdio.h>

int main (){
	
	float n1,n2,n3,m;
	
	printf("Media aritmetica de 3 numeros \n");
	printf("Digite um numero para n1: \n");
	scanf("%f", &n1);
	
	printf("Digite um numero para n2: \n");
	scanf("%f", &n2);
	
	printf("Digite um numero para n3: \n");
	scanf("%f", &n3);
	
	m = (n1 + n2 + n3) / 3;
	
	printf ("A media aritmetica dos numeros informados e: %f.\n", m);
}
