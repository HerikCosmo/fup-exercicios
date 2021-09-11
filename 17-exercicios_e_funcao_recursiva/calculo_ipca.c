#include <stdio.h>
#define CATEGORIAS 9

float ipca(float preco_inicio[], float preco_final[], int n){
    float varia_preco[n];
    
    for(int i = 0; i < n; i++){
        varia_preco[i] = (preco_final[i] - preco_inicio[i]) / preco_inicio[i];
    }
    
    float porcentagens[] = {23.12, 4.69, 20.54, 4.96, 9.94, 14.62, 11.09, 6.67, 4.37};
    float valor_ipca = 0;
    
    for(int i = 0; i < n; i++){
        valor_ipca += varia_preco[i] * porcentagens[i];
    }
    
    return valor_ipca;
}

void main(){
    
    float preco_inicio[CATEGORIAS], preco_final[CATEGORIAS];
    for(int i = 0; i < CATEGORIAS; i++){
        scanf("%f", &preco_inicio[i]);
    }
    
    for(int i = 0; i < CATEGORIAS; i++){
        scanf("%f", &preco_final[i]);
    }
    
    float valor_ipca = ipca(preco_inicio, preco_final, CATEGORIAS);
    
    printf("%.4f%%", valor_ipca);
}