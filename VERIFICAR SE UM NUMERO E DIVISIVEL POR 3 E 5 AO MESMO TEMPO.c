#include <stdio.h>

int main (){
 
 int n1;
 
 printf("Digite um numero: \n");
 scanf ("%d", &n1);
 
 
 if ((n1 % 3 == 0) && ((n1 % 5 == 0) || (n1 % 5 == 5))){
 	printf ("O numero e divisivel por 5 e por 3 ao mesmo tempo \n");
 }
 else{
 	printf("O numero  nao e divisivel por 5 e por 3 ao mesmo tempo \n");
 }
}
