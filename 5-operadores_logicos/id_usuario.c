#include <stdio.h>

int main(){
    int d1, d2, d3, d4, d5;
    scanf("%d %d %d %d %d", &d1, &d2, &d3, &d4, &d5);
    
    int r1 = d1 % 2 != 0 && d3 % 2 != 0 && d5 % 2 != 0;
    int r2 = d2 % 2 == 0 && d4 % 2 == 0;
    int r3 = d3 == (d1 + 4);
    int r4 = d5 == (d3 + 2);
    
    if(r1 && r2 && r3 && r4) printf("SIM");
    else printf("NAO");
    
    return 1;
}