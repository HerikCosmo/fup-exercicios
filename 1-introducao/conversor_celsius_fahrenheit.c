#include <stdio.h>

void main(){
    float tempCelsius;
    
    scanf("%f", &tempCelsius);
    
    float tempFahrenheit = 9.0*tempCelsius/5.0 + 32.0;
    
    printf("%f", tempFahrenheit);
}