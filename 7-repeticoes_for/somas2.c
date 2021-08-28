#include <stdio.h>

int main(){
    int n, pares = 0, impares = 0;
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        int num;
        scanf("%d", &num);
        i % 2 == 0? pares += num : (impares += num);
    }
    
    printf("%d %d", pares, impares);
    
    
    return  1;
}