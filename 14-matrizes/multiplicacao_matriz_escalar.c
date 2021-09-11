#include <stdio.h>

int main(){
    int n, m, alfa;
    scanf("%d %d", &n, &m);
   
    int A[n][m], C[n][m];
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){    
            scanf("%d\n", &A[i][j]);
        }
    }
    scanf("%d", &alfa);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            C[i][j] = (A[i][j] * alfa);
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