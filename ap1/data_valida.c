#include <stdio.h>

int main(){
    
    int dia, mes, ano;
    scanf("%d/%d/%d", &dia, &mes, &ano);
    
    if(mes <= 12){
        if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
            (dia <= 31) ? printf("valida") : printf("invalida");
        
        }else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
            (dia <= 30) ? printf("valida") : printf("invalida");
            
        }else{
            if(ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0))
                (dia <= 29) ? printf("valida") : printf("invalida");
            else
                (dia <= 28) ? printf("valida") : printf("invalida");
        }
        
    }else printf("invalida");
    
    return 1;
}