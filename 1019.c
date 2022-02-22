#include <stdio.h>
 
int main() {
    int hr, min, seg, temp;
    printf("");
    scanf("%d", &temp);
    
     hr = temp/3600;
     temp = temp%3600;
     min = temp/60;
     temp = temp%60;
     seg = temp;
     
     printf("%d:%d:%d\n", hr, min, seg);

    return 0;
}
