#include <stdio.h>

int main(){
	
	int i, par;
	
	for(i=2; i<=100; i++){
		par = i%2;
		if(par == 0){
			printf("%d\n", i);
		}
	}	
	return 0;
}
