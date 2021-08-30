#include <stdio.h>

int main(){
    int k, n, kesimo;
    
    scanf("%d %d", &k, &n);
    
    for(int i = 1; i<= n; i++){
        int num;
        scanf("%d", &num);
        if(i == k) kesimo = num;
    }
    
    printf("%d", kesimo);
    return 0;
}