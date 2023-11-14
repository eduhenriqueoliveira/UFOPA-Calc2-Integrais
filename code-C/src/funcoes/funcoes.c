#include "funcoes.h"
#include <math.h>

double f(double x){
    return (2*x)/(1+pow(x,2));
}
double fIntegral(double x){
    return log(1+ pow(x, 2));
}

double g(double x){
    return tan(x);
}
double gIntegral(double x){
    return -log(fabs(cos(x)));
}

double h(double x){
    return 6*pow( x, 2 )* pow( ( 2*pow( x, 3 )-1 ), 3);
}
double hIntegral(double x){
    return pow(2* pow(x,3)-1, 4)/4;
}

double j(double x){
    return cos(x+7);
}
double jIntegral(double x){
    return sin(x+7);
}