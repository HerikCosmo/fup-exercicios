#include <stdio.h>

int pertencePA(int a1, int r, int num){
    return (num - a1) %  r == 0;
}

int main(){
    int a1, r, num;
    scanf("%d %d %d", &a1, &r, &num);
    
    printf("%d", pertencePA(a1, r, num));
    
}