#include <stdio.h>

int main(){
    float n1, n2, n3;
    
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    
    float media = (n1 + n2 + n3) / 3.0;
    
    if(media >= 7) printf("Aprovado");
    else if(media > 5 && n3 >= 7) printf("Aprovado");
    else{
        float maior_nota;
        
        if(n1 >= n2 && n1 >= n3) maior_nota = n1;
        else if(n2 >= n3) maior_nota = n2;
        else maior_nota = n3;
        
        float menor_nota;
        
        if(n1 <= n2 && n1 <= n3) menor_nota = n1;
        else if(n2 <= n3) menor_nota = n2;
        else menor_nota = n3;
        
        if((maior_nota - menor_nota) <= 3) printf("Aprovado");
        else printf("Reprovado");
    }
    
    
    return 1;
}