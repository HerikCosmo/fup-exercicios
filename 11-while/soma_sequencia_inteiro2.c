#include <stdio.h>

int main(){

    int num = 0, soma = 0;
    
    do{
        soma += num;
        scanf("%d", &num);
    }while(num >= 0);
        
    printf("%d", soma);
    
    return 0;
}