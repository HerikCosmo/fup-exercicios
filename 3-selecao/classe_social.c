#include <stdio.h>

int main(){
    
    int renda;
    scanf("%d", &renda);
    
    if(renda <= 324) printf("Extremamente pobre");
    else if(renda  <= 648) printf("Pobre");   
    else if(renda  <= 1164) printf("Vulneravel");   
    else if(renda  <= 1764) printf("Baixa classe media");   
    else if(renda  <= 2546) printf("Media classe media");   
    else if(renda  <= 4076) printf("Alta classe media");   
    else if(renda  <= 9920) printf("Baixa classe alta");   
    else printf("Alta classe alta");
    
    return 1;
}