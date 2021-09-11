#include <stdio.h>

float retornaFracionado(float num){
    int inteiro = num;
    return num - inteiro;
}

int main(){
    float num;
    scanf("%f", &num);
    
    printf("%.5f", retornaFracionado(num));
    
    return 1;
}