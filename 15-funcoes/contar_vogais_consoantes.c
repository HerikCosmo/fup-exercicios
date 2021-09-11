#include <stdio.h>

int ehLetra(char caracter){
    int numeroascii = caracter;
    return (numeroascii >= 65 && numeroascii <= 90) || (numeroascii >= 97 && numeroascii <= 122);
}

int ehVogal(char letra){
	char vogais[] = {'A','E','I','O','U','a','e','i','o','u'};
	
	if(ehLetra(letra)){
    	for(int i = 0; i < 10; i++){
    		if(letra == vogais[i]){
    			return 1;
    			break;	
    		}
    	}    
	}
	
	return 0;
}

int ehConsoante(char letra){
    return ehLetra(letra) && !ehVogal(letra);
}

int contadorConsoantes(char frase[]){
    int cont = 0;
    
    for(int i = 0; frase[i] != '\0'; i++) if(ehConsoante(frase[i])) cont++;

    return cont;
}

int contadorVogais(char frase[]){
    int cont = 0;
    
    for(int i = 0; frase[i] != '\0'; i++) if(ehVogal(frase[i])) cont++;

    return cont;
}

int main(){
    char frase[101];
    
    scanf("%[^\n]", frase);
    
    int contVog = contadorVogais(frase);
    int contCon = contadorConsoantes(frase);
    
    printf("%d %d", contVog, contCon);
 
}