#include <stdio.h>

int main(){
    char letra;
    
    scanf("%c", &letra);
    
    if(letra == 'M'){
        printf("Menino");
    }else{
        printf("Menina");
    }
    
    return 1;
}