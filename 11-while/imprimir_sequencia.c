#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i= 1;
    while(n > 0){
        printf("%d, ", i);
        i = i * 2 + 1;
        n--;
    }
    
    return 0;
}