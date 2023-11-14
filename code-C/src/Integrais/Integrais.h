#ifndef INTEGRAIS_H
#define INTEGRAIS_H

double deltaX(int b, int a, int n);

double integralPorPontoMedio(int a, int b, int qntQuadrados, double (*funcao)(double));

double integralDefinida(int a, int b, double (*funcao)(double));

#endif