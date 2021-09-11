#include <stdio.h>
#include <limits.h>

int retornaMaior(int n1, int n2, int n3, int n4){
    int maior = INT_MIN, numeros[] = {n1, n2, n3, n4};
    for(int i = 0; i < 4; i++) if(numeros[i] > maior) maior = numeros[i];
    return maior;
}

int main(){
    int n1, n2, n3, n4;
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    
    int maior = retornaMaior(n1, n2, n3, n4);
    printf("%d", maior);
}