#include <stdio.h>

int main(){
    
    int n;
    scanf("%d", &n);
    
    int matriz[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    int diagonal_inferior = 1;
    for(int i = 1; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                for(int o = (i - 1); o >= 0; o--){
                    if(matriz[o][i] != 0){
                        diagonal_inferior = 0;
                        break;
                    }
                }
            }
        }
    }
    
    if(diagonal_inferior) printf("sim");
    else printf("nao");
    
    
    
    return 1;
}