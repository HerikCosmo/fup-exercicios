#include <stdio.h>

int main(){
    
    int n;
    scanf("%d", &n);
    
    float alunos[n];
    float soma = 0.0;
    
    for(int i = 0; i < n ;i++) scanf("%f", &alunos[i]);
    for(int i = 0; i < n ;i++) soma += alunos[i];
    
    float media = soma / n;
    
    int qtdMaior = 0;
    for(int i = 0; i < n ;i++) if(alunos[i] > media) qtdMaior++;
    
    printf("%d %.2f", qtdMaior, media);
    
    return 1;
}