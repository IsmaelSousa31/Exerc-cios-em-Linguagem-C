#include <stdio.h>

int main (){
	
	float n1, n2, n3, n4, m;
	
	printf("Lendo 4 notas e fazendo a media aritmetica: \n");
	printf("Digite a primeira nota: \n");
	scanf("%f", &n1);
	
	printf("Digite a segunda nota: \n");
	scanf("%f", &n2);
	
	printf("Digite a terceira nota: \n");
	scanf("%f", &n3);
	
	printf("Digite a quarta nota: \n");
	scanf("%f", &n4);
	
	m = (n1 + n2 + n3 + n4) / 4;
	
	printf("A media aritmetica das quatros notas eh: %.2f \n", m);
}
