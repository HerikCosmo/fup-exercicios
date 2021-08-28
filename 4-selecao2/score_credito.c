#include <stdio.h>

int main(){
    char c1, c2, c3, c4;
    float renda_mensal, emprestimo, qtd_parcelas;
    
    scanf("%c %c %c %c", &c1, &c2, &c3, &c4);
    scanf("%f %f %f", &renda_mensal, &emprestimo, &qtd_parcelas);
    
    int score = 0;
    
    if(c1 == 'S') score = score + 100;
    if(c2 == 'S') score = score + 200;
    if(c3 == 'S') score = score + 200;
    if(c4 == 'S'){
        int qtd_carros, qtd_casas, qtd_apartamentos;
        scanf("%d %d %d", &qtd_carros, &qtd_casas, &qtd_apartamentos);
        score = score + (qtd_carros * 10);
        score = score + (qtd_casas * 40);
        score = score + (qtd_apartamentos * 40);
    }
    
    if(emprestimo <= (renda_mensal *2)) score = score + 200;
    else if(emprestimo <= (renda_mensal * 3)) score = score + 100;
    else if(emprestimo <= (renda_mensal * 4)) score = score + 50;
    
    float parcela = emprestimo / qtd_parcelas;
    if(parcela > (renda_mensal * 0.3)) score = 0;
    
    printf("%d", score);
    
    
    
    return 1;
}