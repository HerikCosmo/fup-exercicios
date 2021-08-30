#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d", &n);
    int vetor[n];
    int s = 0;
    for(int i =0; i< n; i++) scanf("%d", &vetor[i]);
    
    for(int i =0, j = (n-1);j > i; i++, j-- ){
        s += pow((vetor[i] - vetor[j]), 2);
    }
    
    printf("%d", s);
    
    
    return 1;
}