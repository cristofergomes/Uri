#include <stdio.h>
 
int main() {
    int ano, mes, dia, idade;
    
    printf("");
    scanf("%d", &idade);
    
    ano = idade/365;
    idade = idade%365;
    mes = idade/30;
    idade = idade%30;
    dia = idade;
    
    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);
    

    return 0;
}
