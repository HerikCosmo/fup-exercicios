#include <stdio.h>

void transformar_minuscula(char frase[]){
    
    for(int i = 0; frase[i] != '\0'; i++){
        int maiuscula = frase[i] >= 65 && frase[i] <= 90;
        if(maiuscula) frase[i] += 32; 
    }
}

int contar_ocorrencias(char frase[], char vogal){
    int contador = 0;
    for(int i = 0; frase[i] != '\0'; i++){
        if(frase[i] == vogal) contador++; 
    }
    
    return contador;
}

int main(){
    char frase[151];
    scanf("%[^\n]", frase);
    
    transformar_minuscula(frase);
    
    int ocorrencias_vogais[5];
    char vogais[] = {'a', 'e', 'i', 'o', 'u'};
    
    for(int i = 0; i < 5; i++){
        ocorrencias_vogais[i] = contar_ocorrencias(frase, vogais[i]);
    }
    
    for(int i = 0; i < 5; i++){
        printf("%d ", ocorrencias_vogais[i]);
    }
    
    
    return 0;
}