#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    float ap1[n];
    float ap2[n];
    float media[n];
    
    for(int i = 0; i < n; i++) scanf("%f", &ap1[i]);
    
    for(int i = 0; i < n; i++) scanf("%f", &ap2[i]);

    for(int i = 0; i < n; i++){
        media[i] = (ap1[i] + ap2[i]) / 2.0;  
        printf("%.2f\n", media[i]);
    } 
 
    return 1;
}