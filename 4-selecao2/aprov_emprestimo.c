#include <stdio.h>

int main(){
    int emprestimo, meses, salario;
    scanf("%d", &emprestimo);
    scanf("%d", &meses);
    scanf("%d", &salario);
    
    int valorPorMes = emprestimo / meses;
    
    if(valorPorMes > (salario * 0.3)) printf("NAO");
    else printf("SIM");
    return 1;
}