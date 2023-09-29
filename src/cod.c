#include <stdio.h>
#define FUNCAO(x) (1.0/(x))

double func(double x){
    return 1.0/x;
}

double deltaX(int b, int a, int n){
    return (double)(b-a)/n;
}

double integralPorPontoMedio(int a, int b, int qntQuadrados, double (*funcao)(double)){
    double dX = deltaX(b,a,qntQuadrados);

    double resultado=0;
    
    for(double i=(2*a+dX)/2; i<=b;i+=dX){
        resultado+=funcao(i);
    }

    return resultado*dX;
}
void main(){
    printf("%lf\n", integralPorPontoMedio(1,2,5,func));
}