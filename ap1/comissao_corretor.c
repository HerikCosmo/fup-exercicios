#include <stdio.h>

int main(){
    char construtora, tipo_imovel;
    int valor;
    scanf("%c %c %d", &construtora, &tipo_imovel, &valor);
    
    float comissao = 0;
    if(construtora == 'M'){
        if(tipo_imovel == 'M') comissao = valor * 0.05;
        else if(tipo_imovel == 'P') comissao = valor * 0.06;
        else comissao = valor * 0.1;
    }else if(construtora == 'T'){
        if(tipo_imovel == 'M') comissao = valor * 0.055;
        else if(tipo_imovel == 'P') comissao = valor * 0.066;
        else comissao = valor * 0.099;
    }else{
        if(tipo_imovel == 'M') comissao = valor * 0.06;
        else if(tipo_imovel == 'P') comissao = valor * 0.07;
        else comissao = valor * 0.11;
    }
    
    printf("%.2f", comissao);
    
    return 1;
}