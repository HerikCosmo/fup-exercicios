#include <stdio.h>

int main(){
    int inicio, fim, soma = 0;
    scanf("%d", &inicio);
    scanf("%d", &fim);
    
    for(int i = inicio; i <= fim; i++){
        if(i % 2 != 0) soma += i;
    }
    
    printf("%d", soma);
    
    
    return 1;
}