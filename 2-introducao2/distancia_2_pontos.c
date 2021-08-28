#include <stdio.h>
#include <math.h>

void main(){
    float xa, xb, ya, yb;
    
    scanf("%f %f", &xa, &ya);
    scanf("%f %f", &xb, &yb);
    
    float distancia = sqrt(pow((xb - xa), 2) + pow((yb - ya), 2));
    
    printf("%.2f", distancia);
}