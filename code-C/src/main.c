#include <stdio.h>

#include "pontoMedio/pontoMedio.h"
#include "funcoes/funcoes.h"

double func(double x){
    return 1.0/x;
}

void main(){
    printf("Ponto a: %d\nPonto b: %d\nQuantidade de quadrados: %d\nValor da integral: %lf\n",1,2,5,integralPorPontoMedio(1,2,5,func));
}