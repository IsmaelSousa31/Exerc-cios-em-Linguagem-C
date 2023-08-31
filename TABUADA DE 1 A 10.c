#include <stdio.h>

int main(){
	int n,n2 = 1;
	int r;
	
	printf("     Tabuada     \n");
	printf("Digite um numero \n");
	scanf("%d", &n);
	
	while ( n2 <= 10 ){
		 r = n * n2;
        printf("%d x %d = %d\n", n, n2, r);
		n2++;
	}
}
