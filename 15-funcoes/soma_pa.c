#include <stdio.h>

int encontrarNesimoTermo(int a1, int r, int n){
    return a1 + ((n - 1) * r);
}
float somaDosTermos(int a1, int an, int n){
    return ((a1 + an) / 2.0) * n;
}

int main(){
    int a1, r, n;
    scanf("%d %d %d", &a1, &r, &n);
    
    int an = encontrarNesimoTermo(a1, r, n);
    float soma = somaDosTermos(a1, an, n);
    printf("%d %d %.2f", a1, an, soma);
    
}