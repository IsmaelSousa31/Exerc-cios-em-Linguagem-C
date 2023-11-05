#include <stdio.h>

int main(){
	
	int v[10];
	int i, men, mai;
	
	for(i=0;i<10;i++){
		printf("Digite um numero: ");
		scanf("%d", &v[i]);	
	}
	
	men = mai = v[0];
	  
	for(i=0;i<10;i++){
	if(v[i] > mai){
			mai = v[i];
		}
			
		if(v[i] < men ){
			men = v[i];
		}		
	}
	
	printf("O maior numero eh: %d \n", mai);
	printf("O menor numero eh: %d \n", men);
	
	return 0;
}
