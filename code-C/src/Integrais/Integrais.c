#include "Integrais.h"

double deltaX(int b, int a, int n){
    return (double)(b-a)/n;
}

double integralPorPontoMedio(int a, int b, int qntQuadrados, double (*funcao)(double)){
    //  variavel de deltaX, calculada na função própria
    double dX = deltaX(b,a,qntQuadrados);

    //  variavel do resultado, começando em 0
    double resultado=0;
    
    
    //  Laço para fazer o somatório
    //  (2*a+dX)/2 == (a+(a+dX))/2 
    /*
        ! (a+(a+dX))/2 <- função inicial, 
        * o primeiro a vem do ponto inicial
        * a+dX é o ponto final do quadrado mais próximo
        * divide por 2 pra achar o meio, começa a variar com dX em sequencia a partir daí
    */
    for(double i=(2*a+dX)/2; i<=b;i+=dX){
        resultado+=funcao(i);
    }

    //  retorna o resultado*dX por causa da fórmula
    return resultado*dX;
}

double integralDefinida(int a, int b, double (*funcaoIntegrada)(double)){
    return (funcaoIntegrada(b)-funcaoIntegrada(a));
}