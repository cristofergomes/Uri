#include <stdio.h>

int main(){
	
	float salario, reajuste, nsalario;
	
	printf("");
	scanf("%f", &salario);
	
	if(salario > 0 && salario <= 400.00){
		reajuste = salario*0.15;
		nsalario = salario + reajuste;
		printf("Novo salario: %0.2f\n", nsalario);
		printf("Reajuste ganho: %0.2f\n", reajuste);
		printf("Em percentual: 15 %%\n");
	}
	if(salario > 400.00 && salario <= 800.00){
		reajuste = salario*0.12;
		nsalario = salario + reajuste;
		printf("Novo salario: %0.2f\n", nsalario);
		printf("Reajuste ganho: %0.2f\n", reajuste);
		printf("Em percentual: 12 %%\n");
	}
	if(salario > 800.00 && salario <= 1200.00){
		reajuste = salario*0.10;
		nsalario = salario + reajuste;
		printf("Novo salario: %0.2f\n", nsalario);
		printf("Reajuste ganho: %0.2f\n", reajuste);
		printf("Em percentual: 10 %%\n");
	}
	if(salario > 1200.00 && salario <= 2000.00){
		reajuste = salario*0.07;
		nsalario = salario + reajuste;
		printf("Novo salario: %0.2f\n", nsalario);
		printf("Reajuste ganho: %0.2f\n", reajuste);
		printf("Em percentual: 7 %%\n");
	}
	if(salario > 2000.00){
		reajuste = salario*0.04;
		nsalario = salario + reajuste;
		printf("Novo salario: %0.2f\n", nsalario);
		printf("Reajuste ganho: %0.2f\n", reajuste);
		printf("Em percentual: 4 %%\n");
	}
	
	
	return 0;
}
