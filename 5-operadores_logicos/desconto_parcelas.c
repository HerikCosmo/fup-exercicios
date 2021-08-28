#include <stdio.h>

int main(){
    
    int valor_prod, tipo_prod, qtd_parc;
    scanf("%d %d %d", &valor_prod, &tipo_prod, &qtd_parc);
    
    if(tipo_prod == 1) valor_prod -= 8;
    else if(tipo_prod == 2) valor_prod -= 15;
    else valor_prod -= 18;
    
    if(valor_prod < 0) valor_prod = 0;
    
    int valor_parc = valor_prod / qtd_parc;
    int valor_ult_parc  = valor_parc + (valor_prod % qtd_parc);
    
    printf("%d %d %d", valor_prod, valor_parc, valor_ult_parc);
    
    return 1;
}