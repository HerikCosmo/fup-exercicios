#include <stdio.h>

int main(){
    int sum = 0, num;
    for(int i = 1; i<= 21; i++){
        scanf("%d", &num);
        sum += num;
    }
    float media = sum / 21.0;
    printf("%.2f", media);
    
    return 1;
}