#include <stdio.h>

int main(){
    int num; 
    float form = 0.0;
    
    for(int i = 1; i <= 33; i++){
        scanf("%d", &num);
        if(i % 2 == 0) form += num / (i + 2.0);
        else form += num / (i + 3.0);
    }
    
    printf("%.2f", form);
    
    return 1;
}