#include <stdio.h>

int main(){
    
    int n, m;
    scanf("%d", &n);
    int vetor[n];
    for(int i = 0;i < n; i++) scanf("%d", &vetor[i]);
    
    scanf("%d", &m);
    int vetorInverso[m];
    for(int i = 0;i < m; i++) scanf("%d", &vetorInverso[i]);
    
    if(m != n) printf("Nao Inverso");
    else{
        int inverso = 1;
        for(int i = 0, j = (m-1);i < n; i++, j--){
            if(vetor[i] != vetorInverso[j]){
                inverso = 0;
                break;   
            }
        }
        
        if(inverso) printf("Inverso");
        else printf("Nao Inverso");    
    }
    
    
    return 1;
}