#include <stdio.h>

int soma_vetor(int vet[], int n){
    return n == 0 ? vet[0] : vet[n] + soma_vetor(vet, n-1);
}

int main(){
    int n;
    scanf("%d", &n);
    
    int vet[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }
    
    int soma = soma_vetor(vet, n-1);
    
    printf("%d", soma);
    return 1;
}