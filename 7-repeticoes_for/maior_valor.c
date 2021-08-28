#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    scanf("%d", &n);
    
    int maior = INT_MIN;
    for(int i = 1; i <= n; i++){
        int num;
        scanf("%d", &num);
        if(num > maior) maior = num;
    }
    
    printf("%d", maior);
    
}