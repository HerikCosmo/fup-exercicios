#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));
    
    int chave = rand() % 1024 + 1;
    int num;
    
    int tentativas = 0;
    do{
        scanf("%d", &num);
        if(num > chave) printf("Maior\n");
        else if(num < chave)printf("Menor\n");
            
        tentativas++;
    }while(num != chave);
    
    printf("Acertou\n");
    printf("tentativas: %d", tentativas);
    
    return 1;
}