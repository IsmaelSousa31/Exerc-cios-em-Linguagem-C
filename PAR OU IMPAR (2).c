#include <stdio.h>

int main (){
 
 int n1;
 
 printf("Digite um numero: \n");
 scanf ("%d", &n1);
 
 n1 = n1 % 2;
 
 if (n1 == 0){
 	printf ("O numero e par \n");
 }
 else {
 	printf("O numero e impar \n");
 }
}
