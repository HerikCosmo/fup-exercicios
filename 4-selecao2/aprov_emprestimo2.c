#include <stdio.h>

int main(){
    int emprestimo, meses, salario, valorPrestacoes;
    scanf("%d", &emprestimo);
    scanf("%d", &meses);
    scanf("%d", &salario);
    scanf("%d", &valorPrestacoes);
    
    int valorPorMes = emprestimo / meses;
    
    if(valorPorMes <= (salario * 0.3))
        if(valorPrestacoes + valorPorMes <= (salario * 0.3)) printf("SIM");
        else printf("NAO");
    else printf("NAO");
    return 1;
}