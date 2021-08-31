#include <stdio.h>

int main(){
    
    int tam, pivo;
    scanf("%d", &tam);
    int v[tam];
    
    for(int i =0; i < tam; i++) scanf("%d", &v[i]);
    
    scanf("%d", &pivo);
    
    int qtd_vmenor = 0, qtd_vmaior = 0;
    for(int i = 0; i < tam; i++){
        if(v[i] < pivo) qtd_vmenor++;
        else qtd_vmaior++;
    }
    
    int vmenor[qtd_vmenor], vmaior[qtd_vmaior];
    qtd_vmenor = 0, qtd_vmaior = 0;
    
    for(int i = 0; i < tam; i++){
        if(v[i] < pivo){
            vmenor[qtd_vmenor] = v[i];
            qtd_vmenor++;
        }else{
            vmaior[qtd_vmaior] = v[i];
            qtd_vmaior++;
        }
    }
    
    for(int i = 0; i < qtd_vmenor; i++) printf("%d ", vmenor[i]);
    for(int i = 0; i < qtd_vmaior; i++) printf("%d ", vmaior[i]);
    
    return 1;
}

