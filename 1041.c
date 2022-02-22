#include <stdio.h>

int main(){
	
	float x, y;
	
	printf("");
	scanf("%f %f", &x, &y);
	
	if(x == 0 && y == 0){
		printf("Origem\n");
	}else{
		if(x>0 && y>0){
			printf("Q1\n");
		}
		if(x>0 && y<0){
			printf("Q4\n");
		}
		if(x<0 && y>0){
			printf("Q2\n");
		}
		if(x<0 && y<0){
			printf("Q3\n");
		}
		if(x == 0){
			printf("Eixo Y\n");
		}
		if(y == 0){
			printf("Eixo X\n");
		}
	}	
	return 0;
}
