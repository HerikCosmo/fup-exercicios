#include <stdio.h>
#include <math.h>

typedef struct{
    float x;
    float y;
}Ponto;

float calcular_distancia_pontos(Ponto p1, Ponto p2){
    float d = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    return d;
}

void main(){
    Ponto p1;
    Ponto p2;
    
    scanf("%f %f", &p1.x, &p1.y);
    scanf("%f %f", &p2.x, &p2.y);
    
    float distancia = calcular_distancia_pontos(p1, p2);
    
    printf("%.2f", distancia);
}