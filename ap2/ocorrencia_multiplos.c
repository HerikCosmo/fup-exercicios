#include <stdio.h>

int main(){
    int n_v1, n_v2;
    scanf("%d %d", &n_v1, &n_v2);
    
    int v1[n_v1], v2[n_v2], qtd_mult[n_v1];
    
    for(int i = 0; i < n_v1; i++) scanf("%d", &v1[i]);
    for(int i = 0; i < n_v2; i++) scanf("%d", &v2[i]);
    
    for(int i = 0; i < n_v1; i++){
        int cont = 0;
        for(int j = 0; j < n_v2; j++) if(v2[j] % v1[i] == 0) cont++;
        qtd_mult[i] = cont;
    }
    
    for(int i = 0; i < n_v1; i++) printf("%d ", qtd_mult[i]);
    
    return 1;
}
