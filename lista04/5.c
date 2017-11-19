#include <stdio.h>
#include <time.h>
#include <limits.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

ulint f1 (ulint x)
{
    ulint soma = 0;
    
    while (x > 0) {
        soma += x % 2;
        x = x / 2;
    }
    
    return soma;
}

ulint f2 (ulint x)
{
    ulint soma = 0;
    
    while (x > 0) {
        soma += x & 1;
        x = x >> 1;
    }
    
    return soma;
}

int main (void)
{
    clock_t tempo_init, tempo_fim;
    double tempo_gasto;
    ulint soma = 0;
    ulint numero;
    
    scanf("%lu", &numero);
    
    printf("%lu (normal)\n%lu (bitwise)\n", f1(numero), f2(numero));
    
    /* medicao de tempo gasto na versao normal */
    tempo_init = clock();
    for (int i = 0; i < BIGNUM; i++) {
        soma += f1(i);
    }
    
    tempo_fim = clock();
    tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
    printf("Tempo gasto na versao normal: %lf\n", tempo_gasto);
    
    /* medicao de tempo gasto na versao bitwise */
    tempo_init = clock();
    for (int i = 0; i < BIGNUM; i++) {
        soma += f2(i);
    }
    
    tempo_fim = clock();
    tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
    printf("Tempo gasto na versao bitwise: %lf\n", tempo_gasto);
    
    return 0;
}
