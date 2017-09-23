#include <stdio.h>

int main() {
    int x, y, soma;

    /* leitura de x e y */
    printf("Entre com x:");
    scanf("%d",&x);
    printf("Entre com y:");
    scanf("%d",&y);

    /* soma x e y e imprime o resultado */
    soma = x + y;
    printf("Resultado da soma: %d\n",soma);
}
