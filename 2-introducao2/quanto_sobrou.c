#include <stdio.h>

void main(){
    int prod1, prod2, prod3;
    float prec1, prec2, prec3, dinheiro;
    
    scanf("%d %d %d", &prod1, &prod2, &prod3);
    scanf("%f %f %f", &prec1, &prec2, &prec3);
    scanf("%f", &dinheiro);
    
    float precProd1 = prod1 * prec1;
    float precProd2 = prod2 * prec2;
    float precProd3 = prod3 * prec3;
    
    float troco = dinheiro - (precProd1 + precProd2 + precProd3);
    
    printf("%.2f", troco);

}