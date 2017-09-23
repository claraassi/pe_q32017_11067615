#include <stdio.h>

int main() {
    int x, y, razao;

    /* leitura de x e y */
    printf("Entre com x:");
    scanf("%d",&x);
    printf("Entre com y:");
    scanf("%d",&y);

    /* divide x por y e imprime o resultado */
    razao = x / y;
    printf("Resultado da divisao: %d\n",razao);
}
