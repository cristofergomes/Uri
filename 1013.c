#include <stdio.h>
#include <math.h>
 
int main() {
    int a, b, c, mab, mabc;
    
    printf("");
    scanf("%d %d %d", &a, &b, &c);
    
    mab = ((a+b)+abs(a-b))/2;
    mabc = ((mab+c)+abs(mab-c))/2;
    
    printf("%d eh o maior\n", mabc);

    return 0;
}
