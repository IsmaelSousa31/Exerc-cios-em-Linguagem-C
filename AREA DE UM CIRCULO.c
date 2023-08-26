#include <stdio.h>

int main (){
	
	float a,r;
	float pi = 3.14 ;
	
	printf ("Calculando a area de um circulo de raio r \n");
	printf ("digite o valor de r: \n");
	scanf("%f", &r);
	
	a = pi * (r * r);
	
	printf("A area do circulo e: %f \n", a);
	
	return 0;
}
