#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int* vetor = (int*)malloc(sizeof(int) * n);
    int* vetor2 = (int*)malloc(sizeof(int) * n);
    int* soma = (int*)malloc(sizeof(int) * n);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
    
    for(int i = 0; i < n; i++){
        scanf("%d", &vetor2[i]);
        soma[i] = vetor[i] + vetor2[i];
    }
    
    for(int i = 0; i < n; i++){
        printf("%d ", soma[i]);
    }
    
    
    
    free(vetor);
    free(vetor2);
    free(soma);
    
    return 1;
}