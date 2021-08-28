#include <stdio.h>

void main(){
    int n, d, q, r;
    scanf("%d", &n);
    scanf("%d", &d);
    
    r = n % d;
    q = (n - r)/d;
    
    printf("%d %d", q, r);
}