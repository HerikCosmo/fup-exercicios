#include <stdio.h>

int main(){
    
    int a1, a2, a3;
    scanf("%d %d %d", &a1, &a2, &a3);
    
    if((a1 + a2 + a3) != 180) printf("NT");
    else{
        if(a1 == 90 || a2 == 90 || a3 == 90) printf("RE");
        else if(a1 < 90 && a2 < 90 && a3 < 90) printf("AC");
        else printf("OB");
    }
    
    return 1;
}