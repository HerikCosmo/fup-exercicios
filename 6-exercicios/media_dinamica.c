#include <stdio.h>

int main(){
    float qtd_numeros;
    int n1, n2, n3 = 0, n4 = 0;
    scanf("%f", &qtd_numeros);
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    
    float media = (n1+n2+n3+n4)/qtd_numeros;
    
    printf("%.3f", media);
    
    return 1;
}