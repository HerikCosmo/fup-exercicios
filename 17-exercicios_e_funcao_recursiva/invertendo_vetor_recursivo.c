#include <stdio.h>

int soma_vetor(int vet[], int n){
    return n == 0 ? vet[0] : vet[n] + soma_vetor(vet, n-1);
}

int invertendo_valor(int vet[], int ini, int fim){
    if(ini == fim || ini > fim){
        return 1;
    }else{
        int aux = vet[fim];
        vet[fim] = vet[ini];
        vet[ini] = aux;
        invertendo_valor(vet, ini+1, fim-1);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    
    int vet[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }
    
    invertendo_valor(vet, 0, n - 1);
    
    for(int i = 0; i < n; i++){
        printf("%d ", vet[i]);
    }
    return 1;
}