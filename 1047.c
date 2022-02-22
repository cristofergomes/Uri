#include <stdio.h>
 
int main() {
    int hora1, min1, hora2, min2, inicio, fim, x, y, dif;
    printf("");
    scanf("%d %d %d %d", &hora1, &min1, &hora2, &min2);
    
    inicio = hora1*60 + min1;
    fim = hora2*60 + min2;
    dif = (fim - inicio);
    if(dif<=0){
        dif = dif + 1440;
    }
    x = (dif)/60;
    y = (dif)%60;
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", x, y);
 
    return 0;
}
