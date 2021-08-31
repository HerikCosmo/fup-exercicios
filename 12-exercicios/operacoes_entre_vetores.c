#include <stdio.h>

int main(){
    
    int tam_vetor;
    scanf("%d", &tam_vetor);
    
    int v1[tam_vetor], v2[tam_vetor], r[tam_vetor];
    
    for(int i = 0; i < tam_vetor; i++) scanf("%d", &v1[i]);
    for(int i = 0; i < tam_vetor; i++) scanf("%d", &v2[i]);
    
    char op;
    scanf(" %c", &op);
    
    
    if(op == '+'){
        for(int i = 0; i < tam_vetor; i++) r[i] = v1[i] + v2[i];
        for(int i = 0; i < tam_vetor; i++) printf("%d ", r[i]);
    }else if(op == '-'){
        for(int i = 0; i < tam_vetor; i++) r[i] = v1[i] - v2[i];
        for(int i = 0; i < tam_vetor; i++) printf("%d ", r[i]);
    }else if(op == '*'){
        for(int i = 0; i < tam_vetor; i++)r[i] = v1[i] * v2[i];
        for(int i = 0; i < tam_vetor; i++) printf("%d ", r[i]);
    }else if(op == '/'){
        for(int i = 0; i < tam_vetor; i++) r[i] = v1[i] / v2[i];
        for(int i = 0; i < tam_vetor; i++) printf("%d ", r[i]);
    }
    return 1;
}

