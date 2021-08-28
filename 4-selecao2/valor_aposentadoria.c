#include <stdio.h>

int main(){
    char sexo;
    int idade, meses_contribuicao;
    float contribuicao_mensal;
    
    scanf("%c %d %d %f", &sexo, &idade, &meses_contribuicao, &contribuicao_mensal);
    
    float total = meses_contribuicao*contribuicao_mensal;
    int tempo = (100 - idade)*12;
    
    float valor = total/tempo;
    
    if(sexo == 'M'){
        if(idade >= 90) valor = valor * 1.5;
        else{
            float percentual_acrescimo;
            scanf("%f", &percentual_acrescimo);
            valor = valor * (1.0 + percentual_acrescimo);
        }
    }else{
        float salario_m, per;
        scanf("%f %f", &salario_m, &per);
        valor = (1.0 + per) * valor;
        if(valor < salario_m) valor = salario_m;
    }
    
    printf("%.2f", valor);
    return 1;
}