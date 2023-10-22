#include <stdio.h>

int main (){
	
	float m = 0;
	int i;
	float v[10];
	
	for(i=0;i<10;i++){
		printf("Digite um numero: \n");
		scanf("%f", &v[i]);
		
		m = m + v[i];
	}
	
	m = m / 10;
	printf("A media eh : %.2f", m);
	return 0;
	
}
