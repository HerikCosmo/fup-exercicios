#include <stdio.h>

int main(){
    int num;
    for(int i=1; i<=11;i++){
        scanf("%d", &num);
        num % 2 == 0? printf("Par\n"): printf("Impar\n");
    }

    return  1;
}