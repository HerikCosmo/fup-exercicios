#include <stdio.h>

int main(){
    int inferior, superior, soma_par = 0, soma_impar = 0;
    
    scanf("%d", &inferior);
    scanf("%d", &superior);
    
    for(;inferior<=superior;inferior++){
        if(inferior %2 == 0) soma_par += inferior;
        else soma_impar += inferior;
    }
    
    printf("%d %d", soma_par, soma_impar);
    return 0;
}