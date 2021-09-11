#include <stdio.h>

int main(){
    int n, m, soma = 0;
    scanf("%d %d", &n, &m);
    
    int A[n][m];
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &A[i][j]);
            soma += A[i][j];
        }
    }
    
    printf("%d", soma);
    
    return 1;
}