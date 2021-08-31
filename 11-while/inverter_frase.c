#include <stdio.h>

int main(){
    
    char frase[100];
    scanf(" %[^\n]", frase);
    
    int tamanho = 0;
    while(frase[tamanho] != '\0') tamanho++;
    
    for(int i = 0, j = tamanho - 1; i < (tamanho/2); i++, j--){
        char primeiro = frase[i], ultimo = frase[j];
        frase[i] = ultimo;
        frase[j] = primeiro;
    }
    
    printf("%s", frase);
    return 1;
}