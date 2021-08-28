#include <stdio.h>

void main(){
    int segundosTotais, horas, minutos, segundos;
    
    scanf("%d", &segundosTotais);
    horas = segundosTotais / 3600;
    minutos = (segundosTotais % 3600) / 60;
    segundos = (segundosTotais % 3600) % 60;
    
    printf("%d:%d:%d", horas, minutos, segundos);
}