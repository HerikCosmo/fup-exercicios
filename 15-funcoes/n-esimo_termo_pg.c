#include <stdio.h>

double potencia(int q, int n){
    double result = q;
    for(int i = 1;i < (n - 1); i++){
        result *= q;
    }
    return result;
}

double encontrarNesimoTermoPG(int a1, int q, int n){
    return a1 * potencia(q, n);
}

int main(){
    int a1, q, n;
    scanf("%d %d %d", &a1, &q, &n);
    
    printf("%.0f", encontrarNesimoTermoPG(a1, q, n));
    
}