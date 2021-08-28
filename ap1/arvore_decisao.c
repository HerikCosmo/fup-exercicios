#include <stdio.h>

int main(){
    
    int febre;
    scanf("%d", &febre);
    
    if(febre == 1){ 
        int garganta_inflamada;
        scanf("%d", &garganta_inflamada);
        
        (garganta_inflamada == 1) ? printf("gripe") : printf("mal-estar");
    }else{
        int tonturas; 
        scanf("%d", &tonturas);
        
        if(tonturas == 1){
            int zumbido_ouvido;
            scanf("%d", &zumbido_ouvido);
            
            if(zumbido_ouvido == 1) printf("labirintite");
            else{
                int dor_cabeca;
                scanf("%d", &dor_cabeca);
                
                (dor_cabeca == 1) ? printf("dengue") : printf("indigestao");
            }
        }else{
            int calafrios;
            scanf("%d", &calafrios);
            
            (calafrios == 1) ? printf("resfriado") : printf("sem doenca");
        }
    }
    
    
    return 1;
}