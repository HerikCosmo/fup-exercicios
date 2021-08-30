#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int soma = 0;
    for(int i = 1, o = n; i <= o; i++, o--){
        soma += i * o;
    }
    
    printf("%d", soma);
    
    
    return 1;
}