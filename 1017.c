#include <stdio.h>
 
int main() {
    int t, v;
    float gas;
    
    printf("");
    scanf("%d", &t);
    printf("");
    scanf("%d", &v);
    
    gas = v*t/12.0;
    
    printf("%0.3f\n", gas);
 
    return 0;
}
