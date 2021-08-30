#include <stdio.h>
int main(){
    int n1;
    scanf("%d", &n1);
    int A[n1];
    for(int i = 0; i < n1; i++) scanf("%d", &A[i]);
    
    int n2;
    scanf("%d", &n2);
    int B[n2];
    for(int i = 0; i < n2; i++) scanf("%d", &B[i]);
    
    int qtd_contidos = 0;
    for(int i = 0; i < n1; i++){
        int contido = 0;
        for(int j = 0; j < n2; j++){
            if(A[i] == B[j]){
                contido = 1;
                break;
            }
        }
        if(contido) qtd_contidos++; 
    }
    
    if(qtd_contidos == n1){
        qtd_contidos = 0;
        for(int j = 0; j < n2; j++){
            int contido = 0;
            for(int i = 0; i < n1; i++){
                if(A[i] == B[j]){
                    contido = 1;
                    break;
                }
            }
            if(contido) qtd_contidos++; 
        }  
        
        if(qtd_contidos == n2) printf("Iguais");
        else printf("Diferentes"); 
    }
    else printf("Diferentes");    
    
    return 1;
}