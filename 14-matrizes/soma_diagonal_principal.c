#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
   
    int A[n][n], soma = 0;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){    
            scanf("%d\n", &A[i][j]);
            if(i == j) soma += A[i][j];
        }
    }
    
    printf("%d", soma);
    return 1;
}