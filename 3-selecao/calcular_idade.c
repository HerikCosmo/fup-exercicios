#include <stdio.h>


int main(){
    int diaN, mesN, anoN, diaA, mesA, anoA;
    
    scanf("%d/%d/%d", &diaN, &mesN, &anoN);
    scanf("%d/%d/%d", &diaA, &mesA, &anoA);
    
    if(mesA > mesN) printf("%d", anoA - anoN);
    else if(mesA < mesN) printf("%d", anoA - anoN - 1);
    else{
        if(diaA >= diaN) printf("%d", anoA - anoN);
        else printf("%d", anoA - anoN - 1);
    }

    return 1;
}