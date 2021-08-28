#include <stdio.h>
#include <math.h>

void main(){
    float capital, taxaJuros;
    int tempo;
    
    scanf("%f %f %d", &capital, &taxaJuros, &tempo);
    float montante = capital * pow((1 + (taxaJuros/100)), tempo);
    
    float juros = montante - capital;
    float rendimento = (juros *100) / capital;
    printf("A aplicacao rendeu %.2f reais que equivale a um rendimento percentual de %.2f%%.", juros, rendimento);
    

}