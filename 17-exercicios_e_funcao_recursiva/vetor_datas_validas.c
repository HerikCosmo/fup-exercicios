#include <stdio.h>
#include <stdlib.h> 
typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

int qtd_datas_validas(Data datas[], int n){
    int contador = 0;
    
    
    
    for(int i = 0; i < n; i++){
        int valida = 0;
        int dia = datas[i].dia, mes = datas[i].mes, ano = datas[i].ano;
        int mes31 = (mes == 1 || mes == 3 || mes == 5 || mes == 7 || 
                 mes == 8 || mes == 10 || mes == 12);
        int mes30 = (mes == 4 || mes == 6 || mes == 9 || mes == 11);
        int ano_bissexto = (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0));
        
        if(mes <= 12){
            if(mes31 && dia <= 31) valida = 1;
            else if(mes30  && dia <= 30) valida = 1;
            else{
                if(ano_bissexto && dia <= 29) valida = 1;
                else if(dia <= 28) valida = 1;
           }
        }
        if(valida) contador++;
    }
    
    return contador;
}
int main(){
    int n;
    scanf("%d", &n);
    Data* datas = (Data*)malloc(sizeof(Data) * n);
    
    for(int i = 0; i < n; i++){
        scanf("%d/%d/%d", &datas[i].dia, &datas[i].mes, &datas[i].ano);      
    }
    
    
    printf("%d", qtd_datas_validas(datas, n));
    
    free(datas);
    return 1;
}