#include <stdio.h>

 int main() {
    double raio, area;
    printf("");
    scanf("%lf", &raio);
    area = pow(raio,2)*3.14159;
    printf("A=%0.4lf\n", area);
 
    return 0;
}
