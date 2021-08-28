#include <stdio.h>

int main(){
    double n1, n2;
    char op;
    
    scanf("%lf %lf %c", &n1, &n2, &op);
    

        if(op == '+'){
            double result = n1 + n2; 
            printf("%f", result);
        }else if(op == '-'){
            double result = n1 - n2; 
            printf("%f", result);
        }else if(op == '*'){
            double result = n1 * n2; 
            printf("%f", result);
        }else if(op == '/'){
            if(n2 == 0){
                printf("Operacao invalida");
            }else{
                double result = n1 / n2; 
                printf("%f", result);
            }
        }else{
            printf("Operacao invalida");
        }
    
    return 1;
}