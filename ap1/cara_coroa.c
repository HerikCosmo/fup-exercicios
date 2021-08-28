#include <stdio.h>

int main(){
    
    int l1,l2,l3;
    
    scanf("%d",&l1);
    scanf("%d",&l2);
    scanf("%d",&l3);
    
    int cara = 0, coroa = 0;
    (l1 == 1) ? cara += 1 : (coroa += 1);
    (l2 == 1) ? cara += 1 : (coroa += 1);
    (l3 == 1) ? cara += 1 : (coroa += 1);
    
    if(cara == 3) printf("Cara");
    else if(coroa == 3) printf("Coroa");
    else{
        int l4;
        scanf("%d", &l4);
        
        (l4 == 1) ? cara += 1 : (coroa += 1);
        
        if(cara == 3) printf("Cara");
        else if(coroa == 3) printf("Coroa");
        else{
            int l5;
            scanf("%d", &l5);
        
            (l5 == 1) ? cara += 1 : (coroa += 1);
        
            if(cara == 3) printf("Cara");
            else if(coroa == 3) printf("Coroa");
        }
    }
    
    return 1;
}