#include <stdio.h>
#include <stdlib.h>
#include "Integrais/Integrais.h"
#include "funcoes/funcoes.h"

void printDasFuncoesTabelado(int a, int b, int n, double valorEsperado, double (*funcao)(double));
void printTabela();
void limpaTela();

void main(){
    /*
     *         cond -> Variável que armazenará a condição da estrutura de repetição
     *       opCode -> Variável onde será armazenado a escolha do usuário
     *           n  -> Quantidade de quadrados
     *           a  -> Ponto "a" (ou inicial) da integral
     *           b  -> Ponto "b" (ou final) da integral
    */
    int cond, opCode, n, a, b;
    do{
        printTabela();
        scanf("%d", &opCode);
        cond=(opCode!=0);
        if(cond){
            if(5>opCode&&opCode>0){
                printf("Digite a quantidade de quadrados desejados para o cálculo (n):\n");
                scanf("%d", &n);
                printf("Digite o valor do ponto \"a\":\n");
                scanf("%d", &a);
                printf("Digite o valor do ponto \"b\":\n");
                scanf("%d", &b);
                if(a<b && 0<n){
                    switch(opCode){
                            case 1:
                                printDasFuncoesTabelado(a, b, n, integralDefinida(a, b, fIntegral), f);
                                break;
                            case 2:
                                printDasFuncoesTabelado(a, b, n, integralDefinida(a, b, gIntegral), g);
                                break;
                            case 3:
                                printDasFuncoesTabelado(a, b, n, integralDefinida(a, b, hIntegral), h);
                                break;
                            case 4:
                                printDasFuncoesTabelado(a, b, n, integralDefinida(a, b, jIntegral), j);
                                break;
                        }
                }else{
                    limpaTela();
                    printf("Digite somente valores válidos");
                }
 
                printf("\n<Pressione enter>\n");
                getchar();
                getchar();
            }else{
                limpaTela();
                printf("Digite um código válido\n");
                printf("<Pressione enter>\n");
                getchar();
                getchar();
            }
        }

    }while (cond);
    
}

void printDasFuncoesTabelado(int a, int b, int n, double valorEsperado, double (*funcao)(double)){
    limpaTela();
    printf("________________________________________________\n");
    printf("Valor esperado: %lf\n", valorEsperado);   
    for(int i=1; i<=n; i++){
        printf("________________________________________________\n");
        printf("Quantidade de quadrados nessa iteração: %d\n", i);
        printf("Valor da Integral por ponto médio: %lf\n", integralPorPontoMedio(a, b, i, funcao));
    }
}

void printTabela(){
    limpaTela();
    printf("Cálculo de integral por ponto médio\n");
    printf("Selecione uma das funções:\n");
    printf("(1) -> f(x) = (2*x)/(1+x^2))\n");
    printf("(2) -> g(x) = tg(x)\n");
    printf("(3) -> h(x) = (6 * x^2) * (2 * x^3 - 1 )^3)\n");
    printf("(4) -> j(x) = cos(x+7)\n");
    printf("Digite o código da função (0 para sair) e aperte enter: ");
}

void limpaTela(){
    system("cls");
}