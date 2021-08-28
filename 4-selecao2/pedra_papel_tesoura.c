#include <stdio.h>
#define PEDRA 1
#define TESOURA 2
#define PAPEL 3

int main(){
    int j1, j2;
    scanf("%d", &j1);
    scanf("%d", &j2);
    
    if(j1 == j2) printf("0");
    else{
        if(j1 == PEDRA){
            if(j2 == TESOURA) printf("1");
            else printf("2");
        }else if(j1 == TESOURA){
            if(j2 == PEDRA) printf("2");
            else printf("1");
        }else{
            if(j2 == PEDRA) printf("1");
            else printf("2");
        }
    }
    return 1;
}