#include <stdio.h>

int main(){
    
    int d1, d2, d3, d4, d5;
    scanf("%d %d %d %d %d", &d1, &d2, &d3, &d4, &d5);
     
    int r1, r2, r3;
    r1 = d1 + d2 == d3;
    
    r2 = (d4 % 2 == 0) ? (d2*2 == d4) : (d2*2 + 1 == d4);
    
    r3 = (d5 % d3 == 0) ? (2*d3 == d5) : (2*d3 - 1 == d5);
    
    (r1 && r2 && r3) ? printf("SIM") : printf("NAO");
    
    return 1;
}