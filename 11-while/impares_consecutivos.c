#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    scanf("%d", &n);
    int vetor[n];
    for(int i = 0; i < n; i++){
        int x, y, soma = 0;
        scanf("%d %d", &x, &y);
        
        if(x % 2 == 0) x++;
        while(y> 0){
            soma += x;
            x += 2;
            y--;
        }
        vetor[i] = soma;
    }
    
    int maior = INT_MIN, menor = INT_MAX;
    
    for(int i = 0; i < n; i++){
      if(vetor[i] > maior) maior = vetor[i];  
      if(vetor[i] < menor) menor = vetor[i];
    } 
    
    float media = (maior + menor) / 2.0;
    
    for(int i = 0; i < n; i++) printf("%d\n", vetor[i]);    

    printf("%d\n%d\n%.2f", maior, menor, media);
    
    return 0;
}