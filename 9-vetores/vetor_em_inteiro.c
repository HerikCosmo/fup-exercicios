#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d", &n);
    
    int numeros[n];
    for(int i = 0; i< n;i++){
        scanf("%d", &numeros[i]);
    }
    
    int numero = 0;
    for(int i = 0, j = (n-1); j >= 0; i++, j--){
        numero += numeros[i] * pow(10, j);
    }
    
    printf("%d", numero);
    
    return 1;
}