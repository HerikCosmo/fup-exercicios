#include <stdio.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

int compararDatas(Data d1, Data d2){
    return (d1.dia == d2.dia && d1.mes == d2.mes && d1.ano == d2.ano);
}

int main(){
    Data d1, d2;
    
    scanf("%d/%d/%d", &d1.dia, &d1.mes, &d1.ano);
    scanf("%d/%d/%d", &d2.dia, &d2.mes, &d2.ano);
    
    if(compararDatas(d1, d2)) printf("Iguais");
    else printf("Diferentes");
    
    
    return 1;
}