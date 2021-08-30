#include <stdio.h>

int main(){
    int n;
    int num;
    int resultado = 0;

    scanf("%d", &n);
    for(int i = n; i >= 1; i--){
        scanf("%d", &num);
        resultado += num * i;
    }
    
    printf("%d", resultado);
    
    return 1;
}