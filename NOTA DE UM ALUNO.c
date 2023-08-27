#include <stdio.h>

int main (){
	
	int nota;
	
	printf("Digite a sua nota: \n");
	scanf("%d",& nota);
	
	if (nota <= 100 && nota >= 90){
		printf("Parabéns sua  você tirou Nota A \n");
	}
	if (nota <= 89  && nota >= 80){
		printf("Você tirou Nota B \n");
	}
	if (nota <= 79  && nota >= 70){
		printf("Você tirou Nota C \n");
	}
	if (nota <= 69  && nota >= 60){
		printf("Você tirou Nota D \n");
	}
	if (nota <=59){
		printf("Você tirou Nota F \n");
	}

	
	
	
	

}
	
