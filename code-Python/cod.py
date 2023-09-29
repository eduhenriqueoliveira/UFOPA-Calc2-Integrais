def func(x):
    return (1/x)

def delt_x(b,a,n):
    return (b-a)/n

def frange(start, stop, step):
    current = start
    while current < stop:
        yield current
        current += step

def integralPorPontoMedio(a, b, quantidadeDeQuadrados, funcao):
    dX=delt_x(b,a,quantidadeDeQuadrados)
    resultado=0
    for i in frange((2*a+dX)/2, b, dX):
        resultado+=funcao(i)
    return resultado*dX

print(integralPorPontoMedio(1,2,5,func))
