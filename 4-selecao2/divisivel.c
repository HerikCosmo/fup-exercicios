#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    if(n % 5 == 0)
        if(n % 3 == 0) printf("SIM");
        else if(n % 7 != 0) printf("SIM");
        else printf("NAO");
    else if(n % 7 != 0) printf("SIM");
    else printf("NAO");
    
    return 1;
}