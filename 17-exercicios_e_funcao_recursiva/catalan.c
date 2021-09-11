#include <stdio.h>

int C(int n){
    return n == 0 ? 1 : (2*((2*n)-1))/(n+1.0)*C(n-1);
}

void main(){
    int n;
    scanf("%d", &n);
    printf("%d", C(n));
}