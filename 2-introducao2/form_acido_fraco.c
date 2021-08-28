#include <stdio.h>
#include <math.h>

void main(){
    double h3o, ka, kw, ca;
    
    scanf("%lf", &h3o);
    scanf("%lf", &ka);
    scanf("%lf", &kw);
    scanf("%lf", &ca);
    
    double formula = pow(h3o, 3.0) + (ka * pow(h3o, 2.0)) - (((ka * ca) + kw) * h3o) - (kw * ka);
    
    printf("%f", formula);
}