#include <stdio.h>

int main(){
    
    char frase[100], letras[20];
    
    scanf("%[^\n]", frase);
    scanf(" %[^\n]", letras);
    
    int qtd_letras = 0;
    while(letras[qtd_letras] != '\0') qtd_letras++;
    
    int ocorrencias[qtd_letras];
    
    int i = 0;
    while(letras[i] != '\0'){
        int j = 0, contador = 0;
        while(frase[j] != '\0'){
            if(letras[i] == frase[j]) contador++;
            j++;
        }
        ocorrencias[i] = contador;
        i++;
    }
    
    for(int i = 0; i < qtd_letras; i++) printf("%d ", ocorrencias[i]);
    
    return 1;
}