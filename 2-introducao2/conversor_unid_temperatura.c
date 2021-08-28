#include <stdio.h>

void main(){
    float tempCelsius, tempFahrenheit;
    
    scanf("%f", &tempCelsius);
    scanf("%f", &tempFahrenheit);
    
    
    float tempFahrenheitConvertido = 9.0*tempCelsius/5.0 + 32.0;
    float tempCelsiusConvertido = ((tempFahrenheit - 32) / 9) * 5;
    
    printf("%.2f C = %.2f F \n", tempCelsius, tempFahrenheitConvertido);
    
    printf("%.2f F = %.2f C", tempFahrenheit, tempCelsiusConvertido);

            
}