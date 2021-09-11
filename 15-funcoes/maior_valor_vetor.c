#include <stdio.h>
#include <limits.h>

int retornaMaior(int vet[], int n){
    int maior = INT_MIN;
    for(int i = 0; i < n; i++){
        if(vet[i] > maior) maior = vet[i];
    }
    return maior;
}

int main(){
    int n;
    scanf("%d", &n);
    
    int nums[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &nums[i]);
    }
    
    printf("%d", retornaMaior(nums, n));
}