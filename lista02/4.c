#include <stdio.h>
#include <math.h>

int erro(int e)
{
    printf("Erro %d\n",e);
    return 0;
}

float soma(float x,float y)
{
    return x + y;
}

float subtracao(float x,float y)
{
    return x - y;
}

float multiplicacao(float x,float y)
{
    return x * y;
}

float divisao(float x,float y)
{
    if (y != 0) return x / y;
    return erro(2); /* divisao por 0 */
}

float potenciacao(float x,float y)
{
    return pow(x,y);
}

float calculadora(int operacao,float x,float y)
{
    if (operacao == 1) return soma(x,y);
    if (operacao == 2) return subtracao(x,y);
    if (operacao == 3) return multiplicacao(x,y);
    if (operacao == 4) return divisao(x,y);
    if (operacao == 5) return potenciacao(x,y);
    return erro(1); /* operacao invalida */
}

float main()
{
    int operacao;
    float x, y;
    
    scanf("%d %f %f",&operacao,&x,&y);
    
    printf("%f\n",calculadora(operacao,x,y));

    return 0.0;
}
