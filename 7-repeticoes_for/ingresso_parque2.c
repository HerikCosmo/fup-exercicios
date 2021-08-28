#include <stdio.h>

int main(){
    int num_filhos;
    float preco_ingresso;
    scanf("%d %f", &num_filhos, &preco_ingresso);
    
    float desconto_total = 0;
    
    for(int i = 1; i <= num_filhos; i++){
        int idade;
        scanf("%d", &idade);
        if(idade <= 5) desconto_total += preco_ingresso * 0.20;
        else if(idade <= 7) desconto_total +=  preco_ingresso *0.15;
        else if(idade <= 10) desconto_total +=  preco_ingresso * 0.05;
    }
    
    float preco_sem_desconto = preco_ingresso * num_filhos;
    float desconto_maximo =  preco_sem_desconto * 0.15;
    
    if(desconto_total > desconto_maximo) printf("%.2f", preco_sem_desconto - desconto_maximo);
    else printf("%.2f", preco_sem_desconto - desconto_total);
    
        
    return 1;
}