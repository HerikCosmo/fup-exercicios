#include <stdio.h>

int main(){
    float d;
    scanf("%f", &d);
    
    if(d <= 30) printf("%f", (0.5 * d ) + 5);
    else printf("%f", (0.45 * d) + 5);
    
    return 1;
}