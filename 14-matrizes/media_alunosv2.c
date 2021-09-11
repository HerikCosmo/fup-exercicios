#include <stdio.h>

int main(){
    
    int n, m;
    scanf("%d %d", &n, &m);
    
    float A[n][m];
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%f", &A[i][j]);
        }
    }
    
    for(int i = 0; i < m; i++){
        float soma = 0;
        for(int j = 0; j < n; j++){
            soma += A[j][i];
        }
        printf("%.2f ", soma / n);
    }
}