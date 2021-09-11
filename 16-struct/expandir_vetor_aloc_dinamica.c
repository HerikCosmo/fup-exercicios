#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int* vet = (int*)malloc(n*sizeof(int));
    
    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }
    
    int m;
    scanf("%d", &m);
    
    int* vet2 = (int*)malloc((n+m)*sizeof(int));
    for(int i = 0; i < n; i++){
        vet2[i] = vet[i];
    }
    
    for(int i = n; i < (n+m); i++){
        scanf("%d", &vet2[i]);
    }
    
    
    free(vet);
    vet = vet2;
    
    for(int i = 0; i < (n + m); i++){
        printf("%d ", vet[i]);
    }
    
    free(vet);
}