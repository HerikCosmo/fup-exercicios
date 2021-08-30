#include <stdio.h>

int main(){
    int n;
    scanf("%d" , &n);
    
    int vetor1[n];
    
    for(int i = 0; i < n; i++) scanf("%d", &vetor1[i]);
    
    int m;
    scanf("%d" , &m);
    
    int vetor2[m];
    
    for(int i = 0; i < m; i++) scanf("%d", &vetor2[i]);
    
    int uniao[n+m];
    
    for(int i = 0; i < n; i++) uniao[i] = vetor1[i];

    for(int i = n, j = 0; j < m; i++, j++) uniao[i] = vetor2[j];
    
    printf("%d\n", (n+m));
    for(int i = 0; i < (n+m); i++) printf("%d ", uniao[i]);
    
    
    return 1;
}