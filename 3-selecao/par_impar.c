#include <stdio.h>

int main(){
    
    int num;
    
    scanf("%d", &num);
    
    if(num % 2 == 0){
        printf("PAR");
    }
    else{
        printf("IMPAR");
    }
    
    return 1;
}