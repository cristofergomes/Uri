#include <stdio.h>

int main(){
	
	int a, b, c, d, e, f, cont = 0;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%d", &e);
	scanf("%d", &f);
	
	if( a > 0){
		cont = cont+1;
	}
	if( b > 0){
		cont = cont+1;
	}
	if( c > 0){
		cont = cont+1;
	}
	if( d > 0){
		cont = cont+1;
	}
	if( e > 0){
		cont = cont+1;
	}
	if( f > 0){
		cont = cont+1;
	}
	printf("%d valores positivos\n", cont);
	
	return 0;
}
