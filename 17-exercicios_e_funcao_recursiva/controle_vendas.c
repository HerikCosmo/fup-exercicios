#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int id;
    int qtd_estoque;
    float preco;
}Produto;

float calcular_valor_vendido(Produto produto, int qtd_vendido){
    return produto.preco * qtd_vendido;
}

Produto retirar_estoque(Produto prod, int qtd_vendido){
    prod.qtd_estoque -= qtd_vendido;
    return prod;
}


void main(){
    int n;
    scanf("%d", &n);
    
    Produto produtos[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d %d %f", 
            &produtos[i].id, 
            &produtos[i].qtd_estoque, 
            &produtos[i].preco
        );
    }
    
    float valor_vendas = 0.0;
    
    for(int i = 0; i < n; i++){
        int qtd_vendido;
        scanf("%d", &qtd_vendido);
        
        valor_vendas += calcular_valor_vendido(produtos[i], qtd_vendido);
        produtos[i] = retirar_estoque(produtos[i], qtd_vendido);
    }
    
    printf("%.2f\n", valor_vendas);
    for(int i = 0; i < n; i++){
        printf("%d ", produtos[i].qtd_estoque);
    }
    
    
    
}