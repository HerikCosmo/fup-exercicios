#include <stdio.h>

int main(){
    
    int n, m;
    scanf("%d %d", &n, &m);
    
    int A[n][m];
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &A[i][j]);
        }
    }
    
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", A[j][i]);
        }
        printf("\n");
    }
 
}