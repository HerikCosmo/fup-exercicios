#include <stdio.h>

int main(){
    
    int n1, n2; 
    
    scanf("%d", &n1);
    int A[n1];
    for(int i = 0; i < n1; i++) scanf("%d", &A[i]);
    
    
    scanf("%d", &n2);
    int B[n2];
    for(int i = 0; i < n2; i++) scanf("%d", &B[i]);
    
    int tam_max_dif = n1;
    int diferenca[tam_max_dif];
    int tam_dif = 0;
    
    for(int i = 0; i< n1; i++){
        int contido = 0;
        for(int j = 0; j< n2; j++){
            if(A[i] == B[j]){
                contido = 1;
                break;
            }
        }
        if(!contido){
            diferenca[tam_dif] = A[i];
            tam_dif++;
        }
    }
    
    for(int i =0; i < tam_dif; i++) printf("%d ", diferenca[i]);
    
    return 0;
}