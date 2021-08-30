#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int v1[n], v2[n], soma[n];
    
    for(int i = 0; i< n; i++) scanf("%d", &v1[i]);
    for(int i = 0; i< n; i++) scanf("%d", &v2[i]);
    
    for(int i = 0, j = (n-1); i< n; i++, j--){
        soma[i] = v1[i] + v2[j];
    }
    
    for(int i = 0; i< n; i++) printf("%d ", soma[i]);
    
    
    return 1;
}