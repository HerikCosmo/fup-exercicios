#include <stdio.h>

int main(){
    int m, n; 
    
    scanf("%d", &m);
    int vetor1[m];
    for(int i = 0; i < m; i++) scanf("%d", &vetor1[i]);
    
    
    scanf("%d", &n);
    int vetor2[n];
    for(int i = 0; i < n; i++) scanf("%d", &vetor2[i]);
    
    int restaNums = m;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(vetor1[i] == vetor2[j]){
                restaNums--;
                break;
            }
        }
    }
    
    if(!restaNums) printf("Contido");
    else printf("Nao contido");

    return 0;
}