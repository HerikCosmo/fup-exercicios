#include <stdio.h>

int main(){
    
    int n, m;
    scanf("%d %d", &n, &m);
    
    int matriz[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    int maiorn = 1, maiorm = 1, maior = matriz[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
                maiorn = i+1;
                maiorm = j+1;
            }
        }
    }
    
    printf("%d %d", maiorn, maiorm);
    
    
    
    return 1;
}