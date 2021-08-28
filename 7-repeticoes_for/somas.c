#include <stdio.h>

int main(){
    int sum_par = 0, sum_impar = 0, num;
    for(int i = 1; i <= 70; i++){
        scanf("%d", &num);
        (i % 2 == 0) ? sum_par += num : (sum_impar += num);
    }
    
    printf("%d %d", sum_par, sum_impar);
    
    
    return 1;
}