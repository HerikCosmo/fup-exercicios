#include <stdio.h>

typedef struct{
    float rentabilidade;
    float taxa_saida;
}Aplicacao;

float rendimento(float valor_inicial, Aplicacao ap){
    ap.rentabilidade *= valor_inicial / 100;
    ap.taxa_saida *= ap.rentabilidade / 100;
    return ap.rentabilidade - ap.taxa_saida;
}

float retorna_maior_possivel(Aplicacao aps[], int n, float valor_inicial){
    float maior_retorno = rendimento(valor_inicial, aps[0]);
    
    for(int i = 1; i < n; i++){
        float rendimento_calculado = rendimento(valor_inicial, aps[i]);
        if(rendimento_calculado > maior_retorno) maior_retorno = rendimento_calculado;
    }
    
    return maior_retorno;
}


void main(){
    int n;
    scanf("%d", &n);
    
    Aplicacao aplicacoes[n];
    
    for(int i = 0; i < n; i++){
        scanf("%f %f", &aplicacoes[i].rentabilidade, &aplicacoes[i].taxa_saida);
    }
    
    float valor_inicial;
    scanf("%f", &valor_inicial);
    
    float retorno = retorna_maior_possivel(aplicacoes, n, valor_inicial);
    
    printf("%.2f", retorno);
}