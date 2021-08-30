#include <stdio.h>

int main(){
    
    int n;
    scanf("%d", &n);
    int soma = 0;
    int numAnterior;
    for(int i = 1; i<= n; i++){
        int num;
        scanf("%d", &num);
        
        if(num % 2 == 0) soma += num;
        else{
            if(i != 1){
                int diferenca = num - numAnterior;
                soma -= diferenca < 0 ? diferenca*(-1) : diferenca;
            }
        }
        numAnterior = num;
    }
    
    printf("%d", soma);
    
    return 0;
}