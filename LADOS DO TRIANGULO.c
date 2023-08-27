#include <stdio.h>

int main (){
	
	int l1, l2, l3;
	
	printf("Digite o primeiro lado do triangulo: \n");
	scanf("%d", &l1);
	
	printf("Digite o segundo lado do trangulo: \n");
	scanf("%d", &l2);
	
	printf("Digite o terceiro lado do trangulo: \n");
	scanf("%d", &l3);
	
	
	if (l1 + l2 > l3  && l2 + l3 > l1  && l3 + l1 > l2){
	printf("O triangulo e valido \n");
	}
	else{
	printf("O triangulo nao e valido \n");
	}
	
	if(l1 == l2 && l1 != l3){
		printf("O triangulo e isosceles \n");
	}
	
	if(l3 == l2 && l2!= l1 ){
		printf("O triangulo e isosceles \n");
	}
	
	if(l1 == l3 &&  l3 != l2){
		printf("O triangulo e isosceles \n");
	}
	
	if(l1 == l2 && l2 == l3){
		printf("O triangulo e equilatero \n");
	}
	
	if (l1 != l2 && l2 != l3 ){
		printf("O triangulo e escaleno \n");
	}
	
}
