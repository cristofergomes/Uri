#include <stdio.h>
#include <math.h>

int main(){
	
	double A, B, C;
	double x,y,z;
	
	printf("");
	scanf("%lf %lf %lf", &A, &B, &C);
	
	if(A == B && A == C){
		x=A;
		y=B;
		z=C;
	}

	if(A>=B && A>=C){
		x=A;
		if(B>C){
			y=B;
			z=C;
		}else{
			y=C;
			z=B;
		}
	}
	if(B>=A && B>=C){
		x=B;
		if(A>C){
			y=A;
			z=C;
		}else{
			y=C;
			z=A;
		}		
	}
	if(C>=A && C>=B){
		x=C;
		if(A>B){
			y=A;
			z=B;
		}else{
			y=B;
			z=A;
		}		
	}
	if(x >= (y+z) || x <= 0 || y <= 0 || z <=0 ){
		printf("NAO FORMA TRIANGULO\n");
	}else{
		if(x*x == (y*y + z*z)){
			printf("TRIANGULO RETANGULO\n");
		}
		if(x*x > (y*y + z*z)){
			printf("TRIANGULO OBTUSANGULO\n");
		}
		if(x*x < (y*y + z*z)){
			printf("TRIANGULO ACUTANGULO\n");
		}
		if(x == y && x == z){
			printf("TRIANGULO EQUILATERO\n");
		}else{
			if(x == y || y == z || x == z){
				printf("TRIANGULO ISOSCELES\n");
			}
		}	
	}
	
	return 0;
}
