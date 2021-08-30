#include <stdio.h>

int main(){
    int n, chave, indice = -1;
    
    scanf("%d", &n);
    
    int vetor[n];
    for(int i = 0; i < n; i++) scanf("%d", &vetor[i]);
    
    scanf("%d", &chave);
    
    for(int i = 0; i < n; i++) 
        if(vetor[i] == chave) {
            indice = i;
            break;
        }
            
    
    printf("%d", indice);
    return 1;
}