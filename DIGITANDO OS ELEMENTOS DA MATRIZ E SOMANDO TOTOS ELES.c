#include <stdio.h>

int main (){
	
	int mat [3][3];
	int i,j,soma = 0;
	
	printf("Digite os elementos da matriz \n");
	for(i = 0; i < 3 ; i++)
		for (j = 0; j <3; j++){
			scanf("%d", &mat[i][j]);
		}
		
	for(i = 0; i < 3; i++)
		for (j = 0; j <3; j++)
		soma = soma + mat[i][j];
	
	printf("soma = %d\n", soma);
	
	return 0;
}
