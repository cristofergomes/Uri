#include <stdio.h>

int main(){
	
	int a, b, c, d, e, par, cont = 0;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%d", &e);
	
	par = a%2;
	if( par == 0){
		cont = cont+1;
	}
	par = b%2;
	if( par == 0){
		cont = cont+1;
	}
	par = c%2;
	if( par == 0){
		cont = cont+1;
	}
	par = d%2;
	if( par == 0){
		cont = cont+1;
	}
	par = e%2;
	if( par == 0){
		cont = cont+1;
	}
	
	printf("%d valores pares\n", cont);
	
	return 0;
}
