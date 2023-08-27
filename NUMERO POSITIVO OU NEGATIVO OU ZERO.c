#include <stdio.h>

int main (){
	
	int n1; 
	printf ("Digite um numero: \n");
	scanf ("%d", &n1);
	
	if (n1 > 0 ){
		printf ("O numero e positivo \n");
	}
	else if (n1 == 0){
		printf ("O numero e 0 \n");
	}
	else if (n1 < 0){
		printf ("O numero e negativo \n");
	}

	return 0;
}
