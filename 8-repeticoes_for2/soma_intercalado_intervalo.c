#include <stdio.h>

int main(){
    int inferior, superior;
    scanf("%d %d", &inferior, &superior);
    
    
    int soma = 0;
    for(int i = inferior; i <= superior; i+= 2){
            soma += i;
    }
    printf("%d", soma);
    
    return 1;
}