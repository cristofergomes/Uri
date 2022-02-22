#include <stdio.h>
 
int main() {
    int peca1, peca2, quant1, quant2;
    float preco1, preco2, total;
    printf("");
    scanf("%d %d %f", &peca1, &quant1, &preco1);
    printf("");
    scanf("%d %d %f", &peca2, &quant2, &preco2);
    total = quant1*preco1 + quant2*preco2;
    printf("VALOR A PAGAR: R$ %0.2f\n", total);

 
    return 0;
}
