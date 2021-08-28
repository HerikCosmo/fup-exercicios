#include <stdio.h>

int main(){
    int idade;
    scanf("%d", &idade);
    
    if(idade <= 3) printf("fralda");
    else if(idade <= 5) printf("baby");
    else if(idade <= 7) printf("kid");
    else if(idade <= 12) printf("juvenil");
    else if(idade <= 19) printf("jovem");
    else printf("nao permitido");
    
    return 1;
}