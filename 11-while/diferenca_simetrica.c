#include <stdio.h>

int main(){
    
    int n1, n2;
    scanf("%d", &n1);
    int v1[n1];
    for(int i = 0; i < n1; i++) scanf("%d", &v1[i]);
    
    scanf("%d", &n2);
    int v2[n2];
    for(int i = 0; i < n2; i++) scanf("%d", &v2[i]);
    
    int tam_dif_max = n1 + n2;
    int diferenca[tam_dif_max];
    int tam_dif = 0;
    
    for(int i = 0; i <n1; i++){
        int contido = 0;
        for(int j = 0; j < n2; j++){
            if(v1[i] == v2[j]){
                contido = 1;
                break;
            }
        }
        if(!contido){
            diferenca[tam_dif] = v1[i];
            tam_dif++;
        }
    }
    
    for(int i = 0; i < n2; i++){
        int contido = 0;
        for(int j = 0; j < n1; j++){
            if(v2[i] == v1[j]){
                contido = 1;
                break;
            }
        }
        if(!contido){
            diferenca[tam_dif] = v2[i];
            tam_dif++;
        }
    }
    
    for(int i = 0; i < tam_dif; i++) printf("%d ", diferenca[i]);
    
    return 1;
}