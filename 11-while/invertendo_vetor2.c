#include <stdio.h>

int main(){
    
    int n;
    scanf("%d", &n);
    int v[n];
    
    for(int i = 0; i < n; i++) scanf("%d", &v[i]);
    
    for(int i = 0, o = (n-1); i < (n/2); i++, o--){
        int ultimo = v[o], primeiro = v[i];
        v[i] = ultimo;
        v[o] = primeiro;
    }
    for(int i = 0; i < n; i++) printf("%d ", v[i]);
    
    return 1;
}

