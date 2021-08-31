#include <stdio.h>

int main(){
    
    char frase[101], aux[101];
    int j = 0;
    scanf("%[^\n]", frase);
    
    
    for(int i = 0; frase[i] != '\0'; i++){
        if(frase[i] == ' '){
            if((frase[i + 1] == ' ') || (j == 0) ||  frase[i + 1] == '\0') continue;
        }
        
        aux[j] = frase[i];
        j++;
        
    }
    
    aux[j] = '\0';
    for(int i = 0; i <= j; i++) frase[i] = aux[i];
    printf("%s", frase);

    
    return 1;
}