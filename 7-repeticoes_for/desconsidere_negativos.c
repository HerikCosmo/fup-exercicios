#include <stdio.h>

int main(){
    int n, soma = 0;
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        int num;
        scanf("%d", &num);
        if(num >= 0) soma += num;
    }
    
    printf("%d", soma);
    
    return 1;
}