#include <stdio.h>

int divide(int barra, int cont){    
    if(barra >= 2){
        cont = divide(barra/2, cont);
        cont = divide(barra/2, cont);
        cont = divide(barra/2, cont);
        cont = divide(barra/2, cont);
    return cont;
    }
    return cont+4;
}

int main(){
    int barra = 0;
    int cont = 0;
    scanf("%d", &barra);

    int result = divide((barra/2), cont);

    printf("%d\n", result);
}