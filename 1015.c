#include <stdio.h>
#include <math.h>
 
int main() {
    float x1, x2, y1, y2, distancia;
    printf("");
    scanf("%f %f", &x1, &y1);
    printf("");
    scanf("%f %f", &x2, &y2);
    
    distancia = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    
    printf("%0.4f\n", distancia);
    
    return 0;
}
