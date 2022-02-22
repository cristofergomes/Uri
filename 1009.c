#include <stdio.h>
 
int main() {
    char vendedor[20];
    double sfixo, vendas, salario, bonus;
    printf("");
    scanf("%s", &vendedor);
    printf("");
    scanf("%lf", &sfixo);
    printf("");
    scanf("%lf", &vendas);
    
    bonus = vendas*15/100;
    salario = sfixo + bonus;
    
    printf("TOTAL = R$ %0.2lf\n", salario);
 
 
    return 0;
}
