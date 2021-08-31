#include <stdio.h>

int main(){
    
    int n;
    scanf("%d", &n);
    
    float preco_produtos[n], carteira;
    int qtd_produtos[n];
    
    for(int i = 0; i < n; i++) scanf("%f", &preco_produtos[i]);
    for(int i = 0; i < n; i++) scanf("%d", &qtd_produtos[i]);
    scanf("%f", &carteira);
    
    float dinheiro_gasto = 0;
    
    int qtd_produtos_comprados = 0;
    
    for(int i = 0; i < n; i++){
        float preco = preco_produtos[i] * qtd_produtos[i];
        if(preco < carteira){
            qtd_produtos_comprados += qtd_produtos[i];
            dinheiro_gasto += preco;
            carteira -= preco;
        }
        
    }
    
    printf("%d %.2f %.2f", qtd_produtos_comprados, dinheiro_gasto, carteira);
    return 1;
}

