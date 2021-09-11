#include <stdio.h>

int main(){
    
    int n;
    scanf("%d", &n);
    
    int A[n][n], soma = 0;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &A[i][j]);
        }
    }
    for(int i = 0; i < n; i++) soma += A[n - 1 - i][i];
    
    printf("%d", soma);
    
}