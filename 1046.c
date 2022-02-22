#include <stdio.h>

int main(){
	
	int a, b, duracao = 0;
	
	printf("");
	scanf("%d %d", &a, &b);
	
	if(a==b){
		printf("O JOGO DUROU 24 HORA(S)\n");
	}else{
		if(b>a){
			duracao = b-a;
		}else{
			duracao = 24 - a + b;
		}
		printf("O JOGO DUROU %d HORA(S)\n", duracao);
	}

	return 0;
}
