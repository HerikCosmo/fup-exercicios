#include <stdio.h>

int main(){
    int n, codigo;
    
    scanf("%d", &n);
    
    int vetor[n];
    for(int i = 0; i < n; i++) scanf("%d", &vetor[i]);
    
    scanf("%d", &codigo);
    
    int result[n];
    
    int indice = 0;
    for(int i = 0; i < n; i++){
        if(codigo == 1){
            if(vetor[i] % 2 != 0){
                result[indice] = vetor[i];
                indice++;
            }
        }else if(codigo == 2){
            if(vetor[i] % 2 == 0){
                result[indice] = vetor[i];
                indice++;
            }
        }else if(codigo == 3){
            if(vetor[i] > 0){
                result[indice] = vetor[i];
                indice++;
            }
        }else if(codigo == 4){
            if(vetor[i] < 0){
                result[indice] = vetor[i];
                indice++;
            }
        }
    }
    
    for(int i = 0; i <= indice; i++) printf("%d ", result[i]);
    
    return 1;
}

