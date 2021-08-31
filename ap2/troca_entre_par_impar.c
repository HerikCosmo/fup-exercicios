#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int v[n];
    
    for(int i = 0; i < n; i++) scanf("%d", &v[i]);

    for(int i = 0; i < n; i+= 2){
        int aux = v[i];
        v[i] = v[i + 1];
        v[i + 1] = aux;
    }
    
    for(int i = 0; i < n; i++) printf("%d ", v[i]);
    
    return 1;
}