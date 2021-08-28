#include <stdio.h>
#include <math.h>

int main(){
    float peso, altura, imc;
    scanf("%f %f", &peso, &altura);
    
    imc = peso / pow(altura, 2);
    
    if(imc < 17) printf("muito abaixo do peso");
    else if(imc <= 18.49) printf("abaixo do peso");
    else if(imc <= 24.99) printf("peso normal");
    else if(imc <= 29.99) printf("acima do peso");
    else if(imc <= 34.99) printf("obesidade");
    else if(imc <= 39.99) printf("obesidade severa");
    else printf("obesidade morbida");
    
    return 1;
}