#include <stdio.h>

int fibonacci(int n){
    return n < 2 ? n : fibonacci(n-1) + fibonacci(n-2);
}

void main(){
    int n;
    scanf("%d", &n);
    printf("%d", fibonacci(n));
}