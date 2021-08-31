#include <stdio.h>

int main(){
    char palavra[101];
    
    scanf("%[^\n]", palavra);
    
    int i = 0;
    while(palavra[i] != '\0'){
        if(palavra[i+1] != '\0') printf("%c-", palavra[i]);
        else printf("%c", palavra[i]);
        i++;
    }
    
    return 1;
}