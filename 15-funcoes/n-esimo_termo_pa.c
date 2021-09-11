#include <stdio.h>

int encontrarNesimoTermo(int a1, int r, int n){
    return a1 + ((n - 1) * r);
}

int main(){
    int a1, r, n;
    scanf("%d %d %d", &a1, &r, &n);
    
    printf("%d", encontrarNesimoTermo(a1, r, n));
    
}