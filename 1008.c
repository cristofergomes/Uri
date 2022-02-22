#include <stdio.h>
 
int main() {
    int n, h;
    float salario, htrab;
    printf("");
    scanf("%d", &n);
    printf("");
    scanf("%d", &h);
    printf("");
    scanf("%f", &htrab);
    salario = h*htrab;
    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %0.2f\n", salario);
 
    return 0;
}
