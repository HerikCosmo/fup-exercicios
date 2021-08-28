#include <stdio.h>

int main(){
    int n1j1, n2j1, n3j1;
    int n1j2, n2j2, n3j2;
    int pivo;
    scanf("%d %d %d", &n1j1, &n2j1, &n3j1);
    scanf("%d %d %d", &n1j2, &n2j2, &n3j2);
    scanf("%d", &pivo);
    
    int totalj1 = 0, totalj2 = 0;
    
    if(pivo % 2 == 0){
        totalj1 += (n1j1 % 2 == 0) ? n1j1 : n1j1*-1; 
        totalj1 += (n2j1 % 2 == 0) ? n2j1 : n2j1*-1;
        totalj1 += (n3j1 % 2 == 0) ? n3j1 : n3j1*-1;
        
        totalj2 += (n1j2 % 2 == 0) ? n1j2 : n1j2*-1;
        totalj2 += (n2j2 % 2 == 0) ? n2j2 : n2j2*-1;
        totalj2 += (n3j2 % 2 == 0) ? n3j2 : n3j2*-1;
    }else{
        totalj1 += (n1j1 % 2 != 0) ? n1j1 : n1j1*-1; 
        totalj1 += (n2j1 % 2 != 0) ? n2j1 : n2j1*-1;
        totalj1 += (n3j1 % 2 != 0) ? n3j1 : n3j1*-1;
        
        totalj2 += (n1j2 % 2 != 0) ? n1j2 : n1j2*-1;
        totalj2 += (n2j2 % 2 != 0) ? n2j2 : n2j2*-1;
        totalj2 += (n3j2 % 2 != 0) ? n3j2 : n3j2*-1;
    }
    if(totalj1 == totalj2) printf("Empate");
    else if(totalj1 > totalj2) printf("Jogador1 %d", totalj1);
    else printf("Jogador2 %d", totalj2);
    return 1;
}