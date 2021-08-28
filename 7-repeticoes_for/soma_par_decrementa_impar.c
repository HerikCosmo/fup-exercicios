#include <stdio.h>

int main(){
    int n, somatorio = 0;
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        int num;
        scanf("%d", &num);
        num %2 == 0 ? somatorio += num : (somatorio -= num);
    }
    
    printf("%d", somatorio);
    return 1;
}