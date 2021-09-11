#include <stdio.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

int ehValida(Data data){
    int dia = data.dia, mes = data.mes, ano = data.ano;
    int valida = 0;
    
    if(mes <= 12){
        if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
            if(dia <= 31) valida = 1;
        }else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
            if(dia <= 30) valida = 1;
        }else{
            if(ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)){
                if(dia <= 29) valida = 1;
            }
            else{
                if(dia <= 28) valida = 1;
            }
                
        }
    }
    
    return valida;
}
int main(){
    Data d;
    
    scanf("%d/%d/%d", &d.dia, &d.mes, &d.ano);
    
    printf("%d", ehValida(d));
    
    
    return 1;
}