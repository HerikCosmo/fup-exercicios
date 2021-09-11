#include <stdio.h>

int ehMaiuscula(char caracter){
    return (caracter >= 65 && caracter <= 90);
}

int transformaEmMinuscula(char caracter){
    return caracter + 32;
}

int transformaEmMaiuscula(char caracter){
    return caracter - 32;
}

int main(){
    char caracter;
    scanf("%c", &caracter);

    char letra =  ehMaiuscula(caracter) ? transformaEmMinuscula(caracter) : transformaEmMaiuscula(caracter);
    
    printf("%c", letra);
    
}