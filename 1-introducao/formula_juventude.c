#include <stdio.h>

void main(){
    float peso, altura;
    int idade, ano_nascimento, dia_nascimento;
    
    scanf("%f", &peso);
    scanf("%f", &altura);
    
    scanf("%d", &idade);
    scanf("%d", &ano_nascimento);
    scanf("%d", &dia_nascimento);
    
    float formula = (((peso + altura) / idade) + ano_nascimento) * dia_nascimento;
    
    printf("%f", formula);
}