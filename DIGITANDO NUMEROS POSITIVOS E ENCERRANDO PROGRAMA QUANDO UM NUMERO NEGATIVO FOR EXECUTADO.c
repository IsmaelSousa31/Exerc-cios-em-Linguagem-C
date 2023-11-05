#include <stdio.h>

int main (){
	
	float r;
	
	while (r >= 0){
		printf("Digite um numero \n");
		scanf("%f", &r);
	
		if(r < 0){
			break;
		}
	}
	
	return 0;
}
