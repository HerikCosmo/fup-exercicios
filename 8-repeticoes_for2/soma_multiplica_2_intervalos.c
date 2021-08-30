#include <stdio.h>

int main(){
    int inf1, sup1, inf2, sup2;
    scanf("%d %d %d %d", &inf1, &sup1, &inf2, &sup2);
    
    int result = 0;
    
    for(int i = inf1, j = sup2; i <= sup1 && j >= inf2; i++, j--){
        result += i * j;
    }
    
    printf("%d", result);
    
    return 1;
}