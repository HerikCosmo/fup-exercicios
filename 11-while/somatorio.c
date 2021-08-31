#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int vetor[n];
    
    int i = 0;
    while(i < n) scanf("%d", &vetor[i++]);
    
    int soma = 0;
    i = 0;
    while(vetor[i] >= 0) soma += vetor[i++];
    
    printf("%d", soma);
    
    
    
    return 0;
}