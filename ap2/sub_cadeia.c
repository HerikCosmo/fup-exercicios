#include <stdio.h>

int main(){
    char cadeia[100], palavra[100];
    
    scanf("%[^\n]", cadeia);
    scanf(" %[^\n]", palavra);
    
    int tam_pal = 0;
    while(palavra[tam_pal] != '\0') tam_pal++;

    int indice = -1 , i = 0;
    while(cadeia[i] != '\0'){
        if(cadeia[i] == palavra[0]){
            for(int j = i, k = 0; j < (i + tam_pal); j++, k++){
                indice = (cadeia[j] == palavra[k]) ? i : -1;
            }
        }
        if(indice != -1) break;
        i++;
    }
    
    printf("%d", indice);
    
    return 1;
}