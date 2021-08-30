#include <stdio.h>

int main(){
    
    int n, m;
    scanf("%d", &n);
    int vetor1[n];
    for(int i = 0;i < n; i++) scanf("%d", &vetor1[i]);
    
    scanf("%d", &m);
    int vetor2[m];
    for(int i = 0;i < m; i++) scanf("%d", &vetor2[i]);
    
    int numAnterior;
    
    int maior = (m < n) ? m : n;

    int qtd = 0;
    int intercessoes[maior];
    
    
    for(int i = 0;i < n; i++){
        for(int j = 0;j < m; j++){
            if(vetor1[i] == vetor2[j] && vetor1[i] != numAnterior){
                intercessoes[qtd] = vetor1[i];
                numAnterior = vetor1[i];
                qtd++;
            }
        }   
    }
    
    for(int i = 0; i < qtd; i++) printf("%d ", intercessoes[i]);
    
    
    return 0;
}