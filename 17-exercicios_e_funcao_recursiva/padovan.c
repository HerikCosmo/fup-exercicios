#include <stdio.h>

int padovan(int n){
    return n <= 2 ? 1 : padovan(n-2)  + padovan(n-3);
}

void main(){
    int n;
    scanf("%d", &n);
    printf("%d", padovan(n));
}