#include <stdio.h>

int main(){
    
    int n;
    scanf("%d", &n);
    int v[n];
    
    for(int i = 0; i < n; i++) scanf("%d", &v[i]);
    
    int v_inverso[n];
    
    for(int i = 0, o = (n-1); i < n; i++, o--) v_inverso[i] = v[o];
    for(int i = 0; i < n; i++) v[i] = v_inverso[i];
    for(int i = 0; i < n; i++) printf("%d ", v[i]);
    
    return 1;
}

