#include <stdio.h>
#include <math.h>

typedef struct{
    float x;
    float y;
}Ponto;

typedef struct{
    Ponto ponto;
    float raio;
}Circulo;

float calcular_distancia_pontos(Ponto p1, Ponto p2){
    float d = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    return d;
}

int dentro_circulo(Circulo c, Ponto p){
    float distancia = calcular_distancia_pontos(p, c.ponto);
    return distancia < c.raio;
}

int main(){
    Circulo circ;
    Ponto p;
    
    scanf("%f %f %f", &circ.ponto.x, &circ.ponto.y, &circ.raio);
    scanf("%f %f", &p.x, &p.y);
    
    printf("%d", dentro_circulo(circ, p));
    
    return 1;
}