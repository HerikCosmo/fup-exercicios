#include <stdio.h>

int main(){
    
    int cigarros, anos;
    int diasPerdidos;
    scanf("%d", &cigarros);
    scanf("%d", &anos);
    
    diasPerdidos = (anos * 365*10*cigarros)/1440;
    
    printf("%d", diasPerdidos);
    
    
    return 1;
}