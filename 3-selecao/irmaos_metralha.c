#include <stdio.h>

int main(){
    int porc1, porc2, porc3;
    double dinheiro;
    
    scanf("%d %d %d", &porc1, &porc2, &porc3);
    scanf("%lf", &dinheiro);
    
    printf("%.2f\n", dinheiro * (porc1/100.0));
    printf("%.2f\n", dinheiro * (porc2/100.0));
    printf("%.2f\n", dinheiro * (porc3/100.0));
    
    return 1;
}