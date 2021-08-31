#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    
    int soma = 0;
    while(num >= 0){
        soma += num;
        scanf("%d", &num);
    }
        
    printf("%d", soma);
    
    return 0;
}