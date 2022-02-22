#include <stdio.h>

int main(){
	
	int i, mult, n;
	
	scanf("%d", &n);
	
	for(i=1; i<=10; i++){
		mult = n*i;
		printf("%d x %d = %d\n", i, n, mult);
	}	
	return 0;
}
