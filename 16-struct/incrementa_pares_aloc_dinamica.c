#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int* vetor = (int*)malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 0) vetor[i] += 1;
    }
    
    for(int i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }
    
    free(vetor);
    
    return 1;
}