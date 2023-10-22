#include <stdio.h>

int main (){
	
	int i;
	int v[5];
	
	for(i=0;i<5;i++){
		printf("Digite um numero: \n");
		scanf("%d", &v[i]);
	}
	
	printf("Exibindo os numeros na ordem inversa: \n");
	for(i=4;i>=0;i--){
		printf("  %d  ", v[i]);
	}
	
	return 0;
	
}
