#include <stdio.h>
#include <limits.h>

void mm_vetor(int numeros[], int n, int *menor, int *maior){
    for(int i = 0; i < n; i++){
        if(numeros[i] < *menor) *menor = numeros[i];
        if(numeros[i] > *maior) *maior = numeros[i];
    }
}


int main(){
    
    int n, maior = INT_MIN, menor = INT_MAX;
    scanf("%d", &n);
    int vetor[n];
    for(int i = 0; i < n; i++) scanf("%d", &vetor[i]);
    
    mm_vetor(vetor, n, &menor, &maior);
    
    printf("%d %d", menor, maior);
    return 1;
}