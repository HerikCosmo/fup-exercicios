#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int fib_n = 1;
    if(n > 2){
        int ant1 = 1, ant2= 1;
        while(n > 2){
            fib_n = ant1 + ant2;
            ant2 = ant1;
            ant1 = fib_n;
            n--;
        }
    }
     printf("%d", fib_n);
}