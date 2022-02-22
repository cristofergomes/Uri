#include <stdio.h>
#include <math.h>
 
int main() {
    double R, volume, pi;
    printf("");
    scanf("%lf", &R);
    pi = 3.14159;
    volume = (4.0/3.0)*pi*pow(R,3);
    printf("VOLUME = %0.3lf\n", volume);
    
 
    return 0;
}
