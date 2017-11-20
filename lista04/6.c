#include <stdio.h>
#include <time.h>
#include <limits.h>
#include <stdlib.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

ulint f1 (ulint x, ulint y)
{
    ulint max;
    
    max = (x + y + abs(x-y)) / 2;
    
    if (max == x) return 1;
    return 0;
}

ulint f2 (ulint x, ulint y)
{
    ulint max;
    
    max = (x + y + abs(x-y)) >> 1;
    
    if (max == x) return 1;
    return 0;
}

int main (void)
{
    clock_t tempo_init, tempo_fim;
    double tempo_gasto;
    ulint soma = 0;
    ulint x, y;
    
    scanf("%lu %lu", &x, &y);
    
    if (f1(x,y)) {
        printf("maior= %lu e menor= %lu (normal)\n", x, y);
    } else {
        printf("maior= %lu e menor= %lu (normal)\n", y, x);
    }
    
    if (f2(x,y)) {
        printf("maior= %lu e menor= %lu (bitwise)\n", x, y);
    } else {
        printf("maior= %lu e menor= %lu (bitwise)\n", y, x);
    }
    
    /* medicao de tempo gasto na versao normal */
    tempo_init = clock();
    for (int i = 0; i < BIGNUM; i++) {
        for (int j = 0; j < 10; j++) {
            soma += f1(i,j);
        }
    }
    
    tempo_fim = clock();
    tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
    printf("Tempo gasto na versao normal: %lf\n", tempo_gasto);
    
    /* medicao de tempo gasto na versao bitwise */
    tempo_init = clock();
    for (int i = 0; i < BIGNUM; i++) {
        for (int j = 0; j < 10; j++) {
            soma += f2(i,j);
        }
    }
    
    tempo_fim = clock();
    tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
    printf("Tempo gasto na versao bitwise: %lf\n", tempo_gasto);
    
    return 0;
}
