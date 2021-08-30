#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    scanf("%d", &n);
    
    int numeros[n];
    int maior = INT_MIN, menor = INT_MAX;
    for(int i = 0; i < n; i++){
        scanf("%d", &numeros[i]);

        if(numeros[i] < menor) menor = numeros[i];
        if(numeros[i] > maior) maior = numeros[i];
    }
        
    int qtdMaior = 0, qtdMenor = 0;
    for(int i = 0; i < n; i++){
        if(numeros[i] == maior) qtdMaior++;
        if(numeros[i] == menor) qtdMenor++;
    }
    
    printf("(%d, %d) (%d, %d)", qtdMenor, menor, qtdMaior, maior);
    
    
    return 1;
}