#include <stdio.h>

int main(){
    int n, soma = 0;
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        int num;
        scanf("%d", &num);
        soma += num;
    }
    
    float media = (1.0*soma)/n;
    
    printf("%.2f", media);
    
    
    
    return 1;
}