#include <stdio.h>

int main(){
	
	float renda, imposto, taxado;
	
	scanf("%f", &renda);
	
	if(renda <= 2000.00){
		printf("Isento\n");
	}else{
		if(renda <= 3000.00){
			taxado = renda - 2000;
			imposto = taxado*0.08;
			printf("R$ %0.2f\n", imposto);
		}else{
			if(renda <= 4500.00){
				taxado = renda - 3000;
				imposto = taxado*0.18;
				imposto = imposto + 80;
				printf("R$ %0.2f\n", imposto);
			}else{
				taxado = renda - 4500;
				imposto = taxado*0.28;
				imposto = imposto + 80 + 270;
				printf("R$ %0.2f\n", imposto);
			}
		}
	}
	return 0;
}
