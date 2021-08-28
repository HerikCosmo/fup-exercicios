#include <stdio.h>

int main(){
    float n1, n2, n3, media;
    
    scanf("%f %f %f", &n1, &n2, &n3);
    
    media = (n1 + n2 + n3) / 3.0;
    
    if(media >= 7) printf("Aprovado");
    else if(media < 4) printf("Reprovado");
    else{
        float af;
        scanf("%f", &af);
        if(af < 4) printf("Reprovado");
        else{
            float mediaFinal;
            mediaFinal = (af + media) / 2.0;
            if(mediaFinal >= 5) printf("Aprovado");
            else printf("Reprovado");
        }
    }
        
    
    return 1;
}