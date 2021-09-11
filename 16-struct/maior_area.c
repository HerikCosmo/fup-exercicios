#include <stdio.h>
#include <math.h>
#define PI 3.14

typedef struct{
    float x;
    float y;
}Ponto;

typedef struct{
    Ponto ponto;
    float raio;
}Circulo;

float calcular_area(Circulo c){
    return PI * pow(c.raio, 2);
}

float retorna_maior_area(Circulo circulos[], int n){
    float maior_area = calcular_area(circulos[0]);
    for(int i = 1; i < n; i++){
        float area = calcular_area(circulos[i]);
        if(area > maior_area) maior_area = area;
    }
    return maior_area;
}
int main(){
    Circulo circ;
    Ponto p;
    int n;
    scanf("%d", &n);
    Circulo circulos[n];
    
    for(int i = 0; i < n; i++){
        scanf("%f %f %f", 
            &circulos[i].ponto.x, 
            &circulos[i].ponto.y, 
            &circulos[i].raio
        );    
    }
    
    float maior_area = retorna_maior_area(circulos, n);
    
    printf("%.2f", maior_area);
    
    return 1;
}