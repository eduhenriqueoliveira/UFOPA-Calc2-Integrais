#ifndef PONTO_MEDIO_H
#define PONTO_MEDIO_H

double deltaX(int b, int a, int n);

double integralPorPontoMedio(int a, int b, int qntQuadrados, double (*funcao)(double));

#endif