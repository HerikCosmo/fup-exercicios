#include <stdio.h>

int main()
{   
    int m,n;
    
    scanf("%d", &m);
    int A[m];
    for(int i = 0; i < m; i++) scanf("%d", &A[i]);
    
    scanf("%d", &n);
    int B[n];
    for(int i = 0; i < n; i++) scanf("%d", &B[i]);
    
    for(int i = 0; i < m; i++){
        for(int o = 0; o < n; o++){
            printf("(%d,%d) ", A[i], B[o]);
        }
    }

    return 0;
}