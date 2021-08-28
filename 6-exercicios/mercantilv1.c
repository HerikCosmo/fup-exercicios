#include <stdio.h>

int main(){
    
    float valor_prod, chute_j1, chute_j2;
    scanf("%f %f %f", &valor_prod, &chute_j1, &chute_j2);
    
    float diferenca_j1 = chute_j1 > valor_prod ? chute_j1 - valor_prod : valor_prod - chute_j1;
    float diferenca_j2 = chute_j2 > valor_prod ? chute_j2 - valor_prod : valor_prod - chute_j2;
    
    if(diferenca_j1 == diferenca_j2) printf("empate");
    else if (diferenca_j1 < diferenca_j2) printf("primeiro");
    else printf("segundo"); 
    return 1;
}