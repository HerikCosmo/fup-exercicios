#include <stdio.h>

int main(){
    
    char frase[201];
    int nFrase = 0, inicio = 0;
    scanf("%[^\n]", frase);
    
    while(frase[nFrase] != '\0') nFrase++;
    for(int i =0; i < nFrase + 1; i++){
        if(frase[i] == ' ' || frase[i] == '\0'){
            for(int j = i - 1; j >= inicio; j--) printf("%c", frase[j]);
            inicio = i + 1;
            printf(" ");
        }
    }
    return 1;
}