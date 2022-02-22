#include <stdio.h>
 
int main() {
    double A, B, media;
    printf("");
    scanf("%lf", &A);
    printf("");
    scanf("%lf", &B);
    media = 0.35*A + 0.75*B;
    media = media/1.1;
    printf("MEDIA = %0.5lf\n", media);
 
    return 0;
}
