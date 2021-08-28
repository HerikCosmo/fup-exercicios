#include <stdio.h>

int main(){
    
    double num;
    
    scanf("%lf", &num);
    
    if(num < 0){
        printf("%.2f", num * (-1));
    }else{
        printf("%.2f", num);
    }
    return 1;
}