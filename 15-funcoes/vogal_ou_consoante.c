#include <stdio.h>

int ehLetra(char caracter){
    int numeroascii = caracter;
    return (numeroascii >= 65 && numeroascii <= 90) || (numeroascii >= 97 && numeroascii <= 122);
}
int ehVogal(char letra){
	char vogais[] = {'A','E','I','O','U','a','e','i','o','u'};
	
	for(int i = 0; i < 10; i++){
		if(letra == vogais[i]){
			return 1;
			break;	
		}
	}
	return 0;
}


int main(){
    char caracter;
    scanf("%c", &caracter);

    if(ehLetra(caracter)){
        printf("1 ");
        if(ehVogal(caracter)) printf("V");
        else printf("C");
    }else printf("0");
}