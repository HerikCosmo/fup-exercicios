#include <stdio.h>

int main(){
    char frase1[100], frase2[100];
    
    scanf("%[^\n]", frase1);
    scanf(" %[^\n]", frase2);
    
    int cont = 0, cont2 = 0;
    
    while(frase1[cont] != '\0') cont++;
    
    while(frase2[cont2] != '\0') cont2++;
    
    int tam_conc = cont + cont2;
    char concatenacao[tam_conc];
    
    for(int i = 0, j = 0; i < tam_conc; i++){
        if(i < cont) concatenacao[i] = frase1[i];
        else{
            concatenacao[i] = frase2[j];
            j++;
        }
    }
    concatenacao[tam_conc] = '\0';
    printf("%d\n", tam_conc);
    printf("%s", concatenacao);
    
    return 1;
}