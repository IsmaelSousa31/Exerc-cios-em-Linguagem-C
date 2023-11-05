#include <stdio.h>

int main (){
	
	int n = 1;
	
	while(n <= 10){
		if(n == 5){
			n++;
			continue;
		}
		printf(" %d ", n);
		
		n++;
	}
	
	return 0;
}
