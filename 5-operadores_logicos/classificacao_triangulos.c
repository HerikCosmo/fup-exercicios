#include <stdio.h>

int main(){
    
    int l1, l2, l3;
    scanf("%d %d %d", &l1, &l2, &l3);
    
    if(l1 + l2 < l3 || l2 + l3 < l1 || l1 + l3 < l2) printf("NT");
    else{
        if(l1 == l2 && l2 == l3) printf("EQ");
        else if(l1 != l2 && l2 != l3 && l3 != l1) printf("ES");
        else printf("IS");    
    }
    
    return 1;
}