#include <stdio.h>

int main(){
	int c, q;
	float t;
	
	printf("");
	scanf("%d %d", &c, &q);
	
	if(c == 1){
		t = 4.00*q;
	}else{
		if(c == 2){
			t = 4.50*q;
		}else{
			if(c == 3){
				t = 5.00*q;
			}else{
				if(c == 4){
					t = 2.00*q;
				}else{
					if(c == 5){
						t = 1.50*q;
					}
				}
			}
		}
	}
	
	printf("Total: R$ %0.2f\n", t);
		
	return 0;
}
