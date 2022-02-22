#include <stdio.h>
 
int main() {
    int cem, cinq, vint, dez, cinco, dois, um, M, mcinq, mvint, mdez, mcinco, mum, O;
    
    printf("");
    scanf("%d.%d", &M, &O);
    //há problemas com precisão com variaveis float/double, então uma variavel int pra reais e outra int pra centavos.
    
    
    cem = M/100;
    M = M%100;
    cinq = M/50;
    M = M%50;
    vint = M/20;
    M = M%20;
    dez = M/10;
    M = M%10;
    cinco = M/5;
    M = M%5;
    dois = M/2;
    M = M%2;
    um = M/1;
    M = M%1;
    mcinq = O/50;
    O = O%50;
    mvint = O/25;
    O = O%25;
    mdez = O/10;
    O = O%10;
    mcinco = O/5;
    O = O%5;
    mum = O/1;
    
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", cem);
    printf("%d nota(s) de R$ 50.00\n", cinq);
    printf("%d nota(s) de R$ 20.00\n", vint);
    printf("%d nota(s) de R$ 10.00\n", dez);
    printf("%d nota(s) de R$ 5.00\n", cinco);
    printf("%d nota(s) de R$ 2.00\n", dois);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", um);
    printf("%d moeda(s) de R$ 0.50\n", mcinq);
    printf("%d moeda(s) de R$ 0.25\n", mvint);
    printf("%d moeda(s) de R$ 0.10\n", mdez);
    printf("%d moeda(s) de R$ 0.05\n", mcinco);
    printf("%d moeda(s) de R$ 0.01\n", mum);

 
    return 0;
}
