#include <stdio.h>

int potencia(int base, int expoente){
    return expoente == 0 ? 1 : base * potencia(base, expoente - 1);
}

int main(){
    int base, expoente;
    scanf("%d %d", &base, &expoente);
    printf("%d", potencia(base, expoente));
    
    return 0;
}