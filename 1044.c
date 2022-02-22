#include <stdio.h>

int main(){
	
	int A, B, x;
	
	printf("");
	scanf("%d %d", &A, &B);
	
	if(A==0 || B==0){
		printf("Nao sao Multiplos\n");
	}	
	if(A>=B){
		x = A%B;
	}else{
		x = B%A;
	}
	if(x == 0){
		printf("Sao Multiplos\n");
	}else{
		printf("Nao sao Multiplos\n");
	}

	return 0;
}
