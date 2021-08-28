#include <stdio.h>

int main(){
    char op;
    scanf("%c", &op);
    
    if(op == '+') printf("Soma");
    else if(op == '-') printf("Subtracao");
    else if(op == '*') printf("Multiplicacao");
    else if(op == '/') printf("Divisao");
    else if(op == '%') printf("Resto da divisao"); 
    else printf("NDA");

    return 1;
}