#include <stdio.h>
#include <math.h>
int calcularRaizes(int a, int b, int c, float *raiz1, float *raiz2){
    int delta = sqrt(pow(b, 2) - (4 * a * c));
    if(delta < 0) return 0;
    else {
        *raiz1 = ((b * -1) + delta) / (2 * a);
        *raiz2 = ((b * -1) - delta) / (2 * a);
        return 1;
    }
}
int main(){
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);
    
    float raiz1 = 0, raiz2 = 0;
    int valida = calcularRaizes(a, b, c, &raiz1, &raiz2);
    printf("%d %.2f %.2f", valida, raiz1, raiz2);
    
    
    return 1;
}

