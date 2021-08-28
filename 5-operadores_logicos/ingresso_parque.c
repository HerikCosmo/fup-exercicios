#include <stdio.h>

int main(){
    int filho1, filho2, filho3, filho4;
    scanf("%d %d %d %d", &filho1, &filho2, &filho3, &filho4);
    
    float valor_ingresso;
    scanf("%f", &valor_ingresso);
    
    float desconto_total = 0;
    
    
    if(filho1 <= 5) desconto_total += valor_ingresso * 0.2;
    else if(filho1 <= 7) desconto_total += valor_ingresso * 0.15;
    else if(filho1 <= 10) desconto_total += valor_ingresso * 0.05;
    
    if(filho2 <= 5) desconto_total += valor_ingresso * 0.2;
    else if(filho2 <= 7) desconto_total += valor_ingresso * 0.15;
    else if(filho2 <= 10) desconto_total += valor_ingresso * 0.05;
    
    if(filho3 <= 5) desconto_total += valor_ingresso * 0.2;
    else if(filho3 <= 7) desconto_total += valor_ingresso * 0.15;
    else if(filho3 <= 10) desconto_total += valor_ingresso * 0.05;
    
    if(filho4 <= 5) desconto_total += valor_ingresso * 0.2;
    else if(filho4 <= 7) desconto_total += valor_ingresso * 0.15;
    else if(filho4 <= 10) desconto_total += valor_ingresso * 0.05;
    
    float preco_sem_desconto = valor_ingresso * 4;
    float desconto_maximo =  preco_sem_desconto * 0.15;
    
    if(desconto_total > desconto_maximo) printf("%.2f", preco_sem_desconto - desconto_maximo);
    else printf("%.2f", preco_sem_desconto - desconto_total);
    
    return 1;
}