#include <stdio.h>
#include <math.h>
 
int main() {
    double A, B, C, tri, cir, tra, qua, ret, pi=3.14159;
    printf("");
    scanf("%lf %lf %lf", &A, &B, &C);
    tri = A*C/2;
    cir = pi*pow(C,2);
    tra = ((A+B)*C)/2;
    qua = pow(B,2);
    ret = A*B;
    printf("TRIANGULO: %0.3lf\n", tri);
    printf("CIRCULO: %0.3lf\n", cir);
    printf("TRAPEZIO: %0.3lf\n", tra);
    printf("QUADRADO: %0.3lf\n", qua);
    printf("RETANGULO: %0.3lf\n", ret);
 
    return 0;
}
