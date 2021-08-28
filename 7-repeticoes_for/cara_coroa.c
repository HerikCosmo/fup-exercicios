#include <stdio.h>

int main(){
    
    int lancamento, cara = 0, coroa = 0;
    
    for(int i = 1; i <= 9; i++){
        scanf("%d", &lancamento);
        lancamento ? cara++ : coroa++;
    }
    
    cara > coroa ? printf("Cara") : printf("Coroa");
    
    return 1;
}