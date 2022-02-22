#include <stdio.h>

int main(){
	
	int i, impar, X;
	
	scanf("%d", &X);
	
	for(i=1; i<=X; i++){
		impar = i%2;
		if(impar == 1){
			printf("%d\n", i);
		}
	}	
	return 0;
}
