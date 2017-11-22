#include <stdio.h>
#include <time.h>
#include <limits.h>
#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

int f1 (ulint x)
{
    int i = 0;
    
    while (x>1) {
        if ((x%2) != 0) {
            i++;
        }
        
        x = x/2;
    }
    
    if (i == 0) return 1;
    return 0;
}

int f2 (ulint x)
{
    int i = 0;
    
    while (x>1) {
        if ((x&1)) {
            i++;
        }
        
        x = x >> 1;
    }
    
    if (i == 0) return 1;
    return 0;
}

int main (void)
{
    clock_t tempo_init, tempo_fim;
    double tempo_gasto;
    ulint soma = 0;
    
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
