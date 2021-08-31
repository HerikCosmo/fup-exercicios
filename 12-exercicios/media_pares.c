#include <stdio.h>

int main(){
    
    int tam_n, qtd_pares = 0;
    scanf("%d", &tam_n);
    int numeros[tam_n];
    
    for(int i = 0; i < tam_n; i++){
        scanf("%d", &numeros[i]);
        if(numeros[i] % 2 == 0) qtd_pares++;
    }
    
    int pares[qtd_pares], soma = 0;
    
    qtd_pares = 0;
    for(int i = 0; i < tam_n; i++){
        if(numeros[i] % 2 == 0){
            pares[qtd_pares] = numeros[i];   
            soma += pares[qtd_pares];
            qtd_pares++;
        }
    }
    
    float media = 1.0 * soma / qtd_pares;
    
    printf("%.2f", media);
    
    // return 1;
}