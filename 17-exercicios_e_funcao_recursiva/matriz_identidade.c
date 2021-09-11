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
    
    int identidade = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                if(matriz[i][j] != 1){
                    identidade = 0;
                    break;      
                }
            }else{
                if(matriz[i][j] != 0){
                    identidade = 0;
                    break;      
                }
            }
        }   
    }
    
    if(identidade) printf("sim");
    else printf("nao");
    
}