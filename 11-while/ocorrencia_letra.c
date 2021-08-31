#include <stdio.h>

int main(){
    
    char frase[100], letra;
    
    scanf("%[^\n]", frase);
    scanf(" %c", &letra);
    
    int repeticoes = 0;
    int i = 0;
    while(frase[i] != '\0'){
        if(frase[i] == letra) repeticoes++;
        i++;
    }
    
    printf("%d", repeticoes);
    return 1;
}