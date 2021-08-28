#include <stdio.h>

void main(){
    int num1, num2;
    
    scanf("%d", &num1);
    scanf("%d", &num2);
    float soma = num1 + num2;
    float media = soma / 2;
    printf("%f", media);
}