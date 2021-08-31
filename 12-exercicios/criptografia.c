#include <stdio.h>

int main(){
    
    char tenis[] = {'t', 'e', 'n', 'i', 's'};
    char polar[] = {'p', 'o', 'l', 'a', 'r'};
    char frase[101];
    
    scanf("%[^\n]", frase);
    
    for(int i = 0; frase[i] != '\0'; i++){
        for(int j = 0; j < 5; j++){
            if(frase[i] == tenis[j]) frase[i] = polar[j];
            else if(frase[i] == polar[j]) frase[i] = tenis[j];
        }
    }
    printf("%s", frase);
    
    return 1;
}