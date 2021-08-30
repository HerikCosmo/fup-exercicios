#include <stdio.h>

int main(){
    
    int n;
    scanf("%d", &n);
    float salario;
    scanf("%f", &salario);
    
    int qtdProd = 0;
    for(int i = 1; i <= n; i++){
        float produto;
        scanf("%f", &produto);
        
        if(salario > produto){
            qtdProd++;
            salario -= produto;
        }
    }
    
    printf("%d", qtdProd);
    
    
    return 0;
}

