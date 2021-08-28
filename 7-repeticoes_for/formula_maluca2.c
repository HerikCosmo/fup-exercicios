#include <stdio.h>

int main(){
    int n;
    float form = 0;
    scanf("%d", &n);
    
    for(int i = 1; i<= n; i++){
        int num;
        scanf("%d", &num);
        if(i % 2 == 0) form += num / (i + 2.0);
        else form += num / (i + 3.0);
    }
    
    printf("%.2f", form);
    return 1;
}