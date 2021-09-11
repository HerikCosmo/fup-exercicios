#include <stdio.h>

typedef struct{
      char nome[100];
      float notas[3];
      float media;
}Aluno;

void calcular_medias(Aluno alunos[], int n){
    for(int i = 0; i < n; i++){
        float soma = alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2];
        alunos[i].media = soma / 3.0;
    }
}

void imprimir_alunos_aprovados(Aluno alunos[], int n, int media_uni){
    calcular_medias(alunos, n);
    for(int i = 0; i < n; i++){
        if(alunos[i].media >= media_uni){
            printf("%s\n", alunos[i].nome);
        }
    }   
}

void main(){
    int n, media_uni;
    scanf("%d", &n);
    
    Aluno alunos[n];
    
    for(int i = 0; i < n; i++){
        scanf(" %[^\n]", alunos[i].nome);
        scanf("%f %f %f", &alunos[i].notas[0], &alunos[i].notas[1], &alunos[i].notas[2]);
    }
    scanf("%d", &media_uni);
    
    imprimir_alunos_aprovados(alunos, n, media_uni);
}