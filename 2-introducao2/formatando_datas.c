#include <stdio.h>

void main(){
    int dia, mes,ano, idade;
    scanf("%d/%d/%d %d", &dia, &mes, &ano, &idade);
    
    printf("Voce nasceu no dia %d do mes %d no ano %d e hoje tem %d anos.", dia, mes, ano, idade);
}