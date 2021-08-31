#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int pessoas[n];
    for(int i = 0; i< n; i++) scanf("%d", &pessoas[i]);
    
    int menor_fator = 100;
    int maior, menor;
    for(int i = 0; i< n; i++){
        for(int j = 0; j < n; j++){
            if(i == j) continue;
            int fator_atual = (pessoas[i] - pessoas[j]);
            if(fator_atual < 0) fator_atual *= -1;
            if(fator_atual < menor_fator ){
                menor_fator = fator_atual;
                if(i < j){
                    menor = i+1;
                    maior = j+1;
                }else{
                    menor = j+1;
                    maior = i+1;
                }
            }    
        }
        
    }
    
    printf("%d %d", menor, maior);
    return 1;
}