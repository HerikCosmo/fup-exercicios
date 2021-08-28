#include <stdio.h>

int main(){
    
    float valor_prod, chute_j1;
    char escolha_j2;
    scanf("%f %f %c", &valor_prod, &chute_j1, &escolha_j2);
    
    char maior_ou_menor = (valor_prod > chute_j1) ? 'M' : 'm';
    
    (chute_j1 == valor_prod || escolha_j2 != maior_ou_menor) ? printf("primeiro") : printf("segundo");
    
    return 1;
}