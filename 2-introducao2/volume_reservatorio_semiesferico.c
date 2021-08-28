#include <stdio.h>
#include <math.h>

void main(){
    float altura, raio, pi;
    
    scanf("%f %f %f", &altura, &raio, &pi);
    
    float formula = (pi / 3) * pow(altura, 2) * (3*raio - altura);
    
    printf("%f", formula);
    
}