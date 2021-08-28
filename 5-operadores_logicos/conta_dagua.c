#include <stdio.h>

int main(){
    int agua_consumida;
    
    scanf("%d", &agua_consumida);
    
    int conta = 7;
    if(agua_consumida >= 101){
        conta = conta + ((agua_consumida - 100) * 5);
        agua_consumida = 100;
    }

    if(agua_consumida >= 31){
        conta = conta + ((agua_consumida - 30) * 2);
        agua_consumida = 30;
    }

    if(agua_consumida >= 11){
        conta = conta + ((agua_consumida - 10) * 1);
    }
    
    printf("R$ %d", conta);
    
    return 1;
}