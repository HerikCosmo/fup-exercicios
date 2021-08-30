#include <stdio.h>

int main()
{
    int n; 
    
    scanf("%d", &n);
    int A[n];
    for(int i = 0; i < n; i++) scanf("%d", &A[i]);
    
    int numsRepetidos = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(A[i] == A[j]) numsRepetidos++;
        }
    }
    
    printf("%d", numsRepetidos);
    return 0;
}