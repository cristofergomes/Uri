#include <stdio.h>
 
int main() {
    int cem, cinq, vint, dez, cinco, dois, um, N, M;
    printf("");
    scanf("%d", &N);
    
    M = N;
    
    cem = N/100;
    N = N%100;
    cinq = N/50;
    N = N%50;
    vint = N/20;
    N = N%20;
    dez = N/10;
    N = N%10;
    cinco = N/5;
    N = N%5;
    dois = N/2;
    N = N%2;
    um = N/1;
    
    printf("%d\n", M);
    printf("%d nota(s) de R$ 100,00\n", cem);
    printf("%d nota(s) de R$ 50,00\n", cinq);
    printf("%d nota(s) de R$ 20,00\n", vint);
    printf("%d nota(s) de R$ 10,00\n", dez);
    printf("%d nota(s) de R$ 5,00\n", cinco);
    printf("%d nota(s) de R$ 2,00\n", dois);
    printf("%d nota(s) de R$ 1,00\n", um);

 
    return 0;
}
