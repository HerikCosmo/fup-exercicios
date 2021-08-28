#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
        
    scanf("%d %d %d", &a, &b, &c);
    
    float delta = pow(b, 2) - (4 * a * c);
    
    if(delta < 0) printf("NTR");
    else{
        if(delta == 0){
            float x = (-b + sqrt(delta)) / (2*a);
            printf("%.2f", x);
        }else{
            float x1 = (-b + sqrt(delta)) / (2*a);
            float x2 = (-b - sqrt(delta)) / (2*a);
            printf("%.2f %.2f", x1, x2);
        }
    }
    return 1;
}