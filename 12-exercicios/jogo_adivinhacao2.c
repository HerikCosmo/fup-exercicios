#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));
    
    int max = 1024, min = 1, tentativas = 1;
    char indique;
    do{
        int chutePC = (rand() % (max - min) + min);
        
        printf("Meu chute: %d\nComo estou: ", chutePC);
        scanf(" %c", &indique);
        
        if(indique == 'A') printf("Acertou em %d tentativas", tentativas);
        else if(indique == 'M'){
            max = chutePC - 1;
            tentativas++;
        }else if(indique == 'm'){
            min = chutePC + 1;
            tentativas++;
        }
        
    }while(indique != 'A');
    
    
    return 1;
}