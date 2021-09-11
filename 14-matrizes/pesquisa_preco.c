#include <stdio.h>
#include <limits.h>

int main(){
    
    int n, m;
    scanf("%d %d", &n, &m);
    
    float produtos[n][m], menorPreco[n];
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%f", &produtos[i][j]);
        }
    }
    
    for(int i = 0; i < n; i++){
        float min = INT_MAX;
        for(int j = 0; j < m; j++){
            if(produtos[i][j] < min) min = produtos[i][j];
        }
        menorPreco[i] = min;
    }
    
    for(int i = 0; i < n; i++) printf("%.2f ", menorPreco[i]);
    
    return 1;
}