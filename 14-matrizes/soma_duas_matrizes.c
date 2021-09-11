#include <stdio.h>

int main(){
    int n, m;
    
    scanf("%d %d", &n, &m);
    
    int A[n][m], B[n][m], C[n][m];
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &A[i][j]);
        }   
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &B[i][j]);
        }   
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            C[i][j] = A[i][j] + B[i][j];
        }   
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", C[i][j]);
        }   
        printf("\n");
    }
    
    
    return 1;
}