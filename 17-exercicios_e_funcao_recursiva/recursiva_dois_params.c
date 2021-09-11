#include <stdio.h>

int h(int m, int n){
    if(n == 1) return m + 1;
    else if(m == 1) return n + 1;
    else{
        return h(m, n - 1) + h(m - 1, n);
    }
}

int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    
    printf("%d", h(m, n));
    
    return 1;
}