#include <stdio.h>
 
int main() {
    
    int d;
    float gasto, consumo;
    
    printf("");
    scanf("%d", &d);
    printf("");
    scanf("%f", &gasto);
    
    consumo = d/gasto;
    
    printf("%0.3f km/l\n", consumo);

 
    return 0;
}
